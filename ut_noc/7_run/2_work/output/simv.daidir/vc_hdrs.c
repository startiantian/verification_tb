#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCS error reporting routine */
extern void vcsMsgReport1(const char *, const char *, int, void *, void*, const char *);

#ifndef _VC_TYPES_
#define _VC_TYPES_
/* common definitions shared with DirectC.h */

typedef unsigned int U;
typedef unsigned char UB;
typedef unsigned char scalar;
typedef struct { U c; U d;} vec32;

#define scalar_0 0
#define scalar_1 1
#define scalar_z 2
#define scalar_x 3

extern long long int ConvUP2LLI(U* a);
extern void ConvLLI2UP(long long int a1, U* a2);
extern long long int GetLLIresult();
extern void StoreLLIresult(const unsigned int* data);
typedef struct VeriC_Descriptor *vc_handle;

#ifndef SV_3_COMPATIBILITY
#define SV_STRING const char*
#else
#define SV_STRING char*
#endif

#endif /* _VC_TYPES_ */

#ifndef __VCS_IMPORT_DPI_STUB_SLI_Terminate
#define __VCS_IMPORT_DPI_STUB_SLI_Terminate
__attribute__((weak)) int SLI_Terminate()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "SLI_Terminate");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "SLI_Terminate");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_SLI_Terminate */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_check_path
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_check_path
__attribute__((weak)) int uvm_hdl_check_path(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "uvm_hdl_check_path");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_check_path");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_check_path */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_deposit
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_deposit
__attribute__((weak)) int uvm_hdl_deposit(/* INPUT */const char* A_1, const /* INPUT */svLogicVecVal *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, const /* INPUT */svLogicVecVal *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1, const svLogicVecVal* A_2)) dlsym(RTLD_NEXT, "uvm_hdl_deposit");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_deposit");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_deposit */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_force
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_force
__attribute__((weak)) int uvm_hdl_force(/* INPUT */const char* A_1, const /* INPUT */svLogicVecVal *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, const /* INPUT */svLogicVecVal *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1, const svLogicVecVal* A_2)) dlsym(RTLD_NEXT, "uvm_hdl_force");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_force");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_force */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_release_and_read
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_release_and_read
__attribute__((weak)) int uvm_hdl_release_and_read(/* INPUT */const char* A_1, /* INOUT */svLogicVecVal *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INOUT */svLogicVecVal *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1, svLogicVecVal* A_2)) dlsym(RTLD_NEXT, "uvm_hdl_release_and_read");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_release_and_read");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_release_and_read */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_release
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_release
__attribute__((weak)) int uvm_hdl_release(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "uvm_hdl_release");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_release");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_release */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_read
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_read
__attribute__((weak)) int uvm_hdl_read(/* INPUT */const char* A_1, /* OUTPUT */svLogicVecVal *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* OUTPUT */svLogicVecVal *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1, svLogicVecVal* A_2)) dlsym(RTLD_NEXT, "uvm_hdl_read");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_read");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_read */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_hdl_read_string
#define __VCS_IMPORT_DPI_STUB_uvm_hdl_read_string
__attribute__((weak)) SV_STRING uvm_hdl_read_string(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)(const char* A_1)) dlsym(RTLD_NEXT, "uvm_hdl_read_string");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_hdl_read_string");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_hdl_read_string */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_memory_load
#define __VCS_IMPORT_DPI_STUB_uvm_memory_load
__attribute__((weak)) int uvm_memory_load(/* INPUT */const char* A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5, /* INPUT */const char* A_6, /* INPUT */const char* A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5, /* INPUT */const char* A_6, /* INPUT */const char* A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1, const char* A_2, const char* A_3, const char* A_4, const char* A_5, const char* A_6, const char* A_7)) dlsym(RTLD_NEXT, "uvm_memory_load");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_memory_load");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_memory_load */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dpi_get_next_arg_c
#define __VCS_IMPORT_DPI_STUB_uvm_dpi_get_next_arg_c
__attribute__((weak)) SV_STRING uvm_dpi_get_next_arg_c()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "uvm_dpi_get_next_arg_c");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dpi_get_next_arg_c");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dpi_get_next_arg_c */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dpi_get_tool_name_c
#define __VCS_IMPORT_DPI_STUB_uvm_dpi_get_tool_name_c
__attribute__((weak)) SV_STRING uvm_dpi_get_tool_name_c()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "uvm_dpi_get_tool_name_c");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dpi_get_tool_name_c");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dpi_get_tool_name_c */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dpi_get_tool_version_c
#define __VCS_IMPORT_DPI_STUB_uvm_dpi_get_tool_version_c
__attribute__((weak)) SV_STRING uvm_dpi_get_tool_version_c()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "uvm_dpi_get_tool_version_c");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dpi_get_tool_version_c");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dpi_get_tool_version_c */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dpi_regcomp
#define __VCS_IMPORT_DPI_STUB_uvm_dpi_regcomp
__attribute__((weak)) void* uvm_dpi_regcomp(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void* (*)(const char* A_1)) dlsym(RTLD_NEXT, "uvm_dpi_regcomp");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dpi_regcomp");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dpi_regcomp */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dpi_regexec
#define __VCS_IMPORT_DPI_STUB_uvm_dpi_regexec
__attribute__((weak)) int uvm_dpi_regexec(/* INPUT */void* A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(void* A_1, const char* A_2)) dlsym(RTLD_NEXT, "uvm_dpi_regexec");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dpi_regexec");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dpi_regexec */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dpi_regfree
#define __VCS_IMPORT_DPI_STUB_uvm_dpi_regfree
__attribute__((weak)) void uvm_dpi_regfree(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(void* A_1)) dlsym(RTLD_NEXT, "uvm_dpi_regfree");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dpi_regfree");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dpi_regfree */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_re_match
#define __VCS_IMPORT_DPI_STUB_uvm_re_match
__attribute__((weak)) int uvm_re_match(/* INPUT */const char* A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1, const char* A_2)) dlsym(RTLD_NEXT, "uvm_re_match");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_re_match");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_re_match */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_dump_re_cache
#define __VCS_IMPORT_DPI_STUB_uvm_dump_re_cache
__attribute__((weak)) void uvm_dump_re_cache()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)()) dlsym(RTLD_NEXT, "uvm_dump_re_cache");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_dump_re_cache");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_dump_re_cache */

