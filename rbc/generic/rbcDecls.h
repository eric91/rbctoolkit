/*
 * rbcDecls.h --
 *
 *  Declarations of functions in the platform independent public RBC API.
 *
 */

#ifndef _RBCDECLS
#define _RBCDECLS

#include <tk.h>

/* Note: RBCAPI defined on compile line when building RBC */
#ifdef RBCAPI
#   undef TCL_STORAGE_CLASS
#   define TCL_STORAGE_CLASS DLLEXPORT
#else
#   define RBCAPI extern
#   undef USE_RBCAPI_STUBS
#   define USE_RBCAPI_STUBS 1
#endif

EXTERN int Rbc_Init(Tcl_Interp *interp);

/*
 * WARNING: The below contents of this file is automatically generated by the
 * genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the tkimg.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Exported function declarations:
 */

/* 0 */
RBCAPI int		Rbc_CreateVector(Tcl_Interp *interp, char *vecName,
				int size, Rbc_Vector **vecPtrPtr);
/* 1 */
RBCAPI int		Rbc_GetVector(Tcl_Interp *interp, char *vecName,
				Rbc_Vector **vecPtrPtr);
/* 2 */
RBCAPI int		Rbc_ResizeVector(Rbc_Vector *vecPtr, int nValues);
/* 3 */
RBCAPI char *		Rbc_NameOfVector(Rbc_Vector *vecPtr);
/* 4 */
RBCAPI int		Rbc_ResetVector(Rbc_Vector *vecPtr, double *dataArr,
				int nValues, int arraySize,
				Tcl_FreeProc *freeProc);

typedef struct RbcStubs {
    int magic;
    void *hooks;

    int (*rbc_CreateVector) (Tcl_Interp *interp, char *vecName, int size, Rbc_Vector **vecPtrPtr); /* 0 */
    int (*rbc_GetVector) (Tcl_Interp *interp, char *vecName, Rbc_Vector **vecPtrPtr); /* 1 */
    int (*rbc_ResizeVector) (Rbc_Vector *vecPtr, int nValues); /* 2 */
    char * (*rbc_NameOfVector) (Rbc_Vector *vecPtr); /* 3 */
    int (*rbc_ResetVector) (Rbc_Vector *vecPtr, double *dataArr, int nValues, int arraySize, Tcl_FreeProc *freeProc); /* 4 */
} RbcStubs;

extern const RbcStubs *rbcStubsPtr;

#ifdef __cplusplus
}
#endif

#if defined(USE_RBC_STUBS)

/*
 * Inline function declarations:
 */

#define Rbc_CreateVector \
	(rbcStubsPtr->rbc_CreateVector) /* 0 */
#define Rbc_GetVector \
	(rbcStubsPtr->rbc_GetVector) /* 1 */
#define Rbc_ResizeVector \
	(rbcStubsPtr->rbc_ResizeVector) /* 2 */
#define Rbc_NameOfVector \
	(rbcStubsPtr->rbc_NameOfVector) /* 3 */
#define Rbc_ResetVector \
	(rbcStubsPtr->rbc_ResetVector) /* 4 */

#endif /* defined(USE_RBC_STUBS) */

/* !END!: Do not edit above this line. */

#endif
