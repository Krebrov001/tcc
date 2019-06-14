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

# Names of files used in this project.
EXECUTABLE := refactoring_tool
CXX_FILES  := refactoring_tool.cpp RemoveMemcpyMatchCallback.cpp MakeStaticMatchCallback.cpp
O_FILES    := $(CXX_FILES:cpp=o)

# What is the purpose of .PHONY in a makefile?
# https://stackoverflow.com/q/2145590/5500589

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

# Restore model program to original state
.PHONY: reset
reset:
	cp -af navsses_model/[^m]*.c navsses_model/*.h working_navsses_model/

# Verify the modified code generates the correct results
.PHONY: verify
verify:
	@cp navsses_model/main.c navsses_model/Makefile working_navsses_model/
	@$(MAKE) -s -C working_navsses_model verify
	@$(MAKE) -s -C working_navsses_model clean
	@rm -f working_navsses_model/main.c working_navsses_model/Makefile

# Run static code analysis checks
.PHONY: tidy
tidy:
	clang-tidy $(CXX_FILES) --

# Run the refactoring_tool program
.PHONY: run
run: $(addprefix $(BINDIR)/,$(EXECUTABLE))
	$(EXECUTABLE) working_navsses_model/complete_system_io.c --

.PHONY: clean
clean:
	rm -f $(EXECUTABLE) $(O_FILES)
	sudo rm -f $(addprefix $(BINDIR)/,$(EXECUTABLE))
