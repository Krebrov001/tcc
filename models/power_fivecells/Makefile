CC=clang
CFLAGS=-Wall
LIBS=-lopenlibm
EXE=power_fivecells

all: $(EXE)

$(EXE): main.c power_fivecells.c power_fivecells_data.c
	$(CC) $(CFLAGS) -o $(EXE) main.c power_fivecells.c power_fivecells_data.c $(LIBS)

# Execute the simulation and only print if there's an error
.PHONY: verify
verify: $(EXE)
	./$(EXE)

.PHONY: clean
clean:
	rm -f $(EXE)
