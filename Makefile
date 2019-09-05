CC  := clang
CXX := clang++

# Redefine make link target to use CXX instead of CC as linker
LINK.o = $(CXX) $(LDFLAGS) $(TARGET_ARCH)

# Configuration flags for the LLVM libraries.
LLVM_PROJECT_DIR := /mnt/c/Users/winko/Documents/Clang_new/llvm-project
BINDIR           := $(realpath $(dir $(shell which llvm-config)))
LLVMCONFIG       := $(BINDIR)/llvm-config
LLVMCOMPONENTS   := profiledata bitreader option mcparser
CXXFLAGS         := $(shell $(LLVMCONFIG) --cxxflags) -fcxx-exceptions -g -Wall\
                    -I $(LLVM_PROJECT_DIR)/clang-tools-extra\
					-I $(LLVM_PROJECT_DIR)
# If object or library AA needs a symbol from library BB, then AA should come before library BB in the command-
# line invocation of the linker.
# The result is a reverse topological sort.
# Libraries that are dependents come before their dependencies.
LDLIBS := \
    -L $(LLVM_PROJECT_DIR)/build/lib\
	-lclangTidyUtils\
	-lclangTidy\
	-lclangStaticAnalyzerFrontend\
	-lclangStaticAnalyzerCheckers\
	-lclangStaticAnalyzerCore\
	-lclangCrossTU\
    -lclangIndex\
	-lclangTooling\
	-lclangFormat\
	-lclangToolingInclusions\
	-lclangToolingCore\
	-lclangFrontend\
	-lclangSerialization\
	-lclangParse\
	-lclangSema\
    -lclangAnalysis\
    -lclangEdit\
    -lclangASTMatchers\
    -lclangAST\
    -lclangRewrite\
    -lclangLex\
    -lclangDriver\
	-lclangBasic\
	$(shell $(LLVMCONFIG) --libs $(LLVMCOMPONENTS))\
	$(shell $(LLVMCONFIG) --system-libs $(LLVMCOMPONENTS))
# When I ungraded clang to the latest version,
# I encountered this cryptic bug described here:
# https://github.com/MaskRay/ccls/issues/224
# http://clang-developers.42468.n3.nabble.com/Linking-issues-after-upgrading-6-0-0-gt-7-0-0-with-homebrew-td4062414.html
#
# Apparently it is because libclangToolingInclusions.a is a dependency of clang/lib/Format/Format.cpp
# I had to find where that file was kept.
# The first added line -L $(LLVM_PROJECT_DIR)/build/lib/ specifies where the file is stored.
# Also this line -lclangToolingInclusions is needed to link that library file to the project,
# however, for some reason you should not put the "lib" prefix and ".a" suffix before and after
# the name of the file when -l is used. That is important worth noting.

# clang-tidy flags list
# I'm using only the necessary options, the ones applicable to the project.
# Not all clang-tidy checks are necessary.
# https://www.youtube.com/watch?v=oxpsHk1yq88

# Names of files used in this project.
EXECUTABLE := refactoring_tool
CXX_FILES  := refactoring_tool.cpp \
              BaseMatchCallback.cpp \
              RemoveMemcpyMatchCallback.cpp \
			  MakeStaticMatchCallback.cpp \
			  RemovePointerMatchCallback.cpp \
			  RemoveHypotMatchCallback.cpp \
			  RemoveVariablesMatchCallback.cpp \
			  FindVariablesMatchCallback.cpp \
			  RemoveAssignmentMatchCallback.cpp \
			  StaticAnalysisDiagnosticConsumer.cpp

O_FILES    := $(CXX_FILES:cpp=o)

# What is the purpose of .PHONY in a makefile?
# https://stackoverflow.com/q/2145590/5500589
CHECKS := -checks=-*,bugprone-*,cert-*,-cert-err58-cpp,cppcoreguidelines-*,-cppcoreguidelines-pro-bounds-pointer-arithmetic,clang-analyzer-*,hicpp-*,llvm-*,-llvm-header-guard,misc-*,modernize-*,performance-*,portability-*,readability-*

# Build executables
.PHONY: all
all: $(EXECUTABLE)

# Install executables into same directory as llvm-config, by command
.PHONY: install
install: $(EXECUTABLE)
	sudo cp $(EXECUTABLE) $(BINDIR)

# Install executables into same directory as llvm-config, on demand
$(addprefix $(BINDIR)/,$(EXECUTABLE)): $(EXECUTABLE)
	sudo cp $(EXECUTABLE) $(BINDIR)

# File dependencies
$(EXECUTABLE): $(O_FILES)
refactoring_tool.o: refactoring_tool.cpp RemoveMemcpyMatchCallback.h MakeStaticMatchCallback.h
BaseMatchCallback.o: BaseMatchCallback.cpp BaseMatchCallback.h
RemoveMemcpyMatchCallback.o: RemoveMemcpyMatchCallback.cpp custom_exceptions.h RemoveMemcpyMatchCallback.h BaseMatchCallback.h
MakeStaticMatchCallback.o: MakeStaticMatchCallback.cpp MakeStaticMatchCallback.h BaseMatchCallback.h
RemovePointerMatchCallback.o: RemovePointerMatchCallback.cpp RemovePointerMatchCallback.h BaseMatchCallback.h
RemoveHypotMatchCallback.o: RemoveHypotMatchCallback.cpp RemoveHypotMatchCallback.h BaseMatchCallback.h
FindVariablesMatchCallback.o: FindVariablesMatchCallback.cpp FindVariablesMatchCallback.h BaseMatchCallback.h
RemoveVariablesMatchCallback.o: RemoveVariablesMatchCallback.cpp RemoveVariablesMatchCallback.h BaseMatchCallback.h
RemoveAssignmentMatchCallback.o: RemoveAssignmentMatchCallback.cpp RemoveAssignmentMatchCallback.h BaseMatchCallback.h
StaticAnalysisDiagnosticConsumer.o : StaticAnalysisDiagnosticConsumer.cpp StaticAnalysisDiagnosticConsumer.h


# Restore model program to original state
.PHONY: restore_model
restore_model:
	git checkout -- navsses_model/

# Verify the modified code generates the correct results
.PHONY: verify
verify:
	@$(MAKE) -s -C navsses_model verify
	@$(MAKE) -s -C navsses_model clean

# Run static code analysis checks
.PHONY: tidy
tidy:
	clang-tidy $(CHECKS) $(CXX_FILES) --

# Run the refactoring_tool program
.PHONY: run
run: $(addprefix $(BINDIR)/,$(EXECUTABLE))
	$(EXECUTABLE) navsses_model/complete_system_io.c --

.PHONY: clean
clean:
	rm -f $(EXECUTABLE) $(O_FILES)
	sudo rm -f $(addprefix $(BINDIR)/,$(EXECUTABLE))
