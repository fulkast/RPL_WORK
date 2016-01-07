/*
 * Code for class MOVING_TO_GOAL_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F962_7888(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7889(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7890(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7891(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7892(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7893(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7894(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7895(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F962_7896(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F962_7897(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F962_7898(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_7899(EIF_REFERENCE);
extern void EIF_Minit962(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MOVING_TO_GOAL_CONTROLLER}.make */
void F962_7888 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 961, Current, 2, 2, 13502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13502);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(966, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg = uarg1 || uarg2;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1174, 0xF8000026, 0); /* stop_signaler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1174, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5604, 0xF80003A1, 0); /* pid_controller */
	tr1 = RTLNSMART(RTWCT(5604, dtype, Dftype(Current)).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5639, "k_p_go", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5639, "k_p_go", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5640, "k_i_go", arg2, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5640, "k_i_go", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5641, "k_d_go", arg2, tp1, ur8_3x);
		tr8_3 = (ur8_3x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5641, "k_d_go", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5380, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5604, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5605, 0xF80003A1, 0); /* pid_controller_vleave */
	tr1 = RTLNSMART(RTWCT(5605, dtype, Dftype(Current)).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5642, "k_p_vleave", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5642, "k_p_vleave", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5643, "k_i_vleave", arg2, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5643, "k_i_vleave", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5644, "k_d_vleave", arg2, tp1, ur8_3x);
		tr8_3 = (ur8_3x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5644, "k_d_vleave", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5380, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5605, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(6);
	RTEE;
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.localize */
void F962_7889 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "localize";
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
#define arg9 arg9x.it_r
	EIF_BOOLEAN uarg9;
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,arg9);
	RTLR(10,arg10);
	RTLR(11,tr1);
	RTLR(12,tr2);
	RTLR(13,ur1);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_REF,&arg10);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 10, 13503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13503);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(953, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(968, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,341,0xFF01,944,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 961, l_feature_name, 8, typres0, 0x05);
	}
	RTCC(arg9, 961, l_feature_name, 9, eif_new_type(936, 0x05), 0x05);
	RTCC(arg10, 961, l_feature_name, 10, eif_new_type(942, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg9 = (EIF_BOOLEAN) RTS_OU (Current, arg9);
	uarg10 = (EIF_BOOLEAN) RTS_OU (Current, arg10);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8 || uarg9 || uarg10;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg10);
			RTS_RS (Current, arg9);
			RTS_RS (Current, arg8);
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5425, "is_localizing", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5425, "is_localizing", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (!tb2) {
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
		has_wait_condition = uarg1 || uarg4;
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg9)) && !(EIF_IS_PASSIVE (arg9))) {
			RTS_AC (0, arg9, tp1);
			RTS_CF(5450, "data", arg9, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg9));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5450, "data", arg9))(arg9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(4,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(5482, "data", tr1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5482, "data", tr1))(tr1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = RTMS_EX_H("Thinks it is localized",22,304797284);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(432, "putstring", tr1))(tr1, ur1x);
			RTHOOK(6);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg10)) && !(EIF_IS_PASSIVE (arg10))) {
				RTS_AC (0, arg10, tp1);
				RTS_CF(5478, "data", arg10, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg10));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5478, "data", arg10))(arg10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr1);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (1, arg2, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(5570, "set_localized_time_absolute_pose", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "set_localized_time_absolute_pose", arg2))(arg2, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(7);
			tr1 = RTLN(eif_new_type(57, 0x01).id);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1263, "x", arg3, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_1 = tr8_1;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1264, "y", arg3, tp1, ur8_2x);
				tr8_2 = (ur8_2x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_2 = tr8_2;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1267, "theta", arg3, tp1, ur8_3x);
				tr8_3 = (ur8_3x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg3))(arg3)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_3 = tr8_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(931, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
			RTNHOOK(7,1);
			ur1 = RTCCL(tr1);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (1, arg2, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(5569, "set_localized_time_relative_pose", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5569, "set_localized_time_relative_pose", arg2))(arg2, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(8);
			tr1 = RTLN(eif_new_type(944, 0x01).id);
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5481, Dtype(tr1)))(tr1, ub1x);
			RTNHOOK(8,1);
			ur1 = RTCCL(tr1);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
				RTS_AC (1, arg8, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1331, "publish", arg8, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg8));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1331, "publish", arg8))(arg8, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(9);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5428, "set_is_go", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5428, "set_is_go", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		} else {
			RTHOOK(10);
			tr1 = RTLN(eif_new_type(944, 0x01).id);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5481, Dtype(tr1)))(tr1, ub1x);
			RTNHOOK(10,1);
			ur1 = RTCCL(tr1);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
				RTS_AC (1, arg8, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1331, "publish", arg8, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg8));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1331, "publish", arg8))(arg8, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(11);
			ur8_1 = (EIF_REAL_64) 0.0;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5672, "localize_vtheta", arg7, tp1, ur8_2x);
				tr8_1 = (ur8_2x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5672, "localize_vtheta", arg7))(arg7)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_2 = tr8_1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (2, arg5, tp1);
				RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
				RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
				RTS_CP(1948, "set_velocity", arg5, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg5))(arg5, ur8_1x, ur8_2x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ub1
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

/* {MOVING_TO_GOAL_CONTROLLER}.go */
void F962_7890 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "go";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,loc4);
	RTLR(10,tr1);
	RTLR(11,tr2);
	RTLR(12,ur1);
	RTLR(13,loc3);
	RTLR(14,ur2);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REAL64, &loc5);
	
	RTEAA(l_feature_name, 961, Current, 5, 8, 13504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13504);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(953, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(946, 0x05), 0x05);
	RTCC(arg8, 961, l_feature_name, 8, eif_new_type(968, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg8);
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5421, "is_go", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5421, "is_go", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (!tb2) {
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
		has_wait_condition = uarg1 || uarg4;
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
	RTDBGAL(Current, 4, 0xF8000035, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1263, "x", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1264, "y", arg3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (2, arg2, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2))(arg2, ur8_1x, ur8_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1267, "theta", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2))(arg2, ur8_1x)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
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
		RTHOOK(5);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5557, "need_to_reset_cur_goal", arg2, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5557, "need_to_reset_cur_goal", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(7);
			ur1 = RTCCL(loc4);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (1, arg6, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(5530, "jump_to_next_closest_goal", arg6, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5530, "jump_to_next_closest_goal", arg6))(arg6, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(8);
			ub1 = (EIF_BOOLEAN) 0;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (1, arg2, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5565, "set_need_to_reset_cur_goal", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5565, "set_need_to_reset_cur_goal", arg2))(arg2, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(9);
		RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(53, 0x01).id);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CF(5526, "get_cur_goal", arg6, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5526, "get_cur_goal", arg6))(arg6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc4);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1940, dtype))(Current, ur1x, ur2x)).it_r8);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5680, "move_to_next_goal_threshold", arg8, tp1, ur8_1x);
			tr8_2 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5680, "move_to_next_goal_threshold", arg8))(arg8)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
			RTHOOK(11);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (0, arg6, tp1);
				RTS_CP(5531, "move_to_next_goal", arg6, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5531, "move_to_next_goal", arg6))(arg6);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(12);
			RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(53, 0x01).id);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (0, arg6, tp1);
				RTS_CF(5526, "get_cur_goal", arg6, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5526, "get_cur_goal", arg6))(arg6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5604, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5383, "reset", tr1))(tr1);
		}
		if (
			WDBG(961,"pub_cur_goal_point")
		) {
			RTHOOK(14);
			ur1 = RTCCL(loc3);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (1, arg7, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(5487, "update_msg", arg7, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5487, "update_msg", arg7))(arg7, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(15);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CP(5488, "publish", arg7, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5488, "publish", arg7))(arg7);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(16);
		RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
		tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(898, "x", loc4));
		ur8_1 = tr8_1;
		tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(899, "y", loc4));
		ur8_2 = tr8_2;
		ur8_3 = loc5;
		tr8_3 = *(EIF_REAL_64 *)(loc3 + RTVA(898, "x", loc3));
		ur8_4 = tr8_3;
		tr8_4 = *(EIF_REAL_64 *)(loc3 + RTVA(899, "y", loc3));
		ur8_5 = tr8_4;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5603, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x)).it_r8);
		RTHOOK(17);
		RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5604, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ur8_1 = loc2;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1266, "timestamp", arg3, tp1, ur8_2x);
			tr8_1 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1266, "timestamp", arg3))(arg3)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5381, "get_control_output", tr1))(tr1, ur8_1x, ur8_2x)).it_r8);
		loc1 = (EIF_REAL_64) tr8_1;
		RTHOOK(18);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5428, "set_is_go", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5428, "set_is_go", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(19);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5669, "go_vx", arg8, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5669, "go_vx", arg8))(arg8)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ur8_2 = loc1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (2, arg5, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg5))(arg5, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	if (
		WDBG(961,"state")
	) {
		RTHOOK(20);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		tr2 = RTMS_EX_H("Current state: GO\012",18,317387018);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.follow_wall */
void F962_7891 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "follow_wall";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
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
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,ur1);
	RTLR(10,tr1);
	RTLR(11,tr2);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	
	RTEAA(l_feature_name, 961, Current, 1, 8, 13505);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13505);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(938, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(956, 0x05), 0x05);
	RTCC(arg8, 961, l_feature_name, 8, eif_new_type(968, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg8);
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
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5421, "is_go", arg1, tp1, ub1x);
			tb4 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5421, "is_go", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (0, arg6, tp1);
				RTS_CF(5460, "is_obstacle", arg6, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5460, "is_obstacle", arg6))(arg6)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = tb4;
		}
		if (!(tb3)) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5422, "is_wall_following", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5422, "is_wall_following", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = tb3;
		}
		if (!tb2) {
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
		has_wait_condition = uarg1 || uarg6 || uarg4;
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
		RTS_AC (0, arg6, tp1);
		RTS_CF(5460, "is_obstacle", arg6, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg6));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5460, "is_obstacle", arg6))(arg6)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ub1 = tb1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1266, "timestamp", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1266, "timestamp", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (2, arg2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
		RTS_CP(5567, "set_timestamp_obstacle_last_seen", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5567, "set_timestamp_obstacle_last_seen", arg2))(arg2, ub1x, ur8_1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(3);
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
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
		ur1 = RTCCL(arg6);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5673, "desired_wall_distance", arg8, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5673, "desired_wall_distance", arg8))(arg8)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1266, "timestamp", arg3, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1266, "timestamp", arg3))(arg3)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5559, "timestamp_obstacle_last_seen", arg2, tp1, ur8_3x);
			tr8_3 = (ur8_3x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5559, "timestamp_obstacle_last_seen", arg2))(arg2)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_3 = tr8_3;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5670, "follow_wall_vx", arg8, tp1, ur8_4x);
			tr8_4 = (ur8_4x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5670, "follow_wall_vx", arg8))(arg8)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_4 = tr8_4;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (5, arg7, tp1);
			RTS_AA (ur8_4x, it_r8, SK_REAL64, 5, tp1);
			RTS_AA (ur8_3x, it_r8, SK_REAL64, 4, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 3, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 2, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CF(5579, "follow_wall_orientation", arg7, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5579, "follow_wall_orientation", arg7))(arg7, ur1x, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc1 = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5429, "set_is_wall_following", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5429, "set_is_wall_following", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(7);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5670, "follow_wall_vx", arg8, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5670, "follow_wall_vx", arg8))(arg8)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ur8_2 = loc1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (2, arg5, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg5))(arg5, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (
			WDBG(961,"state")
		) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr2 = RTMS_EX_H("Current state: FOLLOW WALL\012",27,99131146);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
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
#undef ur8_3
#undef ur8_4
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.look_for_vleave */
void F962_7892 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "look_for_vleave";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
#define arg9 arg9x.it_r
	EIF_BOOLEAN uarg9;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(20);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,arg9);
	RTLR(10,loc1);
	RTLR(11,tr1);
	RTLR(12,tr2);
	RTLR(13,ur1);
	RTLR(14,loc2);
	RTLR(15,loc6);
	RTLR(16,ur2);
	RTLR(17,loc3);
	RTLR(18,tr3);
	RTLR(19,loc4);
	RTLIU(20);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 961, Current, 10, 9, 13506);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13506);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(938, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(956, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(946, 0x05), 0x05);
	RTCC(arg8, 961, l_feature_name, 8, eif_new_type(953, 0x05), 0x05);
	RTCC(arg9, 961, l_feature_name, 9, eif_new_type(968, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg9 = (EIF_BOOLEAN) RTS_OU (Current, arg9);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8 || uarg9;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg9);
			RTS_RS (Current, arg8);
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
		tb1 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5422, "is_wall_following", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5422, "is_wall_following", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(783, "is_stop_requested", arg4, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg4))(arg4)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg1 || uarg4;
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
	RTDBGAL(Current, 8, 0x20000000, 1, 0); /* loc8 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4407, 258))(Current)).it_r8);
	loc8 = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
		RTS_AC (0, arg8, tp1);
		RTS_CF(5524, "get_final_goal", arg8, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg8));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5524, "get_final_goal", arg8))(arg8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF8000035, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1263, "x", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1264, "y", arg3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (2, arg2, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2))(arg2, ur8_1x, ur8_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1267, "theta", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2))(arg2, ur8_1x)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAL(Current, 6, 0xF8000035, 0, 0); /* loc6 */
	tr1 = RTLN(eif_new_type(53, 0x05).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(806, Dtype(tr1), tp1);
	RTNHOOK(6,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 7, 0x20000000, 1, 0); /* loc7 */
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1940, dtype))(Current, ur1x, ur2x)).it_r8);
	RTHOOK(8);
	RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(5459, "sensors", arg5, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(8,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(3908, "lower", tr1, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3908, "lower", tr1))(tr1)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc10 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(9);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CF(5574, "number_of_front_sensors", arg6, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5574, "number_of_front_sensors", arg6))(arg6)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (loc10 > ti4_1)) break;
		RTHOOK(10);
		ui4_1 = loc10;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (1, arg5, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(5462, "is_enough_space_for_moving_to_the_max_range", arg5, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5462, "is_enough_space_for_moving_to_the_max_range", arg5))(arg5, ui4_1x)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(11);
			RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(53, 0x01).id);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CF(5459, "sensors", arg5, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ui4_1 = loc10;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
				RTS_AC (1, tr2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(2182, "i_th", tr2, tp1, up1x);
				tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr2));
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
				RTS_AC (0, tr3, tp1);
				RTS_CF(1027, "max_range", tr3, tp1, ur4_1x);
				tr4_1 = (ur4_1x.it_r4);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr3));
				tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1027, "max_range", tr3))(tr3)).it_r4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tr8_1 = (EIF_REAL_64) (tr4_1);
			ur8_1 = tr8_1;
			ui4_1 = loc10;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (2, arg6, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
				RTS_CF(5578, "get_relative_coordinates_with_sensor", arg6, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5578, "get_relative_coordinates_with_sensor", arg6))(arg6, ur8_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(11,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			RTDBGAL(Current, 4, 0xF8000035, 0, 0); /* loc4 */
			ur1 = RTCCL(loc2);
			ur2 = RTCCL(loc3);
			ur8_1 = loc5;
			loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5547, dtype))(Current, ur1x, ur2x, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(13);
			RTDBGAL(Current, 9, 0x20000000, 1, 0); /* loc9 */
			ur1 = RTCCL(loc1);
			ur2 = RTCCL(loc4);
			loc9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1940, dtype))(Current, ur1x, ur2x)).it_r8);
			RTHOOK(14);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc9 < loc8)) {
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
					RTS_AC (0, arg2, tp1);
					RTS_CF(5558, "d_min", arg2, tp1, ur8_1x);
					tr8_1 = (ur8_1x.it_r8);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg2));
					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5558, "d_min", arg2))(arg2)).it_r8);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				tb1 = (EIF_BOOLEAN) (loc9 < tr8_1);
			}
			if (tb1) {
				RTHOOK(15);
				ur8_1 = loc9;
				if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
					RTS_AC (1, arg2, tp1);
					RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
					RTS_CP(5566, "set_d_min", arg2, tp1);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg2));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5566, "set_d_min", arg2))(arg2, ur8_1x);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				RTHOOK(16);
				RTDBGAL(Current, 8, 0x20000000, 1, 0); /* loc8 */
				loc8 = (EIF_REAL_64) loc9;
				RTHOOK(17);
				RTDBGAL(Current, 6, 0xF8000035, 0, 0); /* loc6 */
				loc6 = (EIF_REFERENCE) RTCCL(loc4);
			}
		}
		RTHOOK(18);
		RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
		loc10++;
	}
	RTHOOK(19);
	tb1 = eif_is_positive_infinity_real_64 (loc8);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(20);
		ur1 = RTCCL(loc6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5568, "set_v_leave", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5568, "set_v_leave", arg2))(arg2, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(21);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5564, "set_is_v_leave_found", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5564, "set_is_v_leave_found", arg2))(arg2, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	if (
		WDBG(961,"pub_look_for_v_leave")
	) {
		RTHOOK(22);
		tr1 = RTLN(eif_new_type(48, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(849, Dtype(tr1)))(tr1);
		RTNHOOK(22,1);
		ur1 = RTCCL(tr1);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (1, arg7, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5493, "set_color", arg7, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5493, "set_color", arg7))(arg7, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(23);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg9)) && !(EIF_IS_PASSIVE (arg9))) {
			RTS_AC (0, arg9, tp1);
			RTS_CF(5682, "search_vleave_pub_duration", arg9, tp1, ui8_1x);
			ti8_1 = (ui8_1x.it_i8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg9));
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5682, "search_vleave_pub_duration", arg9))(arg9)).it_i8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_1 = (EIF_REAL_64) (ti8_1);
		ur8_1 = tr8_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (1, arg7, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(5494, "set_duration", arg7, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5494, "set_duration", arg7))(arg7, ur8_1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(24);
		ur1 = RTCCL(loc6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (1, arg7, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5487, "update_msg", arg7, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5487, "update_msg", arg7))(arg7, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(25);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CP(5488, "publish", arg7, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5488, "publish", arg7))(arg7);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	if (
		WDBG(961,"state")
	) {
		RTHOOK(26);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(26,1);
		tr2 = RTMS_EX_H("Current state: LOOK FOR VLEAVE\012",31,198047754);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(21);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ui8_1
#undef ur4_1
#undef ui4_1
#undef ub1
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

/* {MOVING_TO_GOAL_CONTROLLER}.transit_to_vleave */
void F962_7893 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "transit_to_vleave";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,loc3);
	RTLR(10,tr1);
	RTLR(11,tr2);
	RTLR(12,ur1);
	RTLR(13,loc4);
	RTLR(14,ur2);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REAL64, &loc5);
	
	RTEAA(l_feature_name, 961, Current, 5, 8, 13507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13507);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(946, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(953, 0x05), 0x05);
	RTCC(arg8, 961, l_feature_name, 8, eif_new_type(968, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg8);
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
		tb2 = '\01';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5556, "is_v_leave_found", arg2, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5556, "is_v_leave_found", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (!tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5423, "is_transiting", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5423, "is_transiting", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = tb3;
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
		has_wait_condition = uarg2 || uarg1 || uarg4;
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
	RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5560, "v_leave", arg2, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5560, "v_leave", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF8000035, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1263, "x", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1264, "y", arg3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (2, arg2, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2))(arg2, ur8_1x, ur8_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1267, "theta", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2))(arg2, ur8_1x)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
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
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(7);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc4);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1940, dtype))(Current, ur1x, ur2x)).it_r8);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5676, "vleave_reached_distance_threshold", arg8, tp1, ur8_1x);
			tr8_2 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5676, "vleave_reached_distance_threshold", arg8))(arg8)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
			RTHOOK(8);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5428, "set_is_go", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5428, "set_is_go", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(9);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CP(5531, "move_to_next_goal", arg7, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5531, "move_to_next_goal", arg7))(arg7);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(10);
			ub1 = (EIF_BOOLEAN) 0;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (1, arg2, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5564, "set_is_v_leave_found", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5564, "set_is_v_leave_found", arg2))(arg2, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(11);
			ub1 = (EIF_BOOLEAN) 1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (1, arg2, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5565, "set_need_to_reset_cur_goal", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5565, "set_need_to_reset_cur_goal", arg2))(arg2, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		} else {
			RTHOOK(12);
			RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
			tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(898, "x", loc4));
			ur8_1 = tr8_1;
			tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(899, "y", loc4));
			ur8_2 = tr8_2;
			ur8_3 = loc5;
			tr8_3 = *(EIF_REAL_64 *)(loc3 + RTVA(898, "x", loc3));
			ur8_4 = tr8_3;
			tr8_4 = *(EIF_REAL_64 *)(loc3 + RTVA(899, "y", loc3));
			ur8_5 = tr8_4;
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5603, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x)).it_r8);
			RTHOOK(13);
			RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5605, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ur8_1 = loc1;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1266, "timestamp", arg3, tp1, ur8_2x);
				tr8_1 = (ur8_2x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1266, "timestamp", arg3))(arg3)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_2 = tr8_1;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5381, "get_control_output", tr1))(tr1, ur8_1x, ur8_2x)).it_r8);
			loc2 = (EIF_REAL_64) tr8_1;
			RTHOOK(14);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5430, "set_is_transiting", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5430, "set_is_transiting", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(15);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
				RTS_AC (0, arg8, tp1);
				RTS_CF(5671, "transit_vx", arg8, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg8));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5671, "transit_vx", arg8))(arg8)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_1 = tr8_1;
			ur8_2 = loc2;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (2, arg5, tp1);
				RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
				RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
				RTS_CP(1948, "set_velocity", arg5, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg5))(arg5, ur8_1x, ur8_2x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
	}
	if (
		WDBG(961,"publish_v_leave")
	) {
		RTHOOK(16);
		tr1 = RTLN(eif_new_type(48, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(853, Dtype(tr1)))(tr1);
		RTNHOOK(16,1);
		ur1 = RTCCL(tr1);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (1, arg6, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5493, "set_color", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5493, "set_color", arg6))(arg6, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(17);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
			RTS_AC (0, arg8, tp1);
			RTS_CF(5681, "vleave_pub_duration", arg8, tp1, ui8_1x);
			ti8_1 = (ui8_1x.it_i8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg8));
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5681, "vleave_pub_duration", arg8))(arg8)).it_i8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_1 = (EIF_REAL_64) (ti8_1);
		ur8_1 = tr8_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (1, arg6, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(5494, "set_duration", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5494, "set_duration", arg6))(arg6, ur8_1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(18);
		ur1 = RTCCL(loc3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (1, arg6, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5487, "update_msg", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5487, "update_msg", arg6))(arg6, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(19);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CP(5488, "publish", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5488, "publish", arg6))(arg6);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	if (
		WDBG(961,"state")
	) {
		RTHOOK(20);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		tr2 = RTMS_EX_H("Current state: TRANSIT\012",23,899693066);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ui8_1
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.wait_when_intermediate_goal_reached */
void F962_7894 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "wait_when_intermediate_goal_reached";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,loc1);
	RTLR(10,tr1);
	RTLR(11,tr2);
	RTLR(12,ur1);
	RTLR(13,loc2);
	RTLR(14,ur2);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REAL64, &loc3);
	
	RTEAA(l_feature_name, 961, Current, 3, 8, 13508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13508);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(968, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(953, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,341,0xFF01,944,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 961, l_feature_name, 8, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg8);
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5424, "is_waiting", arg1, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5424, "is_waiting", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) !tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5419, "is_goal_reached", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5419, "is_goal_reached", arg1))(arg1)).it_b);
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
		has_wait_condition = uarg1 || uarg4;
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
	RTDBGAL(Current, 1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1263, "x", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1264, "y", arg3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (2, arg2, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2))(arg2, ur8_1x, ur8_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF8000035, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5528, "get_cur_wait_point", arg7, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5528, "get_cur_wait_point", arg7))(arg7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
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
		RTHOOK(5);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(6);
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1940, dtype))(Current, ur1x, ur2x)).it_r8);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CF(5677, "wait_point_distance_threshold", arg6, tp1, ur8_1x);
			tr8_2 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5677, "wait_point_distance_threshold", arg6))(arg6)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
			RTHOOK(7);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5431, "set_is_waiting", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5431, "set_is_waiting", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(8);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CP(1949, "stop", arg5, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(9);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CP(5529, "move_to_next_wait_point", arg7, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5529, "move_to_next_wait_point", arg7))(arg7);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(10);
			tr1 = RTLN(eif_new_type(944, 0x01).id);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5481, Dtype(tr1)))(tr1, ub1x);
			RTNHOOK(10,1);
			ur1 = RTCCL(tr1);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
				RTS_AC (1, arg8, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1331, "publish", arg8, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg8));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1331, "publish", arg8))(arg8, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (
				WDBG(961,"state")
			) {
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,1);
				tr2 = RTMS_EX_H("Current state: WAIT\012",20,1703063306);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.continue_after_task_finished */
void F962_7895 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "continue_after_task_finished";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 4, 13509);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 13509);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(38, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(936, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,341,0xFF01,944,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 961, l_feature_name, 4, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg = uarg1 || uarg2 || uarg3 || uarg4;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg4);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\01';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5424, "is_waiting", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5424, "is_waiting", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (!tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(783, "is_stop_requested", arg2, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg2))(arg2)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = tb2;
		}
		has_wait_condition = uarg1 || uarg2;
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5450, "data", arg3, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5450, "data", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(2,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(5482, "data", tr1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5482, "data", tr1))(tr1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5428, "set_is_go", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5428, "set_is_go", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(4);
		tr1 = RTLN(eif_new_type(944, 0x01).id);
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5481, Dtype(tr1)))(tr1, ub1x);
		RTNHOOK(4,1);
		ur1 = RTCCL(tr1);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (1, arg4, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(1331, "publish", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1331, "publish", arg4))(arg4, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
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
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.stop_when_goal_reached */
void F962_7896 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "stop_when_goal_reached";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(19);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,loc2);
	RTLR(10,tr1);
	RTLR(11,tr2);
	RTLR(12,ur1);
	RTLR(13,loc3);
	RTLR(14,loc5);
	RTLR(15,loc4);
	RTLR(16,tr3);
	RTLR(17,ur2);
	RTLR(18,ur3);
	RTLIU(19);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 961, Current, 5, 8, 13510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13510);
	RTCC(arg1, 961, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 961, l_feature_name, 2, eif_new_type(955, 0x05), 0x05);
	RTCC(arg3, 961, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 961, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 961, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 961, l_feature_name, 6, eif_new_type(968, 0x05), 0x05);
	RTCC(arg7, 961, l_feature_name, 7, eif_new_type(953, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,341,0xFF01,59,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg8, 961, l_feature_name, 8, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg8);
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1270, "is_moving", arg3, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1270, "is_moving", arg3))(arg3)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (!tb2) {
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
		has_wait_condition = uarg3 || uarg4;
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
	RTDBGAL(Current, 2, 0xF8000035, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1263, "x", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1264, "y", arg3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (2, arg2, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5571, "convert_robot_frame_coord_to_absolute_coord", arg2))(arg2, ur8_1x, ur8_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5524, "get_final_goal", arg7, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5524, "get_final_goal", arg7))(arg7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1267, "theta", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5572, "convert_robot_frame_orientation_to_absolute_orientation", arg2))(arg2, ur8_1x)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAL(Current, 5, 0xF8000034, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(52, 0x01).id);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_3 = (EIF_REAL_64) ((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (tr8_3));
	tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_3x)).it_r8);
	ur8_3 = tr8_3;
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_4 = (EIF_REAL_64) ((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (tr8_4));
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_4x)).it_r8);
	ur8_4 = tr8_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(885, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x, ur8_4x);
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 4, 0xF800003B, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(59, 0x01).id);
	tr2 = RTLN(eif_new_type(51, 0x01).id);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5438, 934))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(877, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(6,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(45, 0x01).id);
	ur2 = RTCCL(loc2);
	ur3 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(829, Dtype(tr3)))(tr3, ur2x, ur3x);
	RTNHOOK(6,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(940, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,3);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc4);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg8)) && !(EIF_IS_PASSIVE (arg8))) {
		RTS_AC (1, arg8, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(1331, "publish", arg8, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg8));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1331, "publish", arg8))(arg8, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(8);
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
		RTHOOK(9);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(1949, "stop", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(10);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc2);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1940, dtype))(Current, ur1x, ur2x)).it_r8);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CF(5674, "goal_reached_distance_threshold", arg6, tp1, ur8_1x);
			tr8_2 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5674, "goal_reached_distance_threshold", arg6))(arg6)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
			RTHOOK(11);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5426, "set_is_goal_reached", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5426, "set_is_goal_reached", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(12);
			ub1 = (EIF_BOOLEAN) 1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (1, arg4, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(784, "set_stop_requested", arg4, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(784, "set_stop_requested", arg4))(arg4, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(13);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CP(1949, "stop", arg5, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg5))(arg5);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (
				WDBG(961,"state")
			) {
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				tr2 = RTMS_EX_H("Current state: STOP - GOAL REACHED\012",35,1969758218);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.get_heading_error */
EIF_TYPED_VALUE F962_7897 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "get_heading_error";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	
	RTEAA(l_feature_name, 961, Current, 7, 5, 13511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 13511);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (arg4 - arg1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) (arg5 - arg2);
	RTHOOK(3);
	RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (loc1 * loc1) + (EIF_REAL_64) (loc2 * loc2));
	loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1902, dtype))(Current, ur8_1x)).it_r8);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	loc1 /= loc5;
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	loc2 /= loc5;
	RTHOOK(6);
	RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
	ur8_1 = arg3;
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_1x)).it_r8);
	RTHOOK(7);
	RTDBGAL(Current, 4, 0x20000000, 1, 0); /* loc4 */
	ur8_1 = arg3;
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_1x)).it_r8);
	RTHOOK(8);
	RTDBGAL(Current, 7, 0x20000000, 1, 0); /* loc7 */
	loc7 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) -loc2 * loc3) + (EIF_REAL_64) (loc1 * loc4));
	RTHOOK(9);
	RTDBGAL(Current, 6, 0x20000000, 1, 0); /* loc6 */
	loc6 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc1 * loc3) + (EIF_REAL_64) (loc2 * loc4));
	RTHOOK(10);
	ur8_1 = loc6;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1897, dtype))(Current, ur8_1x)).it_r8);
	tr8_2 = eif_abs_real64 (loc7);
	tb1 = eif_is_nan_real_64 (((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) -loc7)) /  (EIF_REAL_64) (tr8_2))));
	if (tb1) {
		RTHOOK(11);
		RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
		ur8_1 = (EIF_REAL_64) 1.0;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1897, dtype))(Current, ur8_1x)).it_r8);
	} else {
		RTHOOK(12);
		RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
		ur8_1 = loc6;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1897, dtype))(Current, ur8_1x)).it_r8);
		tr8_1 = eif_abs_real64 (loc7);
		Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (Result * (EIF_REAL_64) -loc7)) /  (EIF_REAL_64) (tr8_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_CONTROLLER}.pid_controller */
EIF_TYPED_VALUE F962_7898 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5604,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_CONTROLLER}.pid_controller_vleave */
EIF_TYPED_VALUE F962_7899 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5605,Dtype(Current)));
	return r;
}


void EIF_Minit962 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
