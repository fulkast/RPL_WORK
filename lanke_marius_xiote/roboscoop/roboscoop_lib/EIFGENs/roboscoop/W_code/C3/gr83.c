/*
 * Code for class GRID_GRAPH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F83_1510(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F83_1511(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F83_1512(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_1513(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_1514(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_1515(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_1516(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_1517(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F83_1518(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_1519(EIF_REFERENCE);
extern void EIF_Minit83(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GRID_GRAPH}.make_3d */
void F83_1510 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "make_3d";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
#define arg8 arg8x.it_r8
#define arg9 arg9x.it_r8
#define arg10 arg10x.it_r
	EIF_BOOLEAN uarg10;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_r8 = * (EIF_REAL_64 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_r8 = * (EIF_REAL_64 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg10);
	RTLR(2,tr1);
	RTLR(3,loc11);
	RTLR(4,loc12);
	RTLR(5,loc10);
	RTLR(6,tr2);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU(SK_REAL64,&arg8);
	RTLU(SK_REAL64,&arg9);
	RTLU(SK_REF,&arg10);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 82, Current, 12, 10, 1445);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1445);
	RTCC(arg10, 82, l_feature_name, 10, eif_new_type(20, 0x05), 0x05);
	uarg10 = (EIF_BOOLEAN) RTS_OU (Current, arg10);
	uarg = uarg10;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg10);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTCT(NULL, EX_PRE);
	RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
	RTCK;
	RTHOOK(2);
	RTCT(NULL, EX_PRE);
	RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
	RTCK;
	RTHOOK(3);
	RTCT(NULL, EX_PRE);
	RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
	RTCK;
	RTHOOK(4);
	RTCT(NULL, EX_PRE);
	RTTE((EIF_BOOLEAN) (arg4 <= arg5), label_1);
	RTCK;
	RTHOOK(5);
	RTCT(NULL, EX_PRE);
	RTTE((EIF_BOOLEAN) (arg6 <= arg7), label_1);
	RTCK;
	RTHOOK(6);
	RTCT(NULL, EX_PRE);
	RTTE((EIF_BOOLEAN) (arg8 <= arg9), label_1);
	RTCK;
	RTHOOK(7);
	RTCT(NULL, EX_PRE);
	RTTE((!((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) || ((EIF_BOOLEAN)(arg4 == arg5))), label_1);
	RTCK;
	RTHOOK(8);
	RTCT(NULL, EX_PRE);
	RTTE((!((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) || ((EIF_BOOLEAN)(arg6 == arg7))), label_1);
	RTCK;
	RTHOOK(9);
	RTCT(NULL, EX_PRE);
	RTTE((!((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) || ((EIF_BOOLEAN)(arg8 == arg9))), label_1);
	RTCK;
	RTJB;
label_1:
	RTCF;
body:;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 1286, 0x10000000, 1); /* count_x */
	*(EIF_INTEGER_32 *)(Current + RTWA(1286, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 1287, 0x10000000, 1); /* count_y */
	*(EIF_INTEGER_32 *)(Current + RTWA(1287, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 1288, 0x10000000, 1); /* count_z */
	*(EIF_INTEGER_32 *)(Current + RTWA(1288, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 1279, 0xF8000152, 0); /* nodes */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,0xFF01,239,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(13,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1279, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 1292, 0xF800014B, 0); /* grid */
	tr1 = RTLNSMART(RTWCT(1292, dtype, dftype).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(14,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1292, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(16);
		RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
		loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg5 - arg4)) /  (EIF_REAL_64) (tr8_1));
	}
	RTHOOK(17);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(18);
		RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
		loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg7 - arg6)) /  (EIF_REAL_64) (tr8_1));
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(20);
		RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L))));
		loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg9 - arg8)) /  (EIF_REAL_64) (tr8_1));
	}
	RTHOOK(21);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(22);
	RTDBGAL(Current, 4, 0x20000000, 1, 0); /* loc4 */
	loc4 = (EIF_REAL_64) arg4;
	for (;;) {
		RTHOOK(23);
		if ((EIF_BOOLEAN) (loc7 > arg1)) break;
		RTHOOK(24);
		RTDBGAL(Current, 11, 0xF800014B, 0, 0); /* loc11 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,0xFF01,331,0xFF01,239,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(24,1);
		loc11 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(25);
		RTDBGAL(Current, 4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L))));
		loc4 = (EIF_REAL_64) (EIF_REAL_64) (arg4 + (EIF_REAL_64) (loc1 * tr8_1));
		RTHOOK(26);
		RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(27);
		RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
		loc5 = (EIF_REAL_64) arg6;
		for (;;) {
			RTHOOK(28);
			if ((EIF_BOOLEAN) (loc8 > arg2)) break;
			RTHOOK(29);
			RTDBGAL(Current, 12, 0xF800014B, 0, 0); /* loc12 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,331,0xFF01,239,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(29,1);
			loc12 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(30);
			RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L))));
			loc5 = (EIF_REAL_64) (EIF_REAL_64) (arg6 + (EIF_REAL_64) (loc2 * tr8_1));
			RTHOOK(31);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(32);
			RTDBGAL(Current, 6, 0x20000000, 1, 0); /* loc6 */
			loc6 = (EIF_REAL_64) arg8;
			for (;;) {
				RTHOOK(33);
				if ((EIF_BOOLEAN) (loc9 > arg3)) break;
				RTHOOK(34);
				RTDBGAL(Current, 6, 0x20000000, 1, 0); /* loc6 */
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L))));
				loc6 = (EIF_REAL_64) (EIF_REAL_64) (arg8 + (EIF_REAL_64) (loc3 * tr8_1));
				RTHOOK(35);
				RTDBGAL(Current, 10, 0xF80000EF, 0, 0); /* loc10 */
				tr1 = RTLN(eif_new_type(239, 0x01).id);
				tr2 = RTLN(eif_new_type(53, 0x01).id);
				ur8_1 = loc4;
				ur8_2 = loc5;
				ur8_3 = loc6;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr2)))(tr2, ur8_1x, ur8_2x, ur8_3x);
				RTNHOOK(35,1);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3967, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(35,2);
				loc10 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(36);
				ur1 = RTCCL(loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2152, "extend", loc12))(loc12, ur1x);
				RTHOOK(37);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1279, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(37,1);
				ur1 = RTCCL(loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2152, "extend", tr1))(tr1, ur1x);
				RTHOOK(38);
				RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
				loc9++;
			}
			RTHOOK(39);
			ur1 = RTCCL(loc12);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2152, "extend", loc11))(loc11, ur1x);
			RTHOOK(40);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			loc8++;
		}
		RTHOOK(41);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(41,1);
		ur1 = RTCCL(loc11);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2152, "extend", tr1))(tr1, ur1x);
		RTHOOK(42);
		RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
	}
	RTHOOK(43);
	ur1 = RTCCL(Current);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg10)) && !(EIF_IS_PASSIVE (arg10))) {
		RTS_AC (1, arg10, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(400, "connect", arg10, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg10));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(400, "connect", arg10))(arg10, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(24);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GRID_GRAPH}.make_2d */
