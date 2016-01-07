/*
 * Code for class EIGHT_CONNECTIVITY_STRATEGY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F951_7800(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit951(void);

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

/* {EIGHT_CONNECTIVITY_STRATEGY}.connect */
void F951_7800 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "connect";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 950, Current, 3, 1, 13415);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(950, Current, 13415);
	RTCC(arg1, 950, l_feature_name, 1, eif_new_type(82, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	if (
		WDBG(950, (char *) 0)
	) {
		RTHOOK(1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tr2 = RTMS_EX_H("Using 8 connect... \012",20,89297930);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(432, "putstring", tr1))(tr1, ur1x);
	}
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(1286, "count_x", arg1, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1286, "count_x", arg1))(arg1)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(1287, "count_y", arg1, tp1, ui4_1x);
				ti4_2 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1287, "count_y", arg1))(arg1)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(6);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(7);
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(1288, "count_z", arg1, tp1, ui4_1x);
					ti4_3 = (ui4_1x.it_i4);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1288, "count_z", arg1))(arg1)).it_i4);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if ((EIF_BOOLEAN) (loc3 > ti4_3)) break;
				RTHOOK(8);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = loc2;
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(9);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(10);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = loc2;
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(11);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(12);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(13);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(14);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(15);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(16);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = loc2;
				ui4_6 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(17);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = loc2;
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(18);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(19);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = loc2;
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(20);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(21);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(22);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(23);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(24);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(25);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = loc2;
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(26);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(27);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = loc2;
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(28);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(29);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(30);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(31);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(32);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				ui4_5 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(33);
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = loc3;
				ui4_4 = loc1;
				ui4_5 = loc2;
				ui4_6 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(401, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
				RTHOOK(34);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
			RTHOOK(35);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(36);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg1
}

void EIF_Minit951 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