#ifndef __VCS_IMPORT_DPI_STUB_uvm_glob_to_re
#define __VCS_IMPORT_DPI_STUB_uvm_glob_to_re
__attribute__((weak)) SV_STRING uvm_glob_to_re(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)(const char* A_1)) dlsym(RTLD_NEXT, "uvm_glob_to_re");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "uvm_glob_to_re");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_uvm_glob_to_re */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_logicvec_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_logicvec_attribute
__attribute__((weak)) void fsdbTransDPI_scope_add_logicvec_attribute(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, const char* A_2, const char* A_3, const svLogicVecVal* A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_scope_add_logicvec_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_scope_add_logicvec_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_logicvec_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_int_attribute
__attribute__((weak)) void fsdbTransDPI_scope_add_int_attribute(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, const char* A_2, const char* A_3, int A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_scope_add_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_scope_add_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_string_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_string_attribute
__attribute__((weak)) void fsdbTransDPI_scope_add_string_attribute(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, const char* A_2, const char* A_3, const char* A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_scope_add_string_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_scope_add_string_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_string_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_real_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_real_attribute
__attribute__((weak)) void fsdbTransDPI_scope_add_real_attribute(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, const char* A_2, const char* A_3, double A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_scope_add_real_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_scope_add_real_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_real_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_enum_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_enum_int_attribute
__attribute__((weak)) void fsdbTransDPI_scope_add_enum_int_attribute(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, const char* A_2, const char* A_3, unsigned int A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_scope_add_enum_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_scope_add_enum_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_scope_add_enum_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_create_stream_begin
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_create_stream_begin
__attribute__((weak)) int fsdbTransDPI_create_stream_begin(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(int* A_1, const char* A_2, const char* A_3, const char* A_4)) dlsym(RTLD_NEXT, "fsdbTransDPI_create_stream_begin");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_create_stream_begin");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_create_stream_begin */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_logicvec_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_logicvec_attribute
__attribute__((weak)) void fsdbTransDPI_define_logicvec_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, const svLogicVecVal* A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_define_logicvec_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_define_logicvec_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_logicvec_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_int_attribute
__attribute__((weak)) void fsdbTransDPI_define_int_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, int A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_define_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_define_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_string_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_string_attribute
__attribute__((weak)) void fsdbTransDPI_define_string_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, const char* A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_define_string_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_define_string_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_string_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_real_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_real_attribute
__attribute__((weak)) void fsdbTransDPI_define_real_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, double A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_define_real_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_define_real_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_real_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_enum_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_enum_int_attribute
__attribute__((weak)) void fsdbTransDPI_define_enum_int_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, unsigned int A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_define_enum_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_define_enum_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_define_enum_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_logicvec_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_logicvec_attribute
__attribute__((weak)) void fsdbTransDPI_stream_add_logicvec_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, const svLogicVecVal* A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_stream_add_logicvec_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_stream_add_logicvec_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_logicvec_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_int_attribute
__attribute__((weak)) void fsdbTransDPI_stream_add_int_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, int A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_stream_add_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_stream_add_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_string_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_string_attribute
__attribute__((weak)) void fsdbTransDPI_stream_add_string_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, const char* A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_stream_add_string_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_stream_add_string_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_string_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_real_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_real_attribute
__attribute__((weak)) void fsdbTransDPI_stream_add_real_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, double A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_stream_add_real_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_stream_add_real_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_real_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_enum_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_enum_int_attribute
__attribute__((weak)) void fsdbTransDPI_stream_add_enum_int_attribute(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3, unsigned int A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_stream_add_enum_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_stream_add_enum_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_stream_add_enum_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_create_stream_end
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_create_stream_end
__attribute__((weak)) void fsdbTransDPI_create_stream_end(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, int A_2, const char* A_3)) dlsym(RTLD_NEXT, "fsdbTransDPI_create_stream_end");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_create_stream_end");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_create_stream_end */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_ended_stream_id
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_ended_stream_id
__attribute__((weak)) int fsdbTransDPI_get_ended_stream_id(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(int* A_1, const char* A_2, const char* A_3)) dlsym(RTLD_NEXT, "fsdbTransDPI_get_ended_stream_id");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_get_ended_stream_id");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_ended_stream_id */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_begin
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_begin
__attribute__((weak)) long long fsdbTransDPI_begin(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (long long (*)(int* A_1, int A_2, const char* A_3, const char* A_4)) dlsym(RTLD_NEXT, "fsdbTransDPI_begin");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_begin");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_begin */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_set_label
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_set_label
__attribute__((weak)) void fsdbTransDPI_set_label(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const char* A_4)) dlsym(RTLD_NEXT, "fsdbTransDPI_set_label");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_set_label");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_set_label */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_tag
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_tag
__attribute__((weak)) void fsdbTransDPI_add_tag(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const char* A_4)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_tag");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_tag");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_tag */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_logicvec_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_logicvec_attribute
__attribute__((weak)) void fsdbTransDPI_add_logicvec_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const svLogicVecVal* A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_logicvec_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_logicvec_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_logicvec_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_bitvec_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_bitvec_attribute
__attribute__((weak)) void fsdbTransDPI_add_bitvec_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svBitVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svBitVecVal *A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const svBitVecVal* A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_bitvec_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_bitvec_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_bitvec_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_int_attribute
__attribute__((weak)) void fsdbTransDPI_add_int_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, int A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_shortint_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_shortint_attribute
__attribute__((weak)) void fsdbTransDPI_add_shortint_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */short int A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */short int A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, short int A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_shortint_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_shortint_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_shortint_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_longint_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_longint_attribute
__attribute__((weak)) void fsdbTransDPI_add_longint_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */long long A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */long long A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, long long A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_longint_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_longint_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_longint_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_string_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_string_attribute
__attribute__((weak)) void fsdbTransDPI_add_string_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const char* A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_string_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_string_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_string_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_real_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_real_attribute
__attribute__((weak)) void fsdbTransDPI_add_real_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, double A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_real_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_real_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_real_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_enum_int_attribute
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_enum_int_attribute
__attribute__((weak)) void fsdbTransDPI_add_enum_int_attribute(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, unsigned int A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_enum_int_attribute");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_enum_int_attribute");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_enum_int_attribute */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_logicvec_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_logicvec_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_logicvec_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, const /* INPUT */svLogicVecVal *A_6, /* INPUT */const char* A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svLogicVecVal *A_4, /* INPUT */int A_5, const /* INPUT */svLogicVecVal *A_6, /* INPUT */const char* A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const svLogicVecVal* A_4, int A_5, const svLogicVecVal* A_6, const char* A_7)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_logicvec_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_logicvec_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_logicvec_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_bitvec_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_bitvec_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_bitvec_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svBitVecVal *A_4, /* INPUT */int A_5, const /* INPUT */svBitVecVal *A_6, /* INPUT */const char* A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, const /* INPUT */svBitVecVal *A_4, /* INPUT */int A_5, const /* INPUT */svBitVecVal *A_6, /* INPUT */const char* A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const svBitVecVal* A_4, int A_5, const svBitVecVal* A_6, const char* A_7)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_bitvec_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_bitvec_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_bitvec_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_int_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_int_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_int_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, int A_4, int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_int_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_int_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_int_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_shortint_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_shortint_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_shortint_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */short int A_4, /* INPUT */short int A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */short int A_4, /* INPUT */short int A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, short int A_4, short int A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_shortint_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_shortint_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_shortint_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_longint_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_longint_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_longint_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, long long A_4, long long A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_longint_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_longint_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_longint_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_string_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_string_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_string_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4, /* INPUT */const char* A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, const char* A_4, const char* A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_string_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_string_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_string_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_real_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_real_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_real_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */const char* A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */const char* A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, double A_4, double A_5, const char* A_6)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_real_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_real_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_real_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_enum_int_attribute_with_expected_value
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_enum_int_attribute_with_expected_value
__attribute__((weak)) void fsdbTransDPI_add_enum_int_attribute_with_expected_value(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */int A_6, /* INPUT */const char* A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3, /* INPUT */unsigned int A_4, /* INPUT */int A_5, /* INPUT */int A_6, /* INPUT */const char* A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3, unsigned int A_4, int A_5, int A_6, const char* A_7)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_enum_int_attribute_with_expected_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_enum_int_attribute_with_expected_value");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_enum_int_attribute_with_expected_value */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_end
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_end
__attribute__((weak)) void fsdbTransDPI_end(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */long long A_2, /* INPUT */const char* A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, long long A_2, const char* A_3)) dlsym(RTLD_NEXT, "fsdbTransDPI_end");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_end");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_end */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_relation
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_relation
__attribute__((weak)) void fsdbTransDPI_add_relation(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */const char* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */const char* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int* A_1, const char* A_2, long long A_3, long long A_4, const char* A_5)) dlsym(RTLD_NEXT, "fsdbTransDPI_add_relation");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_add_relation");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_add_relation */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_enum_id
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_enum_id
__attribute__((weak)) unsigned int fsdbTransDPI_get_enum_id(/* OUTPUT */int *A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned int (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (unsigned int (*)(int* A_1, const char* A_2)) dlsym(RTLD_NEXT, "fsdbTransDPI_get_enum_id");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_get_enum_id");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_enum_id */

#ifndef __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_class_str
#define __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_class_str
__attribute__((weak)) SV_STRING fsdbTransDPI_get_class_str(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)(/* OUTPUT */int *A_1, /* INPUT */const char* A_2, /* INPUT */const char* A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)(int* A_1, const char* A_2, const char* A_3)) dlsym(RTLD_NEXT, "fsdbTransDPI_get_class_str");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "fsdbTransDPI_get_class_str");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_fsdbTransDPI_get_class_str */

