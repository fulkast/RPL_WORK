/*
 * Code for class WANDER_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F77_1350(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F77_1351(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F77_1352(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F77_1353(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F77_1354(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit77(void);

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

/* {WANDER_CONTROLLER}.make */
void F77_1350 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 76, Current, 0, 1, 1418);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(76, Current, 1418);
	RTCC(arg1, 76, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 1174, 0xF8000026, 0); /* stop_signaler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1174, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WANDER_CONTROLLER}.go */
void F77_1351 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "go";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
#define arg5 arg5x.it_r
	EIF_BOOLEAN uarg5;
#define arg6 arg6x.it_r
	EIF_BOOLEAN uarg6;
#define arg7 arg7x.it_r
	EIF_BOOLEAN uarg7;
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,ur1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 76, Current, 0, 7, 1419);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(76, Current, 1419);
	RTCC(arg1, 76, l_feature_name, 1, eif_new_type(35, 0x05), 0x05);
	RTCC(arg2, 76, l_feature_name, 2, eif_new_type(78, 0x05), 0x05);
	RTCC(arg3, 76, l_feature_name, 3, eif_new_type(95, 0x05), 0x05);
	RTCC(arg4, 76, l_feature_name, 4, eif_new_type(22, 0x05), 0x05);
	RTCC(arg5, 76, l_feature_name, 5, eif_new_type(38, 0x05), 0x05);
	RTCC(arg6, 76, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	RTCC(arg7, 76, l_feature_name, 7, eif_new_type(179, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg7);
			RTS_RS (Current, arg6);
			RTS_RS (Current, arg5);
			RTS_RS (Current, arg4);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\01';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(1270, "is_moving", arg2, tp1, ub1x);
			tb6 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "is_moving", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (!(EIF_BOOLEAN) !tb6) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(1271, "is_twisting", arg2, tp1, ub1x);
				tb6 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1271, "is_twisting", arg2))(arg2)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb5 = tb6;
		}
		if (tb5) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(477, "is_lifted", arg4, tp1, ub1x);
				tb5 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(477, "is_lifted", arg4))(arg4)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1414, "is_obstacle", arg3, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1414, "is_obstacle", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(764, "is_go_pending", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(764, "is_go_pending", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (!(tb2)) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CF(783, "is_stop_requested", arg5, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg5))(arg5)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = tb2;
		}
		has_wait_condition = uarg2 || uarg4 || uarg3 || uarg1 || uarg5;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(783, "is_stop_requested", arg5, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg5))(arg5)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CP(1949, "stop", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg6))(arg6);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(771, "clear_all_pendings", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(771, "clear_all_pendings", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(768, "set_is_go_pending", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(768, "set_is_go_pending", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(6);
		ur8_1 = (EIF_REAL_64) 0.03;
		ur8_2 = (EIF_REAL_64) 0.0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (2, arg6, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg6))(arg6, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = RTMS_EX_H("Current state: GO\012",18,317387018);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WANDER_CONTROLLER}.stop_when_obstacle_huge */
void F77_1352 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "stop_when_obstacle_huge";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
#define arg5 arg5x.it_r
	EIF_BOOLEAN uarg5;
#define arg6 arg6x.it_r
	EIF_BOOLEAN uarg6;
#define arg7 arg7x.it_r
	EIF_BOOLEAN uarg7;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,ur1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 76, Current, 0, 7, 1420);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(76, Current, 1420);
	RTCC(arg1, 76, l_feature_name, 1, eif_new_type(35, 0x05), 0x05);
	RTCC(arg2, 76, l_feature_name, 2, eif_new_type(78, 0x05), 0x05);
	RTCC(arg3, 76, l_feature_name, 3, eif_new_type(95, 0x05), 0x05);
	RTCC(arg4, 76, l_feature_name, 4, eif_new_type(22, 0x05), 0x05);
	RTCC(arg5, 76, l_feature_name, 5, eif_new_type(38, 0x05), 0x05);
	RTCC(arg6, 76, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	RTCC(arg7, 76, l_feature_name, 7, eif_new_type(179, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg7);
			RTS_RS (Current, arg6);
			RTS_RS (Current, arg5);
			RTS_RS (Current, arg4);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(1270, "is_moving", arg2, tp1, ub1x);
			tb5 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "is_moving", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb5) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1420, "is_obstacle_huge", arg3, tp1, ub1x);
				tb5 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1420, "is_obstacle_huge", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb4 = tb5;
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(477, "is_lifted", arg4, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(477, "is_lifted", arg4))(arg4)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(766, "is_huge_pending", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(766, "is_huge_pending", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (!(tb2)) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CF(783, "is_stop_requested", arg5, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg5))(arg5)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = tb2;
		}
		has_wait_condition = uarg2 || uarg3 || uarg4 || uarg1 || uarg5;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(783, "is_stop_requested", arg5, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg5))(arg5)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CP(1949, "stop", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg6))(arg6);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(4);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1416, "is_obstacle_in_front", arg3, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1416, "is_obstacle_in_front", arg3))(arg3)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(1268, "vx", arg2, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1268, "vx", arg2))(arg2)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) (tr8_1 > (EIF_REAL_64) 0.0);
		}
		if (!(tb2)) {
			tb2 = '\0';
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1417, "is_obstacle_at_back", arg3, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1417, "is_obstacle_at_back", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (tb3) {
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
					RTS_AC (0, arg2, tp1);
					RTS_CF(1268, "vx", arg2, tp1, ur8_1x);
					tr8_1 = (ur8_1x.it_r8);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg2));
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1268, "vx", arg2))(arg2)).it_r8);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				tb2 = (EIF_BOOLEAN) (tr8_1 < (EIF_REAL_64) 0.0);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(771, "clear_all_pendings", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(771, "clear_all_pendings", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(6);
			ub1 = (EIF_BOOLEAN) 1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (1, arg1, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(770, "set_is_huge_pending", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(770, "set_is_huge_pending", arg1))(arg1, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(7);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (0, arg6, tp1);
				RTS_CP(1949, "stop", arg6, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg6))(arg6);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(8);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CP(1952, "stop_sound", arg7, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1952, "stop_sound", arg7))(arg7);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(9);
			ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 3L);
			ui2_1 = ti2_1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (1, arg7, tp1);
				RTS_AA (ui2_1x, it_i2, SK_INT16, 1, tp1);
				RTS_CP(1951, "start_system_sound", arg7, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1951, "start_system_sound", arg7))(arg7, ui2_1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tr2 = RTMS_EX_H("Current state: HUGE\012",20,2038357514);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ui2_1
#undef ub1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WANDER_CONTROLLER}.turn_when_obstacle_aside */
void F77_1353 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "turn_when_obstacle_aside";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
#define arg5 arg5x.it_r
	EIF_BOOLEAN uarg5;
#define arg6 arg6x.it_r
	EIF_BOOLEAN uarg6;
#define arg7 arg7x.it_r
	EIF_BOOLEAN uarg7;
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,ur1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 76, Current, 2, 7, 1421);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(76, Current, 1421);
	RTCC(arg1, 76, l_feature_name, 1, eif_new_type(35, 0x05), 0x05);
	RTCC(arg2, 76, l_feature_name, 2, eif_new_type(78, 0x05), 0x05);
	RTCC(arg3, 76, l_feature_name, 3, eif_new_type(95, 0x05), 0x05);
	RTCC(arg4, 76, l_feature_name, 4, eif_new_type(22, 0x05), 0x05);
	RTCC(arg5, 76, l_feature_name, 5, eif_new_type(38, 0x05), 0x05);
	RTCC(arg6, 76, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	RTCC(arg7, 76, l_feature_name, 7, eif_new_type(179, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg7);
			RTS_RS (Current, arg6);
			RTS_RS (Current, arg5);
			RTS_RS (Current, arg4);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (0, arg4, tp1);
			RTS_CF(477, "is_lifted", arg4, tp1, ub1x);
			tb5 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(477, "is_lifted", arg4))(arg4)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) !tb5) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1414, "is_obstacle", arg3, tp1, ub1x);
				tb5 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1414, "is_obstacle", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb4 = tb5;
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(765, "is_turn_pending", arg1, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(765, "is_turn_pending", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1420, "is_obstacle_huge", arg3, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1420, "is_obstacle_huge", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (!(tb2)) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CF(783, "is_stop_requested", arg5, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg5))(arg5)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = tb2;
		}
		has_wait_condition = uarg4 || uarg3 || uarg1 || uarg5;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(783, "is_stop_requested", arg5, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg5))(arg5)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CP(1949, "stop", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg6))(arg6);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1416, "is_obstacle_in_front", arg3, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1416, "is_obstacle_in_front", arg3))(arg3)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(5);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1418, "is_obstacle_mostly_at_left", arg3, tp1, ub1x);
				tb1 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1418, "is_obstacle_mostly_at_left", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(7);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(8);
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
					RTS_AC (0, arg3, tp1);
					RTS_CF(1419, "is_obstacle_mostly_at_right", arg3, tp1, ub1x);
					tb1 = (ub1x.it_b);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg3));
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1419, "is_obstacle_mostly_at_right", arg3))(arg3)).it_b);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(10);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		} else {
			RTHOOK(11);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1417, "is_obstacle_at_back", arg3, tp1, ub1x);
				tb1 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1417, "is_obstacle_at_back", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (tb1) {
				RTHOOK(12);
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
					RTS_AC (0, arg3, tp1);
					RTS_CF(1418, "is_obstacle_mostly_at_left", arg3, tp1, ub1x);
					tb1 = (ub1x.it_b);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg3));
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1418, "is_obstacle_mostly_at_left", arg3))(arg3)).it_b);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if (tb1) {
					RTHOOK(13);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(14);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(15);
					if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
						RTS_AC (0, arg3, tp1);
						RTS_CF(1419, "is_obstacle_mostly_at_right", arg3, tp1, ub1x);
						tb1 = (ub1x.it_b);
					} else {
						RTS_IMPERSONATE (RTS_PID(arg3));
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1419, "is_obstacle_mostly_at_right", arg3))(arg3)).it_b);
						RTS_IMPERSONATE (RTS_PID(Current));
					}
					if (tb1) {
						RTHOOK(16);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(17);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
		RTHOOK(18);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(771, "clear_all_pendings", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(771, "clear_all_pendings", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(19);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(769, "set_is_turn_pending", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(769, "set_is_turn_pending", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(20);
		tr8_1 = (EIF_REAL_64) (loc1);
		ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) 0.0 * tr8_1);
		tr8_2 = (EIF_REAL_64) (loc2);
		ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) 0.5 * tr8_2);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (2, arg6, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg6))(arg6, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(21);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(21,1);
		tr2 = RTMS_EX_H("Current state: TURN\012",20,2039172874);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WANDER_CONTROLLER}.stop_when_lifted */
