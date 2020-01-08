<project xmlns="com.autoesl.autopilot.project" name="power_fivecells" top="top">
    <files>
        <file name="../../../models/utils.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -std=c11 -Wno-unknown-pragmas"/>
        <file name="../../../models/dat_files/power_fivecells.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../../models/power_fivecells/main.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -I../../../../../models  -I../../../../../models/simulink_include  -I../../../../../models/power_fivecells -DHLS_TESTBENCH  -Wno-unknown-pragmas"/>
        <file name="power_fivecells/top.c" sc="0" tb="false" cflags="-I../models/power_fivecells -I../models/simulink_include" blackbox="false" csimflags=""/>
        <file name="../models/power_fivecells/power_fivecells_data.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_fivecells" blackbox="false" csimflags=""/>
        <file name="../models/power_fivecells/power_fivecells.c" sc="0" tb="false" cflags="-I../models/simulink_include -I../models/power_fivecells -Wno-parentheses-equality" blackbox="false" csimflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow askAgain="false" name="csim" optimizeCompile="true" ldflags="-lopenlibm" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

