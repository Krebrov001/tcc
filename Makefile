CC  := clang
CXX := clang++

# Redefine make link target to use CXX instead of CC as linker
LINK.o = $(CXX) $(LDFLAGS) $(TARGET_ARCH)

# Configuration flags for the LLVM libraries.
BINDIR           := $(realpath $(dir $(shell which llvm-config)))
LLVMCONFIG       := $(BINDIR)/llvm-config
LLVMCOMPONENTS   := profiledata bitreader option mcparser
CXXFLAGS         := $(shell $(LLVMCONFIG) --cxxflags) -std=c++14 -fcxx-exceptions -g -Wall

# If object or library AA needs a symbol from library BB, then AA should come before library BB in the command-
# line invocation of the linker.
# The result is a reverse topological sort.
# Libraries that are dependents come before their dependencies.
LDLIBS := \
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

# Names of files used in this project.
EXECUTABLE := refactoring_tool
CXX_FILES  := refactoring_tool.cpp \
              BaseMatchCallback.cpp \
              RemoveMemcpyMatchCallback.cpp \
			  RemoveMemsetMatchCallback.cpp \
			  MakeStaticMatchCallback.cpp \
			  RemovePointerMatchCallback.cpp \
			  RemoveHypotMatchCallback.cpp \
			  RemoveVariablesMatchCallback.cpp \
			  FindVariablesMatchCallback.cpp \
			  RemoveAssignmentMatchCallback.cpp \
			  StaticAnalysisDiagnosticConsumer.cpp \
			  StaticAnalysisAction.cpp \
			  StaticAnalysisActionFactory.cpp \
			  RemoveInitializeMatchCallback.cpp

O_FILES    := $(CXX_FILES:cpp=o)

# What is the purpose of .PHONY in a makefile?
# https://stackoverflow.com/q/2145590/5500589

# clang-tidy flags list
# I'm using only the necessary options, the ones applicable to the project.
# Not all clang-tidy checks are necessary.
# https://www.youtube.com/watch?v=oxpsHk1yq88
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
RemoveMemsetMatchCallback.o: RemoveMemsetMatchCallback.cpp custom_exceptions.h RemoveMemsetMatchCallback.h BaseMatchCallback.h
MakeStaticMatchCallback.o: MakeStaticMatchCallback.cpp MakeStaticMatchCallback.h BaseMatchCallback.h
RemovePointerMatchCallback.o: RemovePointerMatchCallback.cpp RemovePointerMatchCallback.h BaseMatchCallback.h
RemoveHypotMatchCallback.o: RemoveHypotMatchCallback.cpp RemoveHypotMatchCallback.h BaseMatchCallback.h
FindVariablesMatchCallback.o: FindVariablesMatchCallback.cpp FindVariablesMatchCallback.h BaseMatchCallback.h
RemoveVariablesMatchCallback.o: RemoveVariablesMatchCallback.cpp RemoveVariablesMatchCallback.h BaseMatchCallback.h
RemoveAssignmentMatchCallback.o: RemoveAssignmentMatchCallback.cpp RemoveAssignmentMatchCallback.h BaseMatchCallback.h
StaticAnalysisDiagnosticConsumer.o : StaticAnalysisDiagnosticConsumer.cpp StaticAnalysisDiagnosticConsumer.h
StaticAnalysisAction.o : StaticAnalysisAction.cpp StaticAnalysisAction.h StaticAnalysisDiagnosticConsumer.h
StaticAnalysisActionFactory.o : StaticAnalysisActionFactory.cpp StaticAnalysisActionFactory.h
RemoveInitializeMatchCallback.o : RemoveInitializeMatchCallback.cpp RemoveInitializeMatchCallback.h BaseMatchCallback.h


# Restore model program to original state
.PHONY: restore_models
restore_models:
	git checkout -- models/


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
.PHONY: refactor
refactor: $(addprefix $(BINDIR)/,$(EXECUTABLE))
	@$(MAKE) -s -C models refactor


.PHONY: clean
clean:
	rm -f $(EXECUTABLE) $(O_FILES)
	sudo rm -f $(addprefix $(BINDIR)/,$(EXECUTABLE))