void F77_1354 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "stop_when_lifted";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
#define arg5 arg5x.it_r
	EIF_BOOLEAN uarg5;
#define arg6 arg6x.it_r
	EIF_BOOLEAN uarg6;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,tr1);
	RTLR(8,tr2);
	RTLR(9,ur1);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 76, Current, 0, 6, 1422);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(76, Current, 1422);
	RTCC(arg1, 76, l_feature_name, 1, eif_new_type(35, 0x05), 0x05);
	RTCC(arg2, 76, l_feature_name, 2, eif_new_type(78, 0x05), 0x05);
	RTCC(arg3, 76, l_feature_name, 3, eif_new_type(22, 0x05), 0x05);
	RTCC(arg4, 76, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 76, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 76, l_feature_name, 6, eif_new_type(179, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg6);
			RTS_RS (Current, arg5);
			RTS_RS (Current, arg4);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(1270, "is_moving", arg2, tp1, ub1x);
			tb4 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "is_moving", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(477, "is_lifted", arg3, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(477, "is_lifted", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(763, "is_lifted_pending", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(763, "is_lifted_pending", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (!(tb2)) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(783, "is_stop_requested", arg4, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg4))(arg4)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = tb2;
		}
		has_wait_condition = uarg2 || uarg3 || uarg1 || uarg4;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (0, arg4, tp1);
		RTS_CF(783, "is_stop_requested", arg4, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg4))(arg4)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(771, "clear_all_pendings", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(771, "clear_all_pendings", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(767, "set_is_lifted_pending", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(767, "set_is_lifted_pending", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(7);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CP(1952, "stop_sound", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1952, "stop_sound", arg6))(arg6);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(8);
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 5L);
		ui2_1 = ti2_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (1, arg6, tp1);
			RTS_AA (ui2_1x, it_i2, SK_INT16, 1, tp1);
			RTS_CP(1951, "start_system_sound", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1951, "start_system_sound", arg6))(arg6, ui2_1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tr2 = RTMS_EX_H("Current state: LIFTED\012",22,1914308618);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui2_1
#undef ub1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit77 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
