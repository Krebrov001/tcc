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
.PHONY: reset
reset:
	cp -af navsses_model/[^m]*.c navsses_model/*.h working_navsses_model/

# Verify the modified code generates the correct results
.PHONY: verify
verify: $(BINDIR)/make_static
	cp navsses_model/main.c navsses_model/Makefile working_navsses_model/
	$(MAKE) -C working_navsses_model verify
	$(MAKE) -C working_navsses_model clean
	rm -f working_navsses_model/main.c working_navsses_model/Makefile

# Run the make_static program
.PHONY: run
run: $(BINDIR)/remove_memcpy
	remove_memcpy working_navsses_model/complete_system_io.c --
#run: $(BINDIR)/make_static
#	make_static working_navsses_model/complete_system_io.c working_navsses_model/complete_system_io.h --

.PHONY: clean
clean:
	rm -f $(EXECUTABLES)
	sudo rm -f $(addprefix $(BINDIR)/,$(EXECUTABLES))

