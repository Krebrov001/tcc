open_project power_converters_switching_devices
set_top top
add_files ../models/power_converters_switching_devices/power_converters_switching_devices.c -cflags "-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices"
add_files ../models/power_converters_switching_devices/power_converters_switching_devices_data.c -cflags "-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices"
add_files ../models/power_converters_switching_devices/rtGetInf.c -cflags "-I../models/simulink_include -I../models/power_converters_switching_devices"
add_files ../models/power_converters_switching_devices/rtGetNaN.c -cflags "-I../models/simulink_include -I../models/power_converters_switching_devices"
add_files ../models/simulink_sources/rt_matrx.c -cflags "-I../models/power_converters_switching_devices -I../models/simulink_include"
add_files ../models/power_converters_switching_devices/rt_nonfinite.c -cflags "-I../models/simulink_include -I../models/power_converters_switching_devices"
add_files ../models/simulink_sources/sfun_discreteVariableDelay.c -cflags "-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices"
add_files power_converters_switching_devices/top.c -cflags "-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices"
add_files -tb ../models/power_converters_switching_devices/main.c -csimflags "-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -DHLS_TESTBENCH -I../../../models -I../../../models/simulink_include -I../../../models/power_converters_switching_devices"
add_files -tb ../models/dat_files/power_converters_switching_devices.dat
add_files -tb ../models/utils.c -csimflags "-std=c11"
open_solution "solution1"
set_part {xc7vx485t-ffg1761-2} -tool vivado
create_clock -period 10 -name default
#source "./power_converters_switching_devices/solution1/directives.tcl"
csynth_design