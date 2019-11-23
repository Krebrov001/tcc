<project xmlns="com.autoesl.autopilot.project" name="power_converters_switching_devices" top="top">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow askAgain="false" name="csim" optimizeCompile="true" ldflags="-lopenlibm" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../../models/power_converters_switching_devices/main.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -I../../../../../models  -I../../../../../models/simulink_include  -I../../../../../models/power_converters_switching_devices  -DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -DHLS_TESTBENCH -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../../models/dat_files/power_converters_switching_devices.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../../models/utils.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -std=c11 -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../models/power_converters_switching_devices/power_converters_switching_devices.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="../models/power_converters_switching_devices/power_converters_switching_devices_data.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="../models/power_converters_switching_devices/rtGetInf.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="../models/power_converters_switching_devices/rtGetNaN.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="../models/simulink_sources/rt_matrx.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="../models/power_converters_switching_devices/rt_nonfinite.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="../models/simulink_sources/sfun_discreteVariableDelay.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
        <file name="power_converters_switching_devices/top.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_devices -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_devices" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

