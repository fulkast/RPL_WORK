/*
 * Code for class TRIGONOMETRY_MATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F176_2315(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F176_2316(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F176_2317(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F176_2318(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F176_2319(EIF_REFERENCE);
extern EIF_TYPED_VALUE F176_2320(EIF_REFERENCE);
extern void EIF_Minit176(void);

#ifdef __cplusplus
}
#endif

#include "math.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F176_2315
static EIF_REAL_64 inline_F176_2315 (EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	return atan2(arg1, arg2);
	;
}
#define INLINE_F176_2315
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TRIGONOMETRY_MATH}.atan2 */
EIF_TYPED_VALUE F176_2315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "atan2";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 175, Current, 0, 2, 2194);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(175, Current, 2194);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 != (EIF_REAL_64) 0.0) || (EIF_BOOLEAN)(arg1 != (EIF_REAL_64) 0.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F176_2315 ((EIF_REAL_64) arg1, (EIF_REAL_64) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg2
#undef arg1
}

/* {TRIGONOMETRY_MATH}.squared_distance_2d */
EIF_TYPED_VALUE F176_2316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "squared_distance_2d";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
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
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	
	RTEAA(l_feature_name, 175, Current, 2, 4, 2195);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(175, Current, 2195);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (arg1 - arg3);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) (arg2 - arg4);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc1 * loc1) + (EIF_REAL_64) (loc2 * loc2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {TRIGONOMETRY_MATH}.euclidean_distance */
EIF_TYPED_VALUE F176_2317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "euclidean_distance";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 175, Current, 0, 2, 2196);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(175, Current, 2196);
	RTCC(arg1, 175, l_feature_name, 1, eif_new_type(53, 0x05), 0x05);
	RTCC(arg2, 175, l_feature_name, 2, eif_new_type(53, 0x05), 0x05);
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
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(898, "x", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(898, "x", arg2, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = tr8_3;
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4428, "power", tr1))(tr1, ur8_1x)).it_r8);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(899, "y", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(899, "y", arg2, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = tr8_4;
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4428, "power", tr1))(tr1, ur8_1x)).it_r8);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(900, "z", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(900, "z", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(900, "z", arg2, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(900, "z", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = tr8_5;
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	tr8_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4428, "power", tr1))(tr1, ur8_1x)).it_r8);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_3 + tr8_4) + tr8_5);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1902, Dtype(Current)))(Current, ur8_1x)).it_r8);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {TRIGONOMETRY_MATH}.manhattan_distance */
EIF_TYPED_VALUE F176_2318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "manhattan_distance";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 175, Current, 0, 2, 2197);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(175, Current, 2197);
	RTCC(arg1, 175, l_feature_name, 1, eif_new_type(53, 0x05), 0x05);
	RTCC(arg2, 175, l_feature_name, 2, eif_new_type(53, 0x05), 0x05);
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
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(898, "x", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(898, "x", arg2, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1908, dtype))(Current, ur8_1x)).it_r8);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(899, "y", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(899, "y", arg2, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1908, dtype))(Current, ur8_1x)).it_r8);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(900, "z", arg1, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(900, "z", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(900, "z", arg2, tp1, ur8_1x);
		tr8_3 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(900, "z", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = (EIF_REAL_64) (tr8_2 - tr8_3);
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1908, dtype))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (Result + tr8_1) + tr8_2);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {TRIGONOMETRY_MATH}.pi_8 */
EIF_TYPED_VALUE F176_2319 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.3926990816987242;
	return r;
}

/* {TRIGONOMETRY_MATH}.pi_16 */
EIF_TYPED_VALUE F176_2320 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.1963495408493621;
	return r;
}

void EIF_Minit176 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
