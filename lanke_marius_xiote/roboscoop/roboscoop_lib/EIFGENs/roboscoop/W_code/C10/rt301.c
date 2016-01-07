/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F301_7335(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7336(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7337(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7338(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7339(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7340(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7341(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7342(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7343(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7344(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7345(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7346(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7347(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7348(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7349(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7350(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F301_7351(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7352(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7353(EIF_REFERENCE);
extern EIF_TYPED_VALUE F301_7354(EIF_REFERENCE);
extern EIF_TYPED_VALUE F301_7355(EIF_REFERENCE);
extern EIF_TYPED_VALUE F301_7356(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7357(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7358(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7359(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7360(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7361(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7362(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7363(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7364(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7365(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7366(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7367(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7368(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7369(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7370(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7371(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7372(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F301_7373(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F301_7374(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F301_7375(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F301_7376(EIF_REFERENCE);
extern EIF_TYPED_VALUE F301_7377(EIF_REFERENCE);
extern void EIF_Minit301(void);

#ifdef __cplusplus
}
#endif

#include "eif_eiffel.h"
#include "eif_debug.h"
#include "eif_internal.h"
#include "eif_macros.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F301_7347
static int inline_F301_7347 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F301_7347
#endif
#ifndef INLINE_F301_7348
static EIF_INTEGER_32 inline_F301_7348 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F301_7348
#endif
#ifndef INLINE_F301_7349
static EIF_NATURAL_32 inline_F301_7349 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F301_7349
#endif
#ifndef INLINE_F301_7352
static EIF_REFERENCE inline_F301_7352 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F301_7352
#endif
#ifndef INLINE_F301_7357
static EIF_INTEGER_32 inline_F301_7357 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7357
#endif
#ifndef INLINE_F301_7358
static EIF_INTEGER_32 inline_F301_7358 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7358
#endif
#ifndef INLINE_F301_7359
static EIF_INTEGER_32 inline_F301_7359 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7359
#endif
#ifndef INLINE_F301_7360
static EIF_INTEGER_32 inline_F301_7360 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7360
#endif
#ifndef INLINE_F301_7361
static EIF_INTEGER_32 inline_F301_7361 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7361
#endif
#ifndef INLINE_F301_7362
static EIF_INTEGER_32 inline_F301_7362 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7362
#endif
#ifndef INLINE_F301_7363
static EIF_INTEGER_32 inline_F301_7363 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7363
#endif
#ifndef INLINE_F301_7364
static EIF_INTEGER_32 inline_F301_7364 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7364
#endif
#ifndef INLINE_F301_7365
static EIF_INTEGER_32 inline_F301_7365 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7365
#endif
#ifndef INLINE_F301_7366
static EIF_INTEGER_32 inline_F301_7366 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7366
#endif
#ifndef INLINE_F301_7367
static EIF_INTEGER_32 inline_F301_7367 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7367
#endif
#ifndef INLINE_F301_7368
static EIF_INTEGER_32 inline_F301_7368 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7368
#endif
#ifndef INLINE_F301_7369
static EIF_INTEGER_32 inline_F301_7369 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7369
#endif
#ifndef INLINE_F301_7370
static EIF_INTEGER_32 inline_F301_7370 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7370
#endif
#ifndef INLINE_F301_7371
static EIF_INTEGER_32 inline_F301_7371 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_REF; 
	a_val.it_ref = (EIF_REFERENCE) &(arg4);
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7371
#endif
#ifndef INLINE_F301_7372
static EIF_INTEGER_32 inline_F301_7372 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_VOID; 
	a_val.it_ref = (char*) 0;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F301_7372
#endif
#ifndef INLINE_F301_7373
static void inline_F301_7373 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F301_7373
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_TYPED_VALUE F301_7335 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "object_field_count";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12369);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12369);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2748, "set_object", tr1))(tr1, ur1x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2634, "field_count", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_TYPED_VALUE F301_7336 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "object_records";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 300, Current, 4, 1, 12370);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12370);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ur1 = RTCCL(arg1);
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5196, dtype))(Current, ur1x)).it_i4);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF800014B, 0, 0); /* loc3 */
		tr1 = RTLNSMART(RTWCT(5197, dtype, Dftype(Current)).id);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			ui4_1 = loc1;
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr1);
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2152, "extend", loc3))(loc3, ur1x);
			}
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF800014B, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_is_expanded */
EIF_TYPED_VALUE F301_7337 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "object_is_expanded";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12371);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	up1 = arg1;
	Result = EIF_TEST ((((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5208, dtype))(Current, up1x))).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_TYPED_VALUE F301_7338 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "field_index_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 300, Current, 2, 2, 12372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12372);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80000C8, 0, 0); /* loc2 */
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2748, "set_object", loc2))(loc2, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2634, "field_count", loc2))(loc2)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2595, "field_offset", loc2))(loc2, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.field_name_at */
EIF_TYPED_VALUE F301_7339 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "field_name_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 300, Current, 1, 2, 12373);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12373);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = arg1;
	ur1 = RTCCL(arg2);
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5199, dtype))(Current, ui4_1x, ur1x)).it_i4);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2748, "set_object", tr1))(tr1, ur1x);
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF800011F, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2594, "field_name", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.field_at */
EIF_TYPED_VALUE F301_7340 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "field_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 300, Current, 1, 3, 12374);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12374);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5203, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(631, 31))(Current, ui4_1x, up1x, ui4_2x)).it_b);
			Result = RTLN(eif_new_type(255, 0x00).id);
			*(EIF_BOOLEAN *)Result = tb1;
			break;
		case 2L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(629, 31))(Current, ui4_1x, up1x, ui4_2x)).it_c1);
			Result = RTLN(eif_new_type(249, 0x00).id);
			*(EIF_CHARACTER_8 *)Result = tc1;
			break;
		case 12L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(630, 31))(Current, ui4_1x, up1x, ui4_2x)).it_c4);
			Result = RTLN(eif_new_type(246, 0x00).id);
			*(EIF_CHARACTER_32 *)Result = tw1;
			break;
		case 13L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(632, 31))(Current, ui4_1x, up1x, ui4_2x)).it_n1);
			Result = RTLN(eif_new_type(261, 0x00).id);
			*(EIF_NATURAL_8 *)Result = tu1_1;
			break;
		case 14L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(633, 31))(Current, ui4_1x, up1x, ui4_2x)).it_n2);
			Result = RTLN(eif_new_type(270, 0x00).id);
			*(EIF_NATURAL_16 *)Result = tu2_1;
			break;
		case 15L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(634, 31))(Current, ui4_1x, up1x, ui4_2x)).it_n4);
			Result = RTLN(eif_new_type(267, 0x00).id);
			*(EIF_NATURAL_32 *)Result = tu4_1;
			break;
		case 16L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(635, 31))(Current, ui4_1x, up1x, ui4_2x)).it_n8);
			Result = RTLN(eif_new_type(279, 0x00).id);
			*(EIF_NATURAL_64 *)Result = tu8_1;
			break;
		case 9L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(636, 31))(Current, ui4_1x, up1x, ui4_2x)).it_i1);
			Result = RTLN(eif_new_type(243, 0x00).id);
			*(EIF_INTEGER_8 *)Result = ti1_1;
			break;
		case 10L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(637, 31))(Current, ui4_1x, up1x, ui4_2x)).it_i2);
			Result = RTLN(eif_new_type(276, 0x00).id);
			*(EIF_INTEGER_16 *)Result = ti2_1;
			break;
		case 4L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(638, 31))(Current, ui4_1x, up1x, ui4_2x)).it_i4);
			Result = RTLN(eif_new_type(273, 0x00).id);
			*(EIF_INTEGER_32 *)Result = ti4_1;
			break;
		case 11L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(639, 31))(Current, ui4_1x, up1x, ui4_2x)).it_i8);
			Result = RTLN(eif_new_type(252, 0x00).id);
			*(EIF_INTEGER_64 *)Result = ti8_1;
			break;
		case 5L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(640, 31))(Current, ui4_1x, up1x, ui4_2x)).it_r4);
			Result = RTLN(eif_new_type(264, 0x00).id);
			*(EIF_REAL_32 *)Result = tr4_1;
			break;
		case 6L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(642, 31))(Current, ui4_1x, up1x, ui4_2x)).it_r8);
			Result = RTLN(eif_new_type(258, 0x00).id);
			*(EIF_REAL_64 *)Result = tr8_1;
			break;
		case 0L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(641, 31))(Current, ui4_1x, up1x, ui4_2x)).it_p);
			Result = RTLN(eif_new_type(282, 0x00).id);
			*(EIF_POINTER *)Result = tp1;
			break;
		case 1L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(628, 31))(Current, ui4_1x, up1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.stack_value_at */
EIF_TYPED_VALUE F301_7341 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "stack_value_at";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12375);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(300,"rt_dbg_internal")
	) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("\012stack_value_at (",17,878674216);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ",2,11296);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg3);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", 0x",4,740307064);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTLN(eif_new_type(267, 0x00).id);
		*(EIF_NATURAL_32 *)tr2 = arg4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4539, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")\012",2,10506);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	uu4_1 = arg4;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5213, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (
		WDBG(300,"rt_dbg_internal")
	) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("stack_value_at -> ",18,348891168);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(" = ",3,2112800);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4038, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H("Void Result",11,255691380);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_TYPED_VALUE F301_7342 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_type";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12376);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(300, Current, 12376);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	uu4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5209, Dtype(Current)))(Current, uu4_1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu4_1
