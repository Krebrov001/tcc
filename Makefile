CC := clang
CXX := clang++
EXECUTABLES := make_static find_free remove_memcpy
BINDIR := $(realpath $(dir $(shell which llvm-config)))
LLVMCONFIG := $(BINDIR)/llvm-config
LLVMCOMPONENTS := profiledata bitreader option mcparser
CXXFLAGS := $(shell $(LLVMCONFIG) --cxxflags)

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

# Build executables
all: $(EXECUTABLES)

# Install executables into same directory as llvm-config, by command
install: $(EXECUTABLES)
	sudo cp $(EXECUTABLES) $(BINDIR)

# Install executables into same directory as llvm-config, on demand
$(addprefix $(BINDIR)/,$(EXECUTABLES)): $(EXECUTABLES)
	sudo cp $(EXECUTABLES) $(BINDIR)

# Build individual tools
make_static: make_static.cpp
	$(CXX) $(CXXFLAGS) -o make_static make_static.cpp $(LIBS)

find_free: find_free.cpp
	$(CXX) $(CXXFLAGS) -o find_free find_free.cpp $(LIBS)

remove_memcpy: remove_memcpy.cpp
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp $(LIBS)

# Restore model program to original state
reset:
	cp -af navsses_model/complete_system_io.h working_navsses_model/
	cp -af navsses_model/complete_system_io.c working_navsses_model/

# Run the make_static program
run: $(BINDIR)/make_static
	make_static working_navsses_model/complete_system_io.c working_navsses_model/complete_system_io.h --

# Build the source with clang. It won't build successfully since there is no main(),
# but it should produce the same results before and after modification. A verify
# option is needed to ensure that models actually produce the correct *results*
# after modification.
build:
	$(CC) -Wall working_navsses_model/*.c -lm

clean:
	rm -f $(EXECUTABLES)
	sudo rm -f $(addprefix $(BINDIR)/,$(EXECUTABLES))

