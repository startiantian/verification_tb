#!/bin/bash
function help()
{
echo "**************** HELP INFO ***************"
echo "usage: "
echo "make [cmd [opt=]] [var=]  "
echo ""
echo "  [cmd]                   : command parameter "
echo "    help                  : default ,display option, how to use the script"
echo "    run                   : will run all include get_dutlist,gen_run,comp,sim"
echo "    get_flist             : get dut list"
echo "    gen_run               : generate run script command"
echo "    comp                  : compile"
echo "    sim                   : simulation"
echo "        [opt=+DM_EN]      : add sim parameter,'--'as connector become space character to add multiple parameter"
echo "    wave                  : wave view"
echo "    regr                  : regression testcase"
echo "        [opt=+DM_EN]      : add sim parameter,eg:'opt=--+DM_EN--+VC_EN',add '+DM_EN +VC_EN' to all tc sim option,'--'as connector"
echo "    report                : report all testcase html report"
echo "    cov                   : merge or view coverage report,default use urg merge cov/*simv.vdb "
echo "        [opt=simv.vdb]    : merge directory 'xxx--yyy'('-dir xxx -dir yyy') to coverage db cov/merge_cov,'--'as connector"
echo "        [view=dve]        : view coverage report use 'dve' , 'verdi' or 'web' browser "
echo "    clean                 : clean temp file"
echo "        [opt=all]         : delete whole sim workspace ${PROJ_WORK_PATH} "
echo "        [opt=./]          : delete temp in current directory "
echo "    tc                    : display 6_top/2_tc tc name ,for convenience to copy "
echo ""
echo "  [var]                   : variable parameter in cfg_var.ini,could delivery from command line"
echo "    proj=                 : specify the sim workspace directory"
echo "    tc=                   : specify the sim workspace directory"
echo "    regr_tc=              : regression tc list which specify "
echo ""
echo "--example:"
echo "  if want to display tc    , enter 'make tc' in terminal "
echo "  if want to run tc in TB  , enter 'make run tc=tc_relu seed=123' in terminal "
echo "  if want to review wave   , enter 'make wave tc=tc_relu ' in terminal "
echo "  if want to regress in TB , enter 'make regr' in terminal (use default proj=2_work,regr_tc=regr_tc) "
echo "  if want to regress in TB , enter 'make regr proj=test_sim regr_tc=ddr_regr_tc' in terminal(specify sim_workspace & regr_tc) "
echo "  if want to view coverage , enter 'make cov view=verdi ' in terminal "
echo "  if want to del whole sim , enter 'make clean opt=all proj=test_sim' in terminal "
#env
}
help
