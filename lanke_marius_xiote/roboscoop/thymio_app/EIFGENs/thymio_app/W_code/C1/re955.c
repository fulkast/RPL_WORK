/*
 * Code for class RELATIVE_SPACE_CALCULATIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F955_7834(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7835(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7836(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7837(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7838(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7839(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7840(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7841(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_7842(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit955(void);

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

/* {RELATIVE_SPACE_CALCULATIONS}.get_relative_coordinates */
EIF_TYPED_VALUE F955_7834 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_relative_coordinates";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 954, Current, 1, 2, 13449);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(954, Current, 13449);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	ur8_1 = arg2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_1x)).it_r8);
	ur8_1 = (EIF_REAL_64) (arg1 * tr8_1);
	ur8_2 = arg2;
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_2x)).it_r8);
	ur8_2 = (EIF_REAL_64) (arg1 * tr8_2);
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000035, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.convert_relative_coordinates_to_absolute_coordinates */
EIF_TYPED_VALUE F955_7835 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "convert_relative_coordinates_to_absolute_coordinates";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 tr8_7;
	EIF_REAL_64 tr8_8;
	EIF_REAL_64 tr8_9;
	EIF_REAL_64 tr8_10;
	EIF_REAL_64 tr8_11;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 954, Current, 1, 3, 13450);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(954, Current, 13450);
	RTCC(arg1, 954, l_feature_name, 1, eif_new_type(53, 0x01), 0x01);
	RTCC(arg2, 954, l_feature_name, 2, eif_new_type(53, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_2 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	ur8_1 = arg3;
	tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_1x)).it_r8);
	tr8_4 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	ur8_1 = arg3;
	tr8_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_1x)).it_r8);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) (tr8_2 * tr8_3)) - (EIF_REAL_64) (tr8_4 * tr8_5));
	tr8_6 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	tr8_7 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	ur8_2 = arg3;
	tr8_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_2x)).it_r8);
	tr8_9 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	ur8_2 = arg3;
	tr8_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_2x)).it_r8);
	ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_6 + (EIF_REAL_64) (tr8_7 * tr8_8)) + (EIF_REAL_64) (tr8_9 * tr8_10));
	tr8_11 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_11;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000035, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg3
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.convert_angle_to_range */
EIF_TYPED_VALUE F955_7836 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "convert_angle_to_range";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 954, Current, 0, 1, 13451);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(954, Current, 13451);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_1x)).it_r8);
	ur8_1 = tr8_1;
	ur8_2 = arg1;
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_2x)).it_r8);
	ur8_2 = tr8_2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1938, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.calculate_angle_diff */
EIF_TYPED_VALUE F955_7837 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "calculate_angle_diff";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	
	RTEAA(l_feature_name, 954, Current, 0, 2, 13452);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(954, Current, 13452);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	ur8_1 = (EIF_REAL_64) (arg2 - arg1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5548, Dtype(Current)))(Current, ur8_1x)).it_r8);
	tr8_2 = eif_abs_real64 (tr8_1);
	Result = (EIF_REAL_64) tr8_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.get_distance_to_line */
EIF_TYPED_VALUE F955_7838 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_distance_to_line";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 tr8_7;
	EIF_REAL_64 tr8_8;
	EIF_REAL_64 tr8_9;
	EIF_REAL_64 tr8_10;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 954, Current, 0, 2, 13453);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(954, Current, 13453);
	RTCC(arg1, 954, l_feature_name, 1, eif_new_type(53, 0x01), 0x01);
	RTCC(arg2, 954, l_feature_name, 2, eif_new_type(53, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_4 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	tr8_5 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_6 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	tr8_7 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	tr8_8 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_9 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = tr8_9;
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_7 - tr8_8);
	tr8_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4428, "power", tr1))(tr1, ur8_1x)).it_r8);
	tr8_7 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	tr8_8 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	tr8_10 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = tr8_10;
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_7 - tr8_8);
	tr8_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4428, "power", tr1))(tr1, ur8_1x)).it_r8);
	ur8_1 = (EIF_REAL_64) (tr8_9 + tr8_10);
	tr8_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1902, Dtype(Current)))(Current, ur8_1x)).it_r8);
	tr8_8 = eif_abs_real64 (((EIF_REAL_64) ((EIF_REAL_64) (((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2) * tr8_3) - (EIF_REAL_64) ((EIF_REAL_64) (tr8_4 - tr8_5) * tr8_6)))) /  (EIF_REAL_64) (tr8_7))));
	Result = (EIF_REAL_64) tr8_8;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.get_heading_to_follow_line */
