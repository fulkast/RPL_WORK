/*
 * Code for class GRAPH_MAKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F940_7723(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_7724(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_7725(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F940_7726(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit940(void);

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

/* {GRAPH_MAKER}.make_grid_graph */
EIF_TYPED_VALUE F940_7723 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_grid_graph";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r8
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
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,ur1);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 939, Current, 4, 3, 13332);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 13332);
	RTCC(arg1, 939, l_feature_name, 1, eif_new_type(173, 0x05), 0x05);
	RTCC(arg2, 939, l_feature_name, 2, eif_new_type(20, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg = uarg1 || uarg2;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(1910, "state", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(1,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(962, "info", tr1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(1,2);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
			RTS_AC (0, tr2, tp1);
			RTS_CF(818, "map_load_time", tr2, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr2));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(818, "map_load_time", tr2))(tr2)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		has_wait_condition = uarg1;
		RTTE((EIF_BOOLEAN) (tr8_1 > tr8_2), label_1);
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
	ur8_1 = arg3;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (1, arg1, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CP(1912, "inflate", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1912, "inflate", arg1))(arg1, ur8_1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000052, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(82, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(820, "width", tr3, tp1, uu4_1x);
		tu4_1 = (uu4_1x.it_n4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(820, "width", tr3))(tr3)).it_n4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,3);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	ui4_1 = ti4_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,5);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(821, "height", tr3, tp1, uu4_1x);
		tu4_1 = (uu4_1x.it_n4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(821, "height", tr3))(tr3)).it_n4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,6);
	ti4_2 = (EIF_INTEGER_32) tu4_1;
	ui4_2 = ti4_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,7);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,8);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(822, "origin", tr3, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,9);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(830, "position", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,10);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(898, "x", tr3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr3))(tr3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,11);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,12);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(822, "origin", tr3, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,13);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(830, "position", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,14);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(898, "x", tr3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr3))(tr3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,15);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,16);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(820, "width", tr3, tp1, uu4_1x);
		tu4_1 = (uu4_1x.it_n4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(820, "width", tr3))(tr3)).it_n4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr4_1 = (EIF_REAL_32) (tu4_1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,17);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,18);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(819, "resolution", tr3, tp1, ur4_1x);
		tr4_2 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "resolution", tr3))(tr3)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_3 = (EIF_REAL_64) ((EIF_REAL_32) (tr4_1 * tr4_2));
	ur8_2 = (EIF_REAL_64) (tr8_2 + tr8_3);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,19);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,20);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(822, "origin", tr3, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,21);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(830, "position", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,22);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(899, "y", tr3, tp1, ur8_3x);
		tr8_4 = (ur8_3x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr3))(tr3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_3 = tr8_4;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,23);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,24);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(822, "origin", tr3, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,25);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(830, "position", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,26);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(899, "y", tr3, tp1, ur8_4x);
		tr8_5 = (ur8_4x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr3))(tr3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,27);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,28);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(821, "height", tr3, tp1, uu4_1x);
		tu4_1 = (uu4_1x.it_n4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(821, "height", tr3))(tr3)).it_n4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr4_1 = (EIF_REAL_32) (tu4_1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,29);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(962, "info", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(3,30);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(819, "resolution", tr3, tp1, ur4_1x);
		tr4_2 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "resolution", tr3))(tr3)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_6 = (EIF_REAL_64) ((EIF_REAL_32) (tr4_1 * tr4_2));
	ur8_4 = (EIF_REAL_64) (tr8_5 + tr8_6);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1284, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur1x);
	RTNHOOK(3,31);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1286, "count_x", loc1));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(6);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_2 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1287, "count_y", loc1));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(8);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(9);
				ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1288, "count_z", loc1));
				if ((EIF_BOOLEAN) (loc4 > ti4_3)) break;
				RTHOOK(10);
				ui4_1 = loc2;
				ui4_2 = loc3;
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (2, arg1, tp1);
					RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
					RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
					RTS_CF(1911, "occupancy", arg1, tp1, ui1_1x);
					ti1_1 = (ui1_1x.it_i1);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1911, "occupancy", arg1))(arg1, ui4_1x, ui4_2x)).it_i1);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				ti4_4 = (EIF_INTEGER_32) ti1_1;
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(1913, "occupancy_threshold", arg1, tp1, ui4_1x);
					ti4_5 = (ui4_1x.it_i4);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1913, "occupancy_threshold", arg1))(arg1)).it_i4);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if ((EIF_BOOLEAN) (ti4_4 > ti4_5)) {
					RTHOOK(11);
					ui4_1 = loc2;
					ui4_2 = loc3;
					ui4_3 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1291, "add_obstacle_by_index", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x);
				}
				RTHOOK(12);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
			}
			RTHOOK(13);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(15);
	RTDBGAL(Current, 0, 0xF8000052, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef ui1_1
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPH_MAKER}.convert_x_coord_to_x_index */
EIF_TYPED_VALUE F940_7724 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "convert_x_coord_to_x_index";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 2, 13333);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 13333);
	RTCC(arg1, 939, l_feature_name, 1, eif_new_type(173, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(822, "origin", tr2, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,3);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(830, "position", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(898, "x", tr2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr2))(tr2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,5);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,6);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(819, "resolution", tr2, tp1, ur4_1x);
		tr4_1 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "resolution", tr2))(tr2)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_2 = (EIF_REAL_64) (tr4_1);
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg2 - tr8_1)) /  (EIF_REAL_64) (tr8_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4423, "rounded", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur4_1
#undef arg2
#undef arg1
}

/* {GRAPH_MAKER}.convert_y_coord_to_y_index */
EIF_TYPED_VALUE F940_7725 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "convert_y_coord_to_y_index";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 2, 13334);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 13334);
	RTCC(arg1, 939, l_feature_name, 1, eif_new_type(173, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(822, "origin", tr2, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,3);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(830, "position", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(899, "y", tr2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr2))(tr2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,5);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,6);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(819, "resolution", tr2, tp1, ur4_1x);
		tr4_1 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "resolution", tr2))(tr2)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_2 = (EIF_REAL_64) (tr4_1);
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg2 - tr8_1)) /  (EIF_REAL_64) (tr8_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4423, "rounded", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur4_1
#undef arg2
#undef arg1
}

/* {GRAPH_MAKER}.convert_z_coord_to_z_index */
EIF_TYPED_VALUE F940_7726 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "convert_z_coord_to_z_index";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 939, Current, 0, 2, 13335);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(939, Current, 13335);
	RTCC(arg1, 939, l_feature_name, 1, eif_new_type(173, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(822, "origin", tr2, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(822, "origin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,3);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(830, "position", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(900, "z", tr2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(900, "z", tr2))(tr2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1910, "state", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,5);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,6);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(819, "resolution", tr2, tp1, ur4_1x);
		tr4_1 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "resolution", tr2))(tr2)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_2 = (EIF_REAL_64) (tr4_1);
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg2 - tr8_1)) /  (EIF_REAL_64) (tr8_2)));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4423, "rounded", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur4_1
#undef arg2
#undef arg1
}

void EIF_Minit940 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
