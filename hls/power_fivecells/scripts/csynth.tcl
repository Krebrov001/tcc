open_project power_fivecells
set_top top
add_files power_fivecells/top.c -cflags "-I../models/power_fivecells -I../models/simulink_include"
add_files ../models/power_fivecells/power_fivecells_data.c -cflags "-I../models/simulink_include -I../models/power_fivecells"
add_files ../models/power_fivecells/power_fivecells.c -cflags "-I../models/simulink_include -I../models/power_fivecells -Wno-parentheses-equality"
add_files -tb ../models/utils.c -cflags "-Wno-unknown-pragmas" -csimflags "-std=c11 -Wno-unknown-pragmas"
add_files -tb ../models/dat_files/power_fivecells.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb ../models/power_fivecells/main.c -cflags "-Wno-unknown-pragmas" -csimflags "-I../../../models -I../../../models/simulink_include -I../../../models/power_fivecells -DHLS_TESTBENCH -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7vx485t-ffg1761-2} -tool vivado
create_clock -period 10 -name default
#source "./power_fivecells/solution1/directives.tcl"
csynth_design
