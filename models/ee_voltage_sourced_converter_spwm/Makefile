CC=clang
DISABLED_WARNINGS=-Wno-unused #Project has unused variables by default
CFLAGS=-Wall $(DISABLED_WARNINGS) -I.. -I../simulink_include -I. -I../simscape_include
DEFINES=-DMODEL=ee_voltage_sourced_converter_spwm -DNUMST=2 -DNCSTATES=4 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=1 -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
LIBS=-lopenlibm
EXE=ee_voltage_sourced_converter_spwm
MODEL_SRC=$(EXE).c $(EXE)_data.c $(EXE)_8406756f_1_gateway.c $(EXE)_8406756f_1.c $(EXE)_8406756f_1_ds.c rt_forwardsubrr_dbl.c rt_backsubrr_dbl.c rt_lu_real.c $(EXE)_8406756f_1_ds_a_p.c $(EXE)_8406756f_1_ds_f.c $(EXE)_8406756f_1_ds_dxf_p.c $(EXE)_8406756f_1_ds_dxf.c $(EXE)_8406756f_1_ds_tdxf_p.c $(EXE)_8406756f_1_ds_tdxy_p.c $(EXE)_8406756f_1_ds_y.c $(EXE)_8406756f_1_ds_dxy_p.c $(EXE)_8406756f_1_ds_mode.c $(EXE)_8406756f_1_ds_zc.c $(EXE)_8406756f_1_ds_log.c $(EXE)_8406756f_1_ds_obs_exp.c $(EXE)_8406756f_1_ds_obs_act.c $(EXE)_8406756f_1_ds_obs_all.c $(EXE)_8406756f_1_ds_obs_il.c ../simscape_sources/*


#../simscape_sources/pm_26dc3230.c ../simscape_sources/mc_47b8cebe.c ../simscape_sources/pm_4fd5f5b9.c ../simscape_sources/ssc_core_2568b075.c ../simscape_sources/ssc_sli_0bd269e6.c ../simscape_sources/ssc_core_97d767fe.c ../simscape_sources/ssc_sli_fbdf29da.c ../simscape_sources/ssc_core_05058dd9.c ../simscape_sources/mc_15d12d95.c ../simscape_sources/pm_fed8c2c9.c ../simscape_sources/mc_e7bc2f1a.c ../simscape_sources/mc_32dc008a.c

all: $(EXE)

$(EXE): main.c ../utils.c $(MODEL_SRC)
	$(CC) $(CFLAGS) $(DEFINES) -o $(EXE) $^ $(LIBS)

# Run the refactoring_tool on the code.
.PHONY: refactor
refactor:
	echo '$(EXE)'
	refactoring_tool --all --debug $(MODEL_SRC) -- -I . -I ../ -I ../simulink_include


# Execute the simulation and only print if there's an error
.PHONY: verify
verify: $(EXE)
	./$(EXE)


.PHONY: clean
clean:
	rm -f $(EXE)