#ifndef __VCS_IMPORT_DPI_STUB_SLI_Init
#define __VCS_IMPORT_DPI_STUB_SLI_Init
__attribute__((weak)) int SLI_Init(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "SLI_Init");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "SLI_Init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_SLI_Init */

#ifndef __VCS_IMPORT_DPI_STUB_SLI_Authorize_Token
#define __VCS_IMPORT_DPI_STUB_SLI_Authorize_Token
__attribute__((weak)) int SLI_Authorize_Token(/* INPUT */int A_1, /* INPUT */const char* A_2, /* INOUT */SV_STRING *A_3, /* INPUT */int A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */const char* A_2, /* INOUT */SV_STRING *A_3, /* INPUT */int A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(int A_1, const char* A_2, SV_STRING* A_3, int A_4)) dlsym(RTLD_NEXT, "SLI_Authorize_Token");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "SLI_Authorize_Token");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_SLI_Authorize_Token */

#ifndef __VCS_IMPORT_DPI_STUB_SLI_Errtext
#define __VCS_IMPORT_DPI_STUB_SLI_Errtext
__attribute__((weak)) int SLI_Errtext(/* INPUT */int A_1, /* INOUT */SV_STRING *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INOUT */SV_STRING *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(int A_1, SV_STRING* A_2)) dlsym(RTLD_NEXT, "SLI_Errtext");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "SLI_Errtext");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_SLI_Errtext */