void F83_1511 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "make_2d";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r
	EIF_BOOLEAN uarg7;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ur8_5x = {{0}, SK_REAL64};
#define ur8_5 ur8_5x.it_r8
	EIF_TYPED_VALUE ur8_6x = {{0}, SK_REAL64};
#define ur8_6 ur8_6x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg7);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 7, 1446);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(82, Current, 1446);
	RTCC(arg7, 82, l_feature_name, 7, eif_new_type(20, 0x05), 0x05);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg = uarg7;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg7);
		RTS_RW (Current);
	}
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = ((EIF_INTEGER_32) 1L);
	ur8_1 = arg3;
	ur8_2 = arg4;
	ur8_3 = arg5;
	ur8_4 = arg6;
	ur8_5 = (EIF_REAL_64) 0.0;
	ur8_6 = (EIF_REAL_64) 0.0;
	ur1 = RTCCL(arg7);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1283, Dtype(Current)))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x, ur8_6x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(9);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ur8_6
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GRID_GRAPH}.make_1d */
void F83_1512 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make_1d";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ur8_5x = {{0}, SK_REAL64};
#define ur8_5 ur8_5x.it_r8
	EIF_TYPED_VALUE ur8_6x = {{0}, SK_REAL64};
#define ur8_6 ur8_6x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg4);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 4, 1447);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(82, Current, 1447);
	RTCC(arg4, 82, l_feature_name, 4, eif_new_type(20, 0x05), 0x05);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg = uarg4;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg4);
		RTS_RW (Current);
	}
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	ur8_1 = arg2;
	ur8_2 = arg3;
	ur8_3 = (EIF_REAL_64) 0.0;
	ur8_4 = (EIF_REAL_64) 0.0;
	ur8_5 = (EIF_REAL_64) 0.0;
	ur8_6 = (EIF_REAL_64) 0.0;
	ur1 = RTCCL(arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1283, Dtype(Current)))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x, ur8_6x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ur8_6
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GRID_GRAPH}.count_x */
EIF_TYPED_VALUE F83_1513 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1286,Dtype(Current)));
	return r;
}


/* {GRID_GRAPH}.count_y */
EIF_TYPED_VALUE F83_1514 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1287,Dtype(Current)));
	return r;
}


/* {GRID_GRAPH}.count_z */
EIF_TYPED_VALUE F83_1515 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1288,Dtype(Current)));
	return r;
}


/* {GRID_GRAPH}.node_at */
EIF_TYPED_VALUE F83_1516 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "node_at";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 3, 1451);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1451);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1290, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000EF, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", Result))(Result, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ui4_1 = arg2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,3);
	ui4_1 = arg3;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {GRID_GRAPH}.is_valid_index */
EIF_TYPED_VALUE F83_1517 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_valid_index";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 3, 1452);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1452);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1286, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1287, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1288, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)) && (EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (arg2 <= ti4_2)) && (EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (arg3 <= ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {GRID_GRAPH}.add_obstacle_by_index */
void F83_1518 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_obstacle_by_index";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 3, 1453);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1453);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1290, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1292, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ui4_1 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,3);
	ui4_1 = arg3;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1298, "disconnect_all_neighbours", tr2))(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {GRID_GRAPH}.grid */
EIF_TYPED_VALUE F83_1519 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1292,Dtype(Current)));
	return r;
}


void EIF_Minit83 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