#undef arg1
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_TYPED_VALUE F301_7343 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "rt_dynamic_type";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12377);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12377);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	up1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5211, dtype))(Current, up1x)).it_i4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rt_dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_record */
EIF_TYPED_VALUE F301_7344 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "object_record";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 300, Current, 2, 2, 12378);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12378);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80000C8, 0, 0); /* loc2 */
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2748, "set_object", loc2))(loc2, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2596, "field_type", loc2))(loc2, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2595, "field_offset", loc2))(loc2, ui4_1x)).it_i4);
	ui4_1 = ti4_1;
	ui4_2 = arg1;
	ui4_3 = loc1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5210, dtype))(Current, ui4_2x, ui4_3x)).it_n4);
	uu4_1 = tu4_1;
	ur1 = RTCCL(arg2);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5206, dtype))(Current, ui4_1x, uu4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,243,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2608, "integer_8_field", loc2))(loc2, ui4_3x)).it_i1);
			ui1_1 = ti1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui1_1x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,889,276,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2609, "integer_16_field", loc2))(loc2, ui4_3x)).it_i2);
			ui2_1 = ti2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui2_1x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,925,273,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2610, "integer_32_field", loc2))(loc2, ui4_3x)).it_i4);
			ui4_3 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,252,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2611, "integer_64_field", loc2))(loc2, ui4_3x)).it_i8);
			ui8_1 = ti8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui8_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,829,261,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "natural_8_field", loc2))(loc2, ui4_3x)).it_n1);
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu1_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 14L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,270,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2605, "natural_16_field", loc2))(loc2, ui4_3x)).it_n2);
			uu2_1 = tu2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu2_1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,537,267,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2606, "natural_32_field", loc2))(loc2, ui4_3x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 16L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,795,279,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2607, "natural_64_field", loc2))(loc2, ui4_3x)).it_n8);
			uu8_1 = tu8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu8_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 0L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,730,282,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2613, "pointer_field", loc2))(loc2, ui4_3x)).it_p);
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, up1x);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,618,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2581, "reference_field", loc2))(loc2, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur2x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,618,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2580, "field", loc2))(loc2, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur2x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 3L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,927,255,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2603, "boolean_field", loc2))(loc2, ui4_3x)).it_b);
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ub1x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,904,264,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2612, "real_32_field", loc2))(loc2, ui4_3x)).it_r4);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur4_1x);
			RTNHOOK(19,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,728,258,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2614, "real_64_field", loc2))(loc2, ui4_3x)).it_r8);
			ur8_1 = tr8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur8_1x);
			RTNHOOK(20,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(21);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,713,249,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2601, "character_8_field", loc2))(loc2, ui4_3x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uc1x);
			RTNHOOK(21,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(22);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,246,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2602, "character_32_field", loc2))(loc2, ui4_3x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5364, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uw1x);
			RTNHOOK(22,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_attribute_record */
EIF_TYPED_VALUE F301_7345 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "object_attribute_record";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 300, Current, 2, 3, 12379);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12379);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5203, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,916,255,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(631, 31))(Current, ui4_3x, up1x, ui4_4x)).it_b);
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ub1x);
			RTNHOOK(4,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,694,249,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(629, 31))(Current, ui4_3x, up1x, ui4_4x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uc1x);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,891,246,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(630, 31))(Current, ui4_3x, up1x, ui4_4x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uw1x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 9L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,908,243,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(636, 31))(Current, ui4_3x, up1x, ui4_4x)).it_i1);
			ui1_1 = ti1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui1_1x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,883,276,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(637, 31))(Current, ui4_3x, up1x, ui4_4x)).it_i2);
			ui2_1 = ti2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui2_1x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,915,273,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(638, 31))(Current, ui4_3x, up1x, ui4_4x)).it_i4);
			ui4_3 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui4_3x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,896,252,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(639, 31))(Current, ui4_3x, up1x, ui4_4x)).it_i8);
			ui8_1 = ti8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui8_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,926,261,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(632, 31))(Current, ui4_3x, up1x, ui4_4x)).it_n1);
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu1_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 14L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,860,270,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(633, 31))(Current, ui4_3x, up1x, ui4_4x)).it_n2);
			uu2_1 = tu2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu2_1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,470,267,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(632, 31))(Current, ui4_3x, up1x, ui4_4x)).it_n1);
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			uu4_2 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu4_2x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 16L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,791,279,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(632, 31))(Current, ui4_3x, up1x, ui4_4x)).it_n1);
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			uu8_1 = tu8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu8_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,718,264,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(640, 31))(Current, ui4_3x, up1x, ui4_4x)).it_r4);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur4_1x);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,887,258,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(642, 31))(Current, ui4_3x, up1x, ui4_4x)).it_r8);
			ur8_1 = tr8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur8_1x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 0L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,723,282,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(641, 31))(Current, ui4_3x, up1x, ui4_4x)).it_p);
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, up1x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,532,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(628, 31))(Current, ui4_3x, up1x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur2x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(19);
			RTDBGAL(Current, 2, 0xF80000C8, 0, 0); /* loc2 */
			tr1 = RTLN(eif_new_type(200, 0x01).id);
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ur1x, ui4_1x);
			RTNHOOK(19,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,532,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2574, "object", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5371, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur2x);
			RTNHOOK(20,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu4_2
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_local_record */
EIF_TYPED_VALUE F301_7346 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "object_local_record";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 300, Current, 1, 3, 12380);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(300, Current, 12380);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	uu4_1 = arg3;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5203, Dtype(Current)))(Current, uu4_1x)).it_i4);
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,533,255,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(3,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,727,249,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(4,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,901,246,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,261,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 14L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,903,270,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,900,267,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 16L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,882,279,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 9L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,714,243,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,897,276,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,917,273,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,693,252,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,914,264,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,577,258,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 0L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,827,282,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,468,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,468,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5354, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5351, "get_value", Result))(Result);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_TYPED_VALUE F301_7347 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_object_is_expanded";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12381);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12381);
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F301_7347 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_TYPED_VALUE F301_7348 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_eif_type";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12382);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12382);
	RTIV(Current, RTAL);
	Result = inline_F301_7348 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_TYPED_VALUE F301_7349 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_rt_field_type";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 2, 12383);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12383);
	RTIV(Current, RTAL);
	Result = inline_F301_7349 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_TYPED_VALUE F301_7350 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_rt_dynamic_type";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12384);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12384);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) Dtype(((EIF_REFERENCE) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {RT_DBG_INTERNAL}.set_field_at */
