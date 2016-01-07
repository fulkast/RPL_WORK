/*
 * Code for class CHANGE_FEATURE_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F961_7886(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7887(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit961(void);

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

/* {CHANGE_FEATURE_CONTROLLER}.make */
void F961_7886 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13500);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13500);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
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

/* {CHANGE_FEATURE_CONTROLLER}.change_light_feature */
void F961_7887 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "change_light_feature";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 3, 13501);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13501);
	RTCC(arg1, 960, l_feature_name, 1, eif_new_type(933, 0x05), 0x05);
	RTCC(arg2, 960, l_feature_name, 2, eif_new_type(38, 0x05), 0x05);
	RTCC(arg3, 960, l_feature_name, 3, eif_new_type(25, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg = uarg1 || uarg2 || uarg3;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(783, "is_stop_requested", arg2, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		has_wait_condition = uarg2;
		RTTE((EIF_BOOLEAN) !tb1, label_1);
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5421, "is_go", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5421, "is_go", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CP(546, "set_to_yellow", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(546, "set_to_yellow", arg3))(arg3);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5422, "is_wall_following", arg1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5422, "is_wall_following", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(5);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CP(543, "set_to_red", arg3, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(543, "set_to_red", arg3))(arg3);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		} else {
			RTHOOK(6);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5423, "is_transiting", arg1, tp1, ub1x);
				tb1 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5423, "is_transiting", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (tb1) {
				RTHOOK(7);
				if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
					RTS_AC (0, arg3, tp1);
					RTS_CP(545, "set_to_blue", arg3, tp1);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg3));
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(545, "set_to_blue", arg3))(arg3);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
			} else {
				RTHOOK(8);
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(5419, "is_goal_reached", arg1, tp1, ub1x);
					tb1 = (ub1x.it_b);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5419, "is_goal_reached", arg1))(arg1)).it_b);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if (tb1) {
					RTHOOK(9);
					if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
						RTS_AC (0, arg3, tp1);
						RTS_CP(544, "set_to_green", arg3, tp1);
					} else {
						RTS_IMPERSONATE (RTS_PID(arg3));
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(544, "set_to_green", arg3))(arg3);
						RTS_IMPERSONATE (RTS_PID(Current));
					}
				} else {
					RTHOOK(10);
					if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
						RTS_AC (0, arg1, tp1);
						RTS_CF(5420, "is_goal_unreachable", arg1, tp1, ub1x);
						tb1 = (ub1x.it_b);
					} else {
						RTS_IMPERSONATE (RTS_PID(arg1));
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5420, "is_goal_unreachable", arg1))(arg1)).it_b);
						RTS_IMPERSONATE (RTS_PID(Current));
					}
					if (tb1) {
						RTHOOK(11);
						if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
							RTS_AC (0, arg3, tp1);
							RTS_CP(547, "set_to_magenta", arg3, tp1);
						} else {
							RTS_IMPERSONATE (RTS_PID(arg3));
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(547, "set_to_magenta", arg3))(arg3);
							RTS_IMPERSONATE (RTS_PID(Current));
						}
					}
				}
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
	RTLO(5);
	RTEE;
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit961 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
