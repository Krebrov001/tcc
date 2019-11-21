<project xmlns="com.autoesl.autopilot.project" name="navsses" top="top">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="-lopenlibm" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../../models/utils.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -std=c11 -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../../models/dat_files/navsses_model.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../../models/navsses/main.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -I../../../models -DHLS_TESTBENCH  -Wno-unknown-pragmas" blackbox="false"/>
        <file name="navsses/top.c" sc="0" tb="false" cflags="-I../models/navsses" csimflags="" blackbox="false"/>
        <file name="../models/navsses/rt_nonfinite.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../models/navsses/rt_look1d.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../models/navsses/rt_look.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../models/navsses/rtGetNaN.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../models/navsses/rtGetInf.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../models/navsses/complete_system_io_data.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="../models/navsses/complete_system_io.c" sc="0" tb="false" cflags="-Wno-parentheses-equality" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

