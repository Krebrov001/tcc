CC=clang
DISABLED_WARNINGS=-Wno-unused #Project has unused variables by default
CFLAGS=-Wall $(DISABLED_WARNINGS) -I . -I ../ -I ../simulink_include
LIBS=-lopenlibm
EXE=power_fivecells

all: $(EXE)

$(EXE): main.c power_fivecells.c power_fivecells_data.c ../utils.c
	$(CC) $(CFLAGS) -o $(EXE) main.c power_fivecells.c power_fivecells_data.c ../utils.c $(LIBS)


# Run the refactoring_tool on the code.
.PHONY: refactor
refactor:
	echo 'power_fivecells'
	refactoring_tool --all --debug main.c power_fivecells.c power_fivecells_data.c ../utils.c -- $(CFLAGS) $(LIBS)


# Execute the simulation and only print if there's an error
.PHONY: verify
verify: $(EXE)
	./$(EXE)


.PHONY: clean
clean:
	rm -f $(EXE)
