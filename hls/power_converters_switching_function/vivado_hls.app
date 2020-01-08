<project xmlns="com.autoesl.autopilot.project" top="top" name="power_converters_switching_function">
    <files>
        <file name="../../../models/power_converters_switching_function/main.c" sc="0" tb="1" cflags="" csimflags="-DMODEL=power_converters_switching_function -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -DHLS_TESTBENCH -I../../../../../models -I../../../../../models/simulink_include -I../../../../../models/power_converters_switching_function"/>
        <file name="../../../models/dat_files/power_converters_switching_function.dat" sc="0" tb="1" cflags=""/>
        <file name="../../../models/utils.c" sc="0" tb="1" cflags="" csimflags="-std=c11"/>
        <file name="../models/power_converters_switching_function/power_converters_switching_function.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_function -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
        <file name="../models/power_converters_switching_function/power_converters_switching_function_data.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_function -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
        <file name="../models/power_converters_switching_function/rtGetInf.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
        <file name="../models/power_converters_switching_function/rtGetNaN.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
        <file name="../models/simulink_sources/rt_matrx.c" sc="0" tb="false" cflags="-I../models/power_converters_switching_function -I../models/simulink_include" blackbox="false"/>
        <file name="../models/power_converters_switching_function/rt_nonfinite.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
        <file name="../models/simulink_sources/sfun_discreteVariableDelay.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_function -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
        <file name="power_converters_switching_function/top.c" sc="0" tb="false" cflags="-DMODEL=power_converters_switching_function -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DRT -DUSE_RTMODEL -DERT -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1 -I../models/simulink_include -I../models/power_converters_switching_function" blackbox="false"/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" optimizeCompile="true" ldflags="-lopenlibm" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

