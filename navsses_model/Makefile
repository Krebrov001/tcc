CC=clang
CFLAGS=-Wall
LIBS=-lopenlibm

all: complete_system

complete_system: main.c complete_system_io.c complete_system_io_data.c rt_nonfinite.c rt_look1d.c rtGetNaN.c rtGetInf.c rt_look.c
	$(CC) $(CFLAGS) -o complete_system main.c complete_system_io.c complete_system_io_data.c rt_nonfinite.c rt_look1d.c rtGetNaN.c rtGetInf.c rt_look.c $(LIBS)

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
