/*
 * Code for class QUATERNION_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F53_944(EIF_REFERENCE);
extern void F53_945(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F53_946(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_947(EIF_REFERENCE);
extern EIF_TYPED_VALUE F53_948(EIF_REFERENCE);
extern EIF_TYPED_VALUE F53_949(EIF_REFERENCE);
extern EIF_TYPED_VALUE F53_950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F53_951(EIF_REFERENCE);
extern void F53_952(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_953(EIF_REFERENCE);
extern void F53_954(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_955(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_956(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_957(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_958(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_959(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F53_960(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F53_961(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F53_962(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F53_963(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit53(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "geometry_msgs/Quaternion.h"
#include "math.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F53_954
static void inline_F53_954 (EIF_POINTER arg1)
{
	delete (geometry_msgs::Quaternion*)arg1;
	;
}
#define INLINE_F53_954
#endif
#ifndef INLINE_F53_955
static EIF_REAL_64 inline_F53_955 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Quaternion*)(arg1))->x);
	;
}
#define INLINE_F53_955
#endif
#ifndef INLINE_F53_956
static EIF_REAL_64 inline_F53_956 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Quaternion*)(arg1))->y);
	;
}
#define INLINE_F53_956
#endif
#ifndef INLINE_F53_957
static EIF_REAL_64 inline_F53_957 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Quaternion*)(arg1))->z);
	;
}
#define INLINE_F53_957
#endif
#ifndef INLINE_F53_958
static EIF_REAL_64 inline_F53_958 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Quaternion*)(arg1))->w);
	;
}
#define INLINE_F53_958
#endif
#ifndef INLINE_F53_959
static EIF_POINTER inline_F53_959 (EIF_REAL_64 arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4)
{
	geometry_msgs::Quaternion* msg = new geometry_msgs::Quaternion();
msg->x = arg1;
msg->y = arg2;
msg->z = arg3;
msg->w = arg4;
return msg;
	;
}
#define INLINE_F53_959
#endif
#ifndef INLINE_F53_960
static void inline_F53_960 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <geometry_msgs::Quaternion> (arg2, arg3);
	;
}
#define INLINE_F53_960
#endif
#ifndef INLINE_F53_961
static void inline_F53_961 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <geometry_msgs::Quaternion> (*((geometry_msgs::Quaternion*)arg2));
	;
}
#define INLINE_F53_961
#endif
#ifndef INLINE_F53_962
static void inline_F53_962 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<geometry_msgs::Quaternion, geometry_msgs::Quaternion::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F53_962
#endif
#ifndef INLINE_F53_963
static EIF_REAL_64 inline_F53_963 (EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	return (double) atan2(arg1, arg2) * 2.0;
	;
}
#define INLINE_F53_963
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {QUATERNION_MSG}.make_empty */
void F53_944 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_empty";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1017);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(52, Current, 1017);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 889, 0x20000000, 1); /* w */
	*(EIF_REAL_64 *)(Current + RTWA(889, Dtype(Current))) = (EIF_REAL_64) (EIF_REAL_64) 1.0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {QUATERNION_MSG}.make_from_pointer */
void F53_945 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1018);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(52, Current, 1018);
	RTIV(Current, RTAL);
	RTHOOK(1);
	up1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(811, Dtype(Current)))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {QUATERNION_MSG}.make_with_values */
void F53_946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make_with_values";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
	RTCDT;
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
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 4, 1019);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1019);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 886, 0x20000000, 1); /* x */
	*(EIF_REAL_64 *)(Current + RTWA(886, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 887, 0x20000000, 1); /* y */
	*(EIF_REAL_64 *)(Current + RTWA(887, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 888, 0x20000000, 1); /* z */
	*(EIF_REAL_64 *)(Current + RTWA(888, dtype)) = (EIF_REAL_64) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 889, 0x20000000, 1); /* w */
	*(EIF_REAL_64 *)(Current + RTWA(889, dtype)) = (EIF_REAL_64) arg4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {QUATERNION_MSG}.x */
EIF_TYPED_VALUE F53_947 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(886,Dtype(Current)));
	return r;
}


/* {QUATERNION_MSG}.y */
EIF_TYPED_VALUE F53_948 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(887,Dtype(Current)));
	return r;
}


/* {QUATERNION_MSG}.z */
EIF_TYPED_VALUE F53_949 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(888,Dtype(Current)));
	return r;
}


/* {QUATERNION_MSG}.w */
EIF_TYPED_VALUE F53_950 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(889,Dtype(Current)));
	return r;
}


/* {QUATERNION_MSG}.theta */
EIF_TYPED_VALUE F53_951 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "theta";
	RTEX;
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
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1024);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1024);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(888, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(889, dtype));
	ur8_2 = tr8_2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(896, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef ur8_2
}

/* {QUATERNION_MSG}.set_from_pointer */
void F53_952 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1025);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 886, 0x20000000, 1); /* x */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(891, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(886, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 887, 0x20000000, 1); /* y */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(892, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(887, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 888, 0x20000000, 1); /* z */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(893, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(888, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 889, 0x20000000, 1); /* w */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(894, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(889, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {QUATERNION_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F53_953 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "allocate_c_msg";
	RTEX;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1026);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1026);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(886, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(887, dtype));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(888, dtype));
	ur8_3 = tr8_3;
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(889, dtype));
	ur8_4 = tr8_4;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(895, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_p);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
}

/* {QUATERNION_MSG}.deallocate_c_msg */
void F53_954 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "deallocate_c_msg";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1027);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1027);
	RTIV(Current, RTAL);
	inline_F53_954 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {QUATERNION_MSG}.get_x_from_c */
EIF_TYPED_VALUE F53_955 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_x_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1028);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1028);
	RTIV(Current, RTAL);
	Result = inline_F53_955 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {QUATERNION_MSG}.get_y_from_c */
EIF_TYPED_VALUE F53_956 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_y_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1029);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1029);
	RTIV(Current, RTAL);
	Result = inline_F53_956 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {QUATERNION_MSG}.get_z_from_c */
EIF_TYPED_VALUE F53_957 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_z_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1030);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1030);
	RTIV(Current, RTAL);
	Result = inline_F53_957 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {QUATERNION_MSG}.get_w_from_c */
EIF_TYPED_VALUE F53_958 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_w_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 1, 1031);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1031);
	RTIV(Current, RTAL);
	Result = inline_F53_958 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {QUATERNION_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F53_959 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_msg_ptr";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
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
	RTLU (SK_POINTER, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 4, 1032);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1032);
	RTIV(Current, RTAL);
	Result = inline_F53_959 ((EIF_REAL_64) arg1, (EIF_REAL_64) arg2, (EIF_REAL_64) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {QUATERNION_MSG}.c_ros_advertize */
void F53_960 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_ros_advertize";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 3, 1033);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1033);
	RTIV(Current, RTAL);
	inline_F53_960 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {QUATERNION_MSG}.c_ros_publish */
void F53_961 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_ros_publish";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 2, 1014);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1014);
	RTIV(Current, RTAL);
	inline_F53_961 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {QUATERNION_MSG}.subscribe_to_ros */
void F53_962 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "subscribe_to_ros";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_r
#define arg4 arg4x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 4, 1015);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1015);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F53_962 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {QUATERNION_MSG}.get_theta */
EIF_TYPED_VALUE F53_963 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_theta";
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
	
	RTEAA(l_feature_name, 52, Current, 0, 2, 1016);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(52, Current, 1016);
	RTIV(Current, RTAL);
	Result = inline_F53_963 ((EIF_REAL_64) arg1, (EIF_REAL_64) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
