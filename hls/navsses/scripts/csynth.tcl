open_project navsses
set_top top
add_files navsses/top.c -cflags "-I../models/navsses"
add_files ../models/navsses/rt_nonfinite.c
add_files ../models/navsses/rt_look1d.c
add_files ../models/navsses/rt_look.c
add_files ../models/navsses/rtGetNaN.c
add_files ../models/navsses/rtGetInf.c
add_files ../models/navsses/complete_system_io_data.c
add_files ../models/navsses/complete_system_io.c -cflags "-Wno-parentheses-equality"
add_files -tb ../models/utils.c -cflags "-Wno-unknown-pragmas" -csimflags "-std=c11 -Wno-unknown-pragmas"
add_files -tb ../models/dat_files/navsses_model.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb ../models/navsses/main.c -cflags "-Wno-unknown-pragmas" -csimflags "-I../models -DHLS_TESTBENCH -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7vx485t-ffg1761-2} -tool vivado
create_clock -period 10 -name default
#source "./navsses/solution1/directives.tcl"
csynth_design
