CC=clang
DISABLED_WARNINGS=-Wno-unused #Project has unused variables by default
CFLAGS=-Wall $(DISABLED_WARNINGS) -I.. -I../simulink_include -I. -I../simscape_include
DEFINES=-DMODEL=ee_switching_power_supply_thermal -DNUMST=2 -DNCSTATES=40 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=1 -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
LIBS=-lopenlibm
EXE=ee_switching_power_supply_thermal
MODEL_SRC=$(EXE).c \
	rt_lu_real.c \
	rt_forwardsubrr_dbl.c \
	rt_backsubrr_dbl.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_gateway.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_eq_tol.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_lv.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_act.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_all.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slv.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_var_tol.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_il.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_exp.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_ic.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxicr_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mdxy_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxy_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_y.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxy_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mode.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_zc.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_cache_i.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_update_i.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_log.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_assert.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_m_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxm_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_f.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_vmf.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slf.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slf0.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxf_p.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dnf_v_x.c \
	ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxdelt_p.c \
	../simscape_sources/*

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