#ifndef __VCS_IMPORT_DPI_STUB_SLI_Authorize_XLMODE
#define __VCS_IMPORT_DPI_STUB_SLI_Authorize_XLMODE
__attribute__((weak)) int SLI_Authorize_XLMODE(/* INPUT */int A_1, /* INOUT */SV_STRING *A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INOUT */SV_STRING *A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(int A_1, SV_STRING* A_2, int A_3)) dlsym(RTLD_NEXT, "SLI_Authorize_XLMODE");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "SLI_Authorize_XLMODE");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_SLI_Authorize_XLMODE */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__analyze_test
#define __VCS_IMPORT_DPI_STUB_svt_vcap__analyze_test
__attribute__((weak)) int svt_vcap__analyze_test(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "svt_vcap__analyze_test");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__analyze_test");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__analyze_test */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_group_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_group_count
__attribute__((weak)) int svt_vcap__get_group_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_group_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_group_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_group_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_group
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_group
__attribute__((weak)) int svt_vcap__get_group()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_group");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_group");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_group */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_group_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_group_name
__attribute__((weak)) SV_STRING svt_vcap__get_group_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_group_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_group_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_group_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_count
__attribute__((weak)) int svt_vcap__get_sequencer_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer
__attribute__((weak)) int svt_vcap__get_sequencer()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_inst_path
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_inst_path
__attribute__((weak)) SV_STRING svt_vcap__get_sequencer_inst_path()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_inst_path");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_inst_path");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_inst_path */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_sequencer_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_sequencer_name
__attribute__((weak)) SV_STRING svt_vcap__get_sequencer_sequencer_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_sequencer_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_sequencer_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_sequencer_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_count
__attribute__((weak)) int svt_vcap__get_sequencer_resource_profile_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile
__attribute__((weak)) int svt_vcap__get_sequencer_resource_profile()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_path
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_path
__attribute__((weak)) SV_STRING svt_vcap__get_sequencer_resource_profile_path()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile_path");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile_path");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_path */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_count
__attribute__((weak)) int svt_vcap__get_sequencer_resource_profile_attr_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile_attr_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile_attr_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr
__attribute__((weak)) int svt_vcap__get_sequencer_resource_profile_attr()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile_attr");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile_attr");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_name
__attribute__((weak)) SV_STRING svt_vcap__get_sequencer_resource_profile_attr_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile_attr_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile_attr_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_value
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_value
__attribute__((weak)) SV_STRING svt_vcap__get_sequencer_resource_profile_attr_value()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_sequencer_resource_profile_attr_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_sequencer_resource_profile_attr_value");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_sequencer_resource_profile_attr_value */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_count
__attribute__((weak)) int svt_vcap__get_traffic_profile_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile
__attribute__((weak)) int svt_vcap__get_traffic_profile()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_path
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_path
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_profile_path()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_path");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_path");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_path */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_profile_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_profile_name
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_profile_profile_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_profile_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_profile_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_profile_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_component
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_component
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_profile_component()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_component");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_component");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_component */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_protocol
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_protocol
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_profile_protocol()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_protocol");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_protocol");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_protocol */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_count
__attribute__((weak)) int svt_vcap__get_traffic_profile_attr_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_attr_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_attr_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr
__attribute__((weak)) int svt_vcap__get_traffic_profile_attr()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_attr");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_attr");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_name
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_profile_attr_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_attr_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_attr_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_value
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_value
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_profile_attr_value()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_profile_attr_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_profile_attr_value");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_profile_attr_value */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_count
__attribute__((weak)) int svt_vcap__get_traffic_resource_profile_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile
__attribute__((weak)) int svt_vcap__get_traffic_resource_profile()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_path
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_path
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_resource_profile_path()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile_path");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile_path");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_path */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_count
__attribute__((weak)) int svt_vcap__get_traffic_resource_profile_attr_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile_attr_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile_attr_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr
__attribute__((weak)) int svt_vcap__get_traffic_resource_profile_attr()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile_attr");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile_attr");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_name
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_resource_profile_attr_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile_attr_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile_attr_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_value
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_value
__attribute__((weak)) SV_STRING svt_vcap__get_traffic_resource_profile_attr_value()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_traffic_resource_profile_attr_value");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_traffic_resource_profile_attr_value");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_traffic_resource_profile_attr_value */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec
__attribute__((weak)) int svt_vcap__get_synchronization_spec()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_count
__attribute__((weak)) int svt_vcap__get_synchronization_spec_input_event_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_input_event_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_input_event_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event
__attribute__((weak)) int svt_vcap__get_synchronization_spec_input_event()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_input_event");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_input_event");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_event_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_event_name
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_input_event_event_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_input_event_event_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_input_event_event_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_event_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_sequencer_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_sequencer_name
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_input_event_sequencer_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_input_event_sequencer_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_input_event_sequencer_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_sequencer_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_traffic_profile_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_traffic_profile_name
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_input_event_traffic_profile_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_input_event_traffic_profile_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_input_event_traffic_profile_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_input_event_traffic_profile_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_count
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_count
__attribute__((weak)) int svt_vcap__get_synchronization_spec_output_event_count()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_count");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_count");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_count */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event
__attribute__((weak)) int svt_vcap__get_synchronization_spec_output_event()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_event_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_event_name
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_output_event_event_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_event_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_event_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_event_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_sequencer_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_sequencer_name
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_output_event_sequencer_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_sequencer_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_sequencer_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_sequencer_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_traffic_profile_name
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_traffic_profile_name
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_output_event_traffic_profile_name()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_traffic_profile_name");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_traffic_profile_name");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_traffic_profile_name */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_output_event_type
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_output_event_type
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_output_event_output_event_type()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_output_event_type");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_output_event_type");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_output_event_type */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_frame_size
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_frame_size
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_output_event_frame_size()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_frame_size");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_frame_size");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_frame_size */