EIF_TYPED_VALUE F955_7839 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "get_heading_to_follow_line";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	
	RTEAA(l_feature_name, 954, Current, 2, 4, 13454);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(954, Current, 13454);
	RTCC(arg1, 954, l_feature_name, 1, eif_new_type(53, 0x01), 0x01);
	RTCC(arg2, 954, l_feature_name, 2, eif_new_type(53, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_3 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (arg4 * (EIF_REAL_64) (tr8_1 - tr8_2)) + (EIF_REAL_64) ((EIF_REAL_64) (arg3 - arg4) * (EIF_REAL_64) (tr8_3 - tr8_4)));
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_4 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (arg4 * (EIF_REAL_64) (tr8_1 - tr8_2)) + (EIF_REAL_64) ((EIF_REAL_64) (arg3 - arg4) * (EIF_REAL_64) (tr8_3 - tr8_4)));
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	ur8_1 = loc2;
	ur8_2 = loc1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1938, Dtype(Current)))(Current, ur8_1x, ur8_2x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.get_heading_vector */
EIF_TYPED_VALUE F955_7840 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_heading_vector";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 954, Current, 0, 2, 13455);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(954, Current, 13455);
	RTCC(arg1, 954, l_feature_name, 1, eif_new_type(53, 0x01), 0x01);
	RTCC(arg2, 954, l_feature_name, 2, eif_new_type(53, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000035, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	tr8_3 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	ur8_2 = (EIF_REAL_64) (tr8_3 - tr8_4);
	tr8_5 = *(EIF_REAL_64 *)(arg2 + RTVA(900, "z", arg2));
	tr8_6 = *(EIF_REAL_64 *)(arg1 + RTVA(900, "z", arg1));
	ur8_3 = (EIF_REAL_64) (tr8_5 - tr8_6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.to_local_coordinates2d */
EIF_TYPED_VALUE F955_7841 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "to_local_coordinates2d";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 tr8_7;
	EIF_REAL_64 tr8_8;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	
	RTEAA(l_feature_name, 954, Current, 2, 2, 13456);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(954, Current, 13456);
	RTCC(arg1, 954, l_feature_name, 1, eif_new_type(53, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) arg2;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	ur8_1 = (EIF_REAL_64) -loc2;
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_1x)).it_r8);
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	ur8_1 = (EIF_REAL_64) -loc2;
	tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_1x)).it_r8);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) - (EIF_REAL_64) (tr8_3 * tr8_4));
	tr8_5 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	ur8_2 = (EIF_REAL_64) -loc2;
	tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1898, dtype))(Current, ur8_2x)).it_r8);
	tr8_7 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	ur8_2 = (EIF_REAL_64) -loc2;
	tr8_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_2x)).it_r8);
	ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_5 * tr8_6) + (EIF_REAL_64) (tr8_7 * tr8_8));
	ur8_3 = (EIF_REAL_64) 0.0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000035, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg2
#undef arg1
}

/* {RELATIVE_SPACE_CALCULATIONS}.get_dot_product */
EIF_TYPED_VALUE F955_7842 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_dot_product";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 954, Current, 0, 2, 13457);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(954, Current, 13457);
	RTCC(arg1, 954, l_feature_name, 1, eif_new_type(53, 0x01), 0x01);
	RTCC(arg2, 954, l_feature_name, 2, eif_new_type(53, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(898, "x", arg1));
	tr8_2 = *(EIF_REAL_64 *)(arg2 + RTVA(898, "x", arg2));
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(899, "y", arg1));
	tr8_4 = *(EIF_REAL_64 *)(arg2 + RTVA(899, "y", arg2));
	tr8_5 = *(EIF_REAL_64 *)(arg1 + RTVA(900, "z", arg1));
	tr8_6 = *(EIF_REAL_64 *)(arg2 + RTVA(900, "z", arg2));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2) + tr8_3) + tr8_4) + tr8_5) + tr8_6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit955 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
