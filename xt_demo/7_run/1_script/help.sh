#!/bin/bash
function help()
{
echo "**************** HELP INFO ***************"
echo "usage:"
echo "make [cmd] [opt=] ['exp'=]"
echo ""
echo "--[cmd]:"
echo "  help                  : default ,display option, how to use the script"
echo "  run                   : will run all include get_dutlist,gen_run,comp,sim"
echo "  get_list              : get dut list"
echo "  gen_run               : generate run script command"
echo "  comp                  : compile"
echo "  sim                   : simulation"
echo "  ----sim_para=         : add self-define parameter when simulation "
echo "  verdi                 : wave view"
echo "  regr                  : regression testcase"
echo "  ----['exp']           : regression variable express "
echo "  ----regr_tc=          : regression tc list which specify "
echo "  ----sim_para_all=     : add self-define parameter to all testcase when regression ,eg: sim_para_all=+debug_en,will add '+debug_en' to all tc simulatioin option"
echo "  report                : report all testcase html report"
echo "  urg                   : merge file of coverage info"
echo "  cov                   : view file of coverage info"
echo "  clean                 : clean temp file"
echo "  ----[opt=]            : all "
echo "  ----opt=all           : delete whole sim workspace ${PROJ_WORK_PATH} "
echo "  ----opt=./            : delete temp in current directory "
echo "  tc                    : display all 6_top/2_tc testcase name "
echo ""
echo "example:"
echo "  if want to run tc in testbench , enter 'make run tc=tc_relu seed=123' in terminal "
echo "  if want to regression tc in testbench , enter 'make regr' in terminal (use default proj=2_work , regr_tc=regr_tc) "
echo "  if want to regression tc in testbench , enter 'make regr regr_tc=my_regr_tc proj=sim_workspace' in terminal(specify regr_tc & sim_workspace) "
echo "  if want to remove whole sim_workspace file , enter 'make clean opt=all proj=test_proj' in terminal "
}
help