#ifndef __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_frame_time
#define __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_frame_time
__attribute__((weak)) SV_STRING svt_vcap__get_synchronization_spec_output_event_frame_time()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (SV_STRING (*)()) dlsym(RTLD_NEXT, "svt_vcap__get_synchronization_spec_output_event_frame_time");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svt_vcap__get_synchronization_spec_output_event_frame_time");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svt_vcap__get_synchronization_spec_output_event_frame_time */

#ifndef __VCS_IMPORT_DPI_STUB_svapfGetAttempt
#define __VCS_IMPORT_DPI_STUB_svapfGetAttempt
__attribute__((weak)) void* svapfGetAttempt(/* INPUT */unsigned int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */unsigned int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void* (*)(unsigned int A_1)) dlsym(RTLD_NEXT, "svapfGetAttempt");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svapfGetAttempt");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svapfGetAttempt */

#ifndef __VCS_IMPORT_DPI_STUB_svapfReportResult
#define __VCS_IMPORT_DPI_STUB_svapfReportResult
__attribute__((weak)) void svapfReportResult(/* INPUT */unsigned int A_1, /* INPUT */void* A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */unsigned int A_1, /* INPUT */void* A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(unsigned int A_1, void* A_2, int A_3)) dlsym(RTLD_NEXT, "svapfReportResult");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svapfReportResult");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svapfReportResult */

#ifndef __VCS_IMPORT_DPI_STUB_svapfGetAssertEnabled
#define __VCS_IMPORT_DPI_STUB_svapfGetAssertEnabled
__attribute__((weak)) int svapfGetAssertEnabled(/* INPUT */unsigned int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */unsigned int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (int (*)(unsigned int A_1)) dlsym(RTLD_NEXT, "svapfGetAssertEnabled");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "svapfGetAssertEnabled");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_svapfGetAssertEnabled */


#ifdef __cplusplus
}
#endif
