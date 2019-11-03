CC=clang
DISABLED_WARNINGS=-Wno-unused #Project has unused variables by default
CFLAGS=-Wall $(DISABLED_WARNINGS) -std=c99 -I ../ -I ../simulink_include -I . -DMODEL=power_converters_switching_function -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1
LIBS=-lopenlibm
EXE=power_converters_switching_function
SIMULINK_SRCS=../simulink_sources/sfun_discreteVariableDelay.c ../simulink_sources/rt_matrx.c
MODEL_SRCS=main.c power_converters_switching_function.c power_converters_switching_function_data.c rt_nonfinite.c rtGetNaN.c rtGetInf.c

all: $(EXE)

$(EXE): $(MODEL_SRCS) ../utils.c
	$(CC) $(CFLAGS) -o $(EXE) $(SIMULINK_SRCS) $(MODEL_SRCS) ../utils.c $(LIBS)


# Run the refactoring_tool on the code.
.PHONY: refactor
refactor:
	echo 'power_converters_switching_function'


# Execute the simulation and only print if there's an error
.PHONY: verify
verify: $(EXE)
	./$(EXE)


.PHONY: clean
clean:
	rm -f $(EXE)