void F301_7351 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "set_field_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,arg3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_CHAR32, &loc4);
	RTLU(SK_UINT8, &loc5);
	RTLU(SK_UINT16, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT64, &loc8);
	RTLU(SK_INT8, &loc9);
	RTLU(SK_INT16, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT64, &loc12);
	RTLU(SK_REAL32, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_POINTER, &loc15);
	
	RTEAA(l_feature_name, 300, Current, 15, 4, 12385);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12385);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(300,"rt_dbg_internal")
	) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("set_field_at (",14,2075087144);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ",2,11296);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outu(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", value, ",9,1878132512);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7, "generator", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(") \012",3,2695178);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5203, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(255, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(6);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ub1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(667, 31))(Current, ui4_1x, up1x, ui4_2x, ub1x);
			}
			break;
		case 2L:
			RTHOOK(7);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(249, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(8);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uc1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(665, 31))(Current, ui4_1x, up1x, ui4_2x, uc1x);
			}
			break;
		case 12L:
			RTHOOK(9);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(246, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(10);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uw1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(666, 31))(Current, ui4_1x, up1x, ui4_2x, uw1x);
			}
			break;
		case 13L:
			RTHOOK(11);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(261, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(12);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu1_1 = loc5;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(668, 31))(Current, ui4_1x, up1x, ui4_2x, uu1_1x);
			}
			break;
		case 14L:
			RTHOOK(13);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(270, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(14);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu2_1 = loc6;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(669, 31))(Current, ui4_1x, up1x, ui4_2x, uu2_1x);
			}
			break;
		case 15L:
			RTHOOK(15);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(267, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(16);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu4_1 = loc7;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(670, 31))(Current, ui4_1x, up1x, ui4_2x, uu4_1x);
			}
			break;
		case 16L:
			RTHOOK(17);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(279, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(18);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu8_1 = loc8;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(671, 31))(Current, ui4_1x, up1x, ui4_2x, uu8_1x);
			}
			break;
		case 9L:
			RTHOOK(19);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(243, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(20);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui1_1 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(672, 31))(Current, ui4_1x, up1x, ui4_2x, ui1_1x);
			}
			break;
		case 10L:
			RTHOOK(21);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(276, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(22);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui2_1 = loc10;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(673, 31))(Current, ui4_1x, up1x, ui4_2x, ui2_1x);
			}
			break;
		case 4L:
			RTHOOK(23);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(273, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(24);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui4_3 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(674, 31))(Current, ui4_1x, up1x, ui4_2x, ui4_3x);
			}
			break;
		case 11L:
			RTHOOK(25);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(252, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(26);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui8_1 = loc12;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(675, 31))(Current, ui4_1x, up1x, ui4_2x, ui8_1x);
			}
			break;
		case 5L:
			RTHOOK(27);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), eif_new_type(264, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(28);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ur4_1 = loc13;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(676, 31))(Current, ui4_1x, up1x, ui4_2x, ur4_1x);
			}
			break;
		case 6L:
			RTHOOK(29);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), eif_new_type(258, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(30);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ur8_1 = loc14;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(664, 31))(Current, ui4_1x, up1x, ui4_2x, ur8_1x);
			}
			break;
		case 0L:
			RTHOOK(31);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), eif_new_type(282, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(32);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				up2 = loc15;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(677, 31))(Current, ui4_1x, up1x, ui4_2x, up2x);
			}
			break;
		case 1L:
			RTHOOK(33);
			ui4_1 = arg1;
			up1 = arg4;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ur1 = RTCCL(arg3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(663, 31))(Current, ui4_1x, up1x, ui4_2x, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_TYPED_VALUE F301_7352 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_stack_value_at";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12386);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12386);
	RTIV(Current, RTAL);
	Result = inline_F301_7352 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.rt_dlt_argument */
EIF_TYPED_VALUE F301_7353 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {RT_DBG_INTERNAL}.rt_dlt_localvar */
EIF_TYPED_VALUE F301_7354 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {RT_DBG_INTERNAL}.rt_dlt_result */
EIF_TYPED_VALUE F301_7355 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_TYPED_VALUE F301_7356 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "set_stack_value_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,arg5);
	RTLR(6,loc16);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_CHAR32, &loc4);
	RTLU(SK_UINT8, &loc5);
	RTLU(SK_UINT16, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT64, &loc8);
	RTLU(SK_INT8, &loc9);
	RTLU(SK_INT16, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT64, &loc12);
	RTLU(SK_REAL32, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_POINTER, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 300, Current, 16, 5, 12390);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12390);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_loc_type_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5215, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5214, dtype))(Current)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5216, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ti4_1) || (EIF_BOOLEAN)(arg2 == ti4_2)) || (EIF_BOOLEAN)(arg2 == ti4_3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(300,"rt_dbg_internal")
	) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("set_stack_value_at (dep=",24,74260029);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", loc_type=",11,772119869);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", pos=",6,1973105469);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg3);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", type=0x",9,647660408);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTLN(eif_new_type(267, 0x00).id);
		*(EIF_NATURAL_32 *)tr2 = arg4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4539, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", value=",8,988801853);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg5 == NULL)) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("Void) \012",7,87599370);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(": ",2,14880);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4038, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(") \012",3,2695178);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
	}
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	uu4_1 = arg4;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5203, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(7);
	switch (loc1) {
		case 3L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(255, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ub1 = loc2;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5218, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x)).it_i4);
			}
			break;
		case 2L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(249, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(11);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uc1 = loc3;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5219, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uc1x)).it_i4);
			}
			break;
		case 12L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(246, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uw1 = loc4;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5220, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uw1x)).it_i4);
			}
			break;
		case 13L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(261, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(15);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu1_1 = loc5;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5221, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu1_1x)).it_i4);
			}
			break;
		case 14L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(270, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(17);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu2_1 = loc6;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5222, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu2_1x)).it_i4);
			}
			break;
		case 15L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(267, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(19);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu4_1 = loc7;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5223, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)).it_i4);
			}
			break;
		case 16L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(279, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(21);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu8_1 = loc8;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5224, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu8_1x)).it_i4);
			}
			break;
		case 9L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(243, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(23);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui1_1 = loc9;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5225, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui1_1x)).it_i4);
			}
			break;
		case 10L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(276, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(25);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui2_1 = loc10;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5226, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui2_1x)).it_i4);
			}
			break;
		case 4L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(273, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(27);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui4_4 = loc11;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5227, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
			}
			break;
		case 11L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(252, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(29);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui8_1 = loc12;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5228, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui8_1x)).it_i4);
			}
			break;
		case 5L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), eif_new_type(264, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(31);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ur4_1 = loc13;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5229, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur4_1x)).it_i4);
			}
			break;
		case 6L:
			RTHOOK(32);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), eif_new_type(258, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(33);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ur8_1 = loc14;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5230, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x)).it_i4);
			}
			break;
		case 0L:
			RTHOOK(34);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), eif_new_type(282, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(35);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				up1 = loc15;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5231, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, up1x)).it_i4);
			}
			break;
		case 1L:
			RTHOOK(36);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(37);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				up1 = arg5;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5232, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, up1x)).it_i4);
			} else {
				RTHOOK(38);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5233, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_i4);
			}
			break;
		default:
			RTHOOK(39);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
	}
	if (
		WDBG(300,"rt_dbg_internal")
	) {
		RTHOOK(40);
		tr1 = RTMS_EX_H("set_stack_value_at (dep=",24,74260029);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", loc_type=",11,772119869);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", pos=",6,1973105469);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg3);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ...) -> ",10,717919008);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(Result);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(" \012",2,8202);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(41);
		tr1 = RTMS_EX_H("set_stack_value_at: check modification -> ",42,1517544736);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(42);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg3;
		uu4_1 = arg4;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5202, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc16 = RTCCL(tr1);
		if (EIF_TEST(loc16)) {
			RTHOOK(43);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", loc16))(loc16)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(": ",2,14880);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4038, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc16))(loc16)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(44);
			tr1 = RTMS_EX_H(" Void \012",7,864393738);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_boolean_stack_value */
EIF_TYPED_VALUE F301_7357 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_boolean_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_b
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12391);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12391);
	RTIV(Current, RTAL);
	Result = inline_F301_7357 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_TYPED_VALUE F301_7358 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_character_8_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_c1
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_c1 = * (EIF_CHARACTER_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_CHAR8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12392);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12392);
	RTIV(Current, RTAL);
	Result = inline_F301_7358 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_TYPED_VALUE F301_7359 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_character_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_c4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_c4 = * (EIF_CHARACTER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_CHAR32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12393);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12393);
	RTIV(Current, RTAL);
	Result = inline_F301_7359 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_TYPED_VALUE F301_7360 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_8_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n1
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n1 = * (EIF_NATURAL_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12394);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12394);
	RTIV(Current, RTAL);
	Result = inline_F301_7360 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_TYPED_VALUE F301_7361 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_16_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n2
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n2 = * (EIF_NATURAL_16 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT16,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12395);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12395);
	RTIV(Current, RTAL);
	Result = inline_F301_7361 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_TYPED_VALUE F301_7362 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12396);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12396);
	RTIV(Current, RTAL);
	Result = inline_F301_7362 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_TYPED_VALUE F301_7363 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_64_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n8
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n8 = * (EIF_NATURAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12397);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12397);
	RTIV(Current, RTAL);
	Result = inline_F301_7363 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_TYPED_VALUE F301_7364 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_8_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i1
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i1 = * (EIF_INTEGER_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12398);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12398);
	RTIV(Current, RTAL);
	Result = inline_F301_7364 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_TYPED_VALUE F301_7365 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_16_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i2
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i2 = * (EIF_INTEGER_16 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT16,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12399);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12399);
	RTIV(Current, RTAL);
	Result = inline_F301_7365 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_TYPED_VALUE F301_7366 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12400);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12400);
	RTIV(Current, RTAL);
	Result = inline_F301_7366 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_TYPED_VALUE F301_7367 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_64_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i8
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i8 = * (EIF_INTEGER_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12401);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12401);
	RTIV(Current, RTAL);
	Result = inline_F301_7367 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_TYPED_VALUE F301_7368 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_real_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12402);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12402);
	RTIV(Current, RTAL);
	Result = inline_F301_7368 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_TYPED_VALUE F301_7369 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_real_64_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r8
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12403);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12403);
	RTIV(Current, RTAL);
	Result = inline_F301_7369 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_TYPED_VALUE F301_7370 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_pointer_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12404);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12404);
	RTIV(Current, RTAL);
	Result = inline_F301_7370 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_TYPED_VALUE F301_7371 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_reference_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 4, 12405);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(300, Current, 12405);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ref_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg4 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F301_7371 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_TYPED_VALUE F301_7372 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_set_void_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 3, 12406);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12406);
	RTIV(Current, RTAL);
	Result = inline_F301_7372 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F301_7373 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_rt_set_is_inside_rt_eiffel_code";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 1, 12407);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(300, Current, 12407);
	RTIV(Current, RTAL);
	inline_F301_7373 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F301_7374 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "test_locals";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_n4
	RTS_SDR;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,arg3);
	RTLR(5,tr3);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 300, Current, 3, 4, 12408);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12408);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, dtype))(Current, ui4_1x);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800011F, 0, 0); /* loc1 */
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("Loc #",5,1869350947);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": should be ",12,282022432);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4043, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		}
		RTHOOK(7);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(9);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(10);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5215, dtype))(Current)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = arg2;
		uu4_1 = arg4;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5202, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("=",1,61);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4038, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		} else {
			RTHOOK(12);
			tr1 = RTMS_EX_H("Void object",11,160638836);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		}
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(14);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(15);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(17);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(9);
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.test_set_local */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F301_7375 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "test_set_local";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_n4
	RTS_SDR;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,arg3);
	RTLR(5,tr3);
	RTLR(6,Current);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 300, Current, 3, 4, 12409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(300, Current, 12409);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, dtype))(Current, ui4_1x);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800011F, 0, 0); /* loc1 */
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("SetLoc #",8,1411988515);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": value ",8,992027424);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4043, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H(": value Void",12,962399588);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(9);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5215, dtype))(Current)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = arg2;
		uu4_1 = arg4;
		ur1 = RTCCL(arg3);
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5217, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x, ur1x)).it_i4);
		RTHOOK(11);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(12);
		tr1 = RTMS_EX_H("Result = ",9,495958816);
		tr2 = c_outi(loc2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4988, "append", loc1))(loc1, ur1x);
		RTHOOK(14);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(15);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(17);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5234, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(9);
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.reflected_object */
RTOID (F301_7376)
EIF_TYPED_VALUE F301_7376 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reflected_object";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F301_7376);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 0, 12410);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(300, Current, 12410);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000C8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(200, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2743, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {RT_DBG_INTERNAL}.reflector */
RTOID (F301_7377)
EIF_TYPED_VALUE F301_7377 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reflector";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F301_7377);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 300, Current, 0, 0, 12411);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(300, Current, 12411);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000C4, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(196, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit301 (void)
{
	GTCX
	RTOTS (7376,F301_7376)
	RTOTS (7377,F301_7377)
}


#ifdef __cplusplus
}
#endif
