CC  := clang
CXX := clang++

# Redefine make link target to use CXX instead of CC as linker
LINK.o = $(CXX) $(LDFLAGS) $(TARGET_ARCH)

# Configuration flags for the LLVM libraries.
BINDIR         := $(realpath $(dir $(shell which llvm-config)))
LLVMCONFIG     := $(BINDIR)/llvm-config
LLVMCOMPONENTS := profiledata bitreader option mcparser
CXXFLAGS       := $(shell $(LLVMCONFIG) --cxxflags) -fcxx-exceptions
LDLIBS := \
	-lclangTooling\
	-lclangFrontend\
	-lclangDriver\
	-lclangSerialization\
	-lclangParse\
	-lclangSema\
	-lclangAnalysis\
	-lclangEdit\
	-lclangAST\
	-lclangASTMatchers\
	-lclangLex\
	-lclangBasic\
	-lclangRewrite\
	-lclangToolingCore\
	-lclangFormat\
	$(shell $(LLVMCONFIG) --libs $(LLVMCOMPONENTS))\
	$(shell $(LLVMCONFIG) --system-libs $(LLVMCOMPONENTS))

# clang-tidy flags list
# I'm using only the necessary options, the ones applicable to the project.
# Not all clang-tidy checks are necessary.
# https://www.youtube.com/watch?v=oxpsHk1yq88

# Names of files used in this project.
EXECUTABLE := refactoring_tool
CXX_FILES  := refactoring_tool.cpp \
              RemoveMemcpyMatchCallback.cpp \
			  MakeStaticMatchCallback.cpp \
			  RemovePointerMatchCallback.cpp \
			  RemoveHypotMatchCallback.cpp \
			  RemoveVariablesMatchCallback.cpp \
			  FindVariablesMatchCallback.cpp

O_FILES    := $(CXX_FILES:cpp=o)

# What is the purpose of .PHONY in a makefile?
# https://stackoverflow.com/q/2145590/5500589
CHECKS = -checks=-*,bugprone-*,cert-*,-cert-err58-cpp,cppcoreguidelines-*,-cppcoreguidelines-pro-bounds-pointer-arithmetic,clang-analyzer-*,hicpp-*,llvm-*,-llvm-header-guard,misc-*,modernize-*,performance-*,portability-*,readability-*

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
RemoveMemcpyMatchCallback.o: RemoveMemcpyMatchCallback.cpp custom_exceptions.h RemoveMemcpyMatchCallback.h
MakeStaticMatchCallback.o: MakeStaticMatchCallback.cpp MakeStaticMatchCallback.h
RemovePointerMatchCallback.o: RemovePointerMatchCallback.cpp RemovePointerMatchCallback.h
RemoveHypotMatchCallback.o: RemoveHypotMatchCallback.cpp RemoveHypotMatchCallback.h
FindVariablesMatchCallback.o: FindVariablesMatchCallback.cpp FindVariablesMatchCallback.h
RemoveVariablesMatchCallback.o: RemoveVariablesMatchCallback.cpp RemoveVariablesMatchCallback.h

# Restore model program to original state
.PHONY: reset
reset:
	git checkout -- navsses_model/

# Verify the modified code generates the correct results
.PHONY: verify
verify:
	@$(MAKE) -s -C models verify
	@$(MAKE) -s -C models clean

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
