CC  := clang
CXX := clang++
#EXECUTABLES := make_static find_free remove_memcpy

# Configuration flags for the LLVM libraries.
BINDIR         := $(realpath $(dir $(shell which llvm-config)))
LLVMCONFIG     := $(BINDIR)/llvm-config
LLVMCOMPONENTS := profiledata bitreader option mcparser
CXXFLAGS       := $(shell $(LLVMCONFIG) --cxxflags) -fcxx-exceptions
LIBS := \
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
CXX_FILES  := refactoring_tool.cpp RemoveMemcpyMatchCallback.cpp
O_FILES    := refactoring_tool.o RemoveMemcpyMatchCallback.o
H_FILES    := RemoveMemcpyMatchCallback.h custom_exceptions.h

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

# Build the refactoring tool
$(EXECUTABLE): $(O_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

# Build the refactoring_tool.o file.
refactoring_tool.o: refactoring_tool.cpp $(H_FILES)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Build the RemoveMemcpyMatchCallback.o file.
RemoveMemcpyMatchCallback.o: RemoveMemcpyMatchCallback.cpp RemoveMemcpyMatchCallback.h custom_exceptions.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Restore model program to original state
.PHONY: reset
reset:
	cp -af navsses_model/[^m]*.c navsses_model/*.h working_navsses_model/

# Verify the modified code generates the correct results
.PHONY: verify
verify: $(BINDIR)/$(EXECUTABLE)
	cp navsses_model/main.c navsses_model/Makefile working_navsses_model/
	$(MAKE) -C working_navsses_model verify
	$(MAKE) -C working_navsses_model clean
	rm -f working_navsses_model/main.c working_navsses_model/Makefile

# Run the refactoring_tool program
.PHONY: run
run: $(BINDIR)/$(EXECUTABLE)
	$(EXECUTABLE) working_navsses_model/complete_system_io.c --
#run: $(BINDIR)/make_static
#	make_static working_navsses_model/complete_system_io.c working_navsses_model/complete_system_io.h --

.PHONY: clean
clean:
	rm -f $(EXECUTABLE) $(O_FILES)
	sudo rm -f $(addprefix $(BINDIR)/,$(EXECUTABLE))
