/*
 * Code for class GRID_CONNECTIVITY_STRATEGY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F21_396(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit21(void);

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

/* {GRID_CONNECTIVITY_STRATEGY}.connect_node */
void F21_396 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "connect_node";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 20, Current, 2, 7, 413);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(20, Current, 413);
	RTCC(arg1, 20, l_feature_name, 1, eif_new_type(82, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	tb1 = '\0';
	ui4_1 = arg2;
	ui4_2 = arg3;
	ui4_3 = arg4;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (3, arg1, tp1);
		RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
		RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(1290, "is_valid_index", arg1, tp1, ub1x);
		tb2 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1290, "is_valid_index", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb2) {
		ui4_1 = arg5;
		ui4_2 = arg6;
		ui4_3 = arg7;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1290, "is_valid_index", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1290, "is_valid_index", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80000EF, 0, 0); /* loc1 */
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = arg4;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF80000EF, 0, 0); /* loc2 */
		ui4_1 = arg5;
		ui4_2 = arg6;
		ui4_3 = arg7;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		{
			int uarg;
			int uarg1 = RTS_OU (Current, loc1);
			int uarg2 = RTS_OU (Current, loc2);
			RTS_SD;
			uarg = uarg1 || uarg2;
			if (uarg) {
				RTS_SRC (Current);
				if (uarg1) RTS_RS (Current, loc1);
				if (uarg2) RTS_RS (Current, loc2);
				RTS_RW (Current);
			}
			RTHOOK(4);
			ur1 = RTCCL(loc2);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc1)) && !(EIF_IS_PASSIVE (loc1))) {
				RTS_AC (1, loc1, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CF(1295, "is_connected", loc1, tp1, ub1x);
				tb1 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(loc1));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1295, "is_connected", loc1))(loc1, ur1x)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(5);
				ur1 = RTCCL(loc2);
				if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc1)) && !(EIF_IS_PASSIVE (loc1))) {
					RTS_AC (1, loc1, tp1);
					RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
					RTS_CP(1296, "connect", loc1, tp1);
				} else {
					RTS_IMPERSONATE (RTS_PID(loc1));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", loc1))(loc1, ur1x);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
			}
			if (uarg) RTS_SRD (Current);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
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
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit21 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
