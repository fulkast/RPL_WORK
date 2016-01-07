/*
 * Code for class PID_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F930_7635(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F930_7636(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F930_7637(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F930_7638(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7639(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7640(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7641(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7642(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7643(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7644(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7645(EIF_REFERENCE);
extern EIF_TYPED_VALUE F930_7646(EIF_REFERENCE);
extern void EIF_Minit930(void);

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

/* {PID_CONTROLLER}.make */
void F930_7635 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 929, Current, 0, 3, 13258);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(929, Current, 13258);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5389, 0x20000000, 1); /* k_p */
	*(EIF_REAL_64 *)(Current + RTWA(5389, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5390, 0x20000000, 1); /* k_i */
	*(EIF_REAL_64 *)(Current + RTWA(5390, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5391, 0x20000000, 1); /* k_d */
	*(EIF_REAL_64 *)(Current + RTWA(5391, dtype)) = (EIF_REAL_64) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {PID_CONTROLLER}.get_control_output */
EIF_TYPED_VALUE F930_7636 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_control_output";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
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
	RTLU(SK_REAL64, &loc1);
	
	RTEAA(l_feature_name, 929, Current, 1, 2, 13259);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(929, Current, 13259);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur8_1 = arg1;
	ur8_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5382, dtype))(Current, ur8_1x, ur8_2x);
	RTHOOK(2);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5387, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5388, dtype));
	if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
		loc1 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
		loc1 = *(EIF_REAL_64 *)(Current + RTWA(5384, dtype));
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5385, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5387, dtype));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(5388, dtype));
		loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc1 - tr8_1)) /  (EIF_REAL_64) ((EIF_REAL_64) (tr8_2 - tr8_3)));
	}
	RTHOOK(5);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	Result = *(EIF_REAL_64 *)(Current + RTWA(5389, dtype));
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5384, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5390, dtype));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(5386, dtype));
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(5391, dtype));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (Result * tr8_1) + (EIF_REAL_64) (tr8_2 * tr8_3)) + (EIF_REAL_64) (tr8_4 * loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef arg2
#undef arg1
}

/* {PID_CONTROLLER}.update_error */
void F930_7637 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "update_error";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 929, Current, 0, 2, 13260);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(929, Current, 13260);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5388, 0x20000000, 1); /* prev_time */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5387, dtype));
	*(EIF_REAL_64 *)(Current + RTWA(5388, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5387, 0x20000000, 1); /* cur_time */
	*(EIF_REAL_64 *)(Current + RTWA(5387, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5385, 0x20000000, 1); /* prev_error */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5384, dtype));
	*(EIF_REAL_64 *)(Current + RTWA(5385, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5384, 0x20000000, 1); /* cur_error */
	*(EIF_REAL_64 *)(Current + RTWA(5384, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5386, 0x20000000, 1); /* acc_error */
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5384, dtype));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(5387, dtype));
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(5388, dtype));
	(*(EIF_REAL_64 *)(Current + RTWA(5386, dtype))) += (EIF_REAL_64) (tr8_2 * (EIF_REAL_64) (tr8_3 - tr8_4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {PID_CONTROLLER}.reset */
void F930_7638 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 929, Current, 0, 0, 13261);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(929, Current, 13261);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5384, 0x20000000, 1); /* cur_error */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(5384, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5385, 0x20000000, 1); /* prev_error */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(5385, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5386, 0x20000000, 1); /* acc_error */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(5386, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5387, 0x20000000, 1); /* cur_time */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(5387, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5388, 0x20000000, 1); /* prev_time */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(5388, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PID_CONTROLLER}.cur_error */
EIF_TYPED_VALUE F930_7639 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5384,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.prev_error */
EIF_TYPED_VALUE F930_7640 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5385,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.acc_error */
EIF_TYPED_VALUE F930_7641 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5386,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.cur_time */
EIF_TYPED_VALUE F930_7642 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5387,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.prev_time */
EIF_TYPED_VALUE F930_7643 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5388,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.k_p */
EIF_TYPED_VALUE F930_7644 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5389,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.k_i */
EIF_TYPED_VALUE F930_7645 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5390,Dtype(Current)));
	return r;
}


/* {PID_CONTROLLER}.k_d */
EIF_TYPED_VALUE F930_7646 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5391,Dtype(Current)));
	return r;
}


void EIF_Minit930 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
