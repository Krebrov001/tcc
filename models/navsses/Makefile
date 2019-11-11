CC=clang
CFLAGS=-Wall
LIBS=-lopenlibm

all: complete_system

complete_system: main.c complete_system_io.c complete_system_io_data.c rt_nonfinite.c rt_look1d.c rtGetNaN.c rtGetInf.c rt_look.c ../utils.c
	$(CC) $(CFLAGS) -o complete_system main.c complete_system_io.c complete_system_io_data.c rt_nonfinite.c rt_look1d.c rtGetNaN.c rtGetInf.c rt_look.c ../utils.c -I .. $(LIBS)


# Run the refactoring_tool on the code.
.PHONY: refactor
refactor:
	echo 'navsses'
	refactoring_tool --all --debug complete_system_io.c -- -I ..


# Execute the simulation and print results
.PHONY: simulate
simulate: complete_system
	./complete_system


# Execute the simulation and only print if there's an error
.PHONY: verify
verify: complete_system
	./complete_system


.PHONY: clean
clean:
	rm -f complete_system
