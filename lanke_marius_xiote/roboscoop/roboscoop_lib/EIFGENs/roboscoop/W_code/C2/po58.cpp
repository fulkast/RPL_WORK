/*
 * Code for class POSE_2D_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F58_1030(EIF_REFERENCE);
extern void F58_1031(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F58_1032(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F58_1033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F58_1035(EIF_REFERENCE);
extern void F58_1036(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F58_1037(EIF_REFERENCE);
extern void F58_1038(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F58_1039(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F58_1040(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F58_1041(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F58_1042(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F58_1043(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F58_1044(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F58_1045(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit58(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "geometry_msgs/Pose2D.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F58_1038
static void inline_F58_1038 (EIF_POINTER arg1)
{
	delete (geometry_msgs::Pose2D*)arg1;
	;
}
#define INLINE_F58_1038
#endif
#ifndef INLINE_F58_1039
static EIF_REAL_64 inline_F58_1039 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Pose2D*)(arg1))->x);
	;
}
#define INLINE_F58_1039
#endif
#ifndef INLINE_F58_1040
static EIF_REAL_64 inline_F58_1040 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Pose2D*)(arg1))->y);
	;
}
#define INLINE_F58_1040
#endif
#ifndef INLINE_F58_1041
static EIF_REAL_64 inline_F58_1041 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Pose2D*)(arg1))->theta);
	;
}
#define INLINE_F58_1041
#endif
#ifndef INLINE_F58_1042
static EIF_POINTER inline_F58_1042 (EIF_REAL_64 arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	geometry_msgs::Pose2D* msg = new geometry_msgs::Pose2D();
msg->x = arg1;
msg->y = arg2;
msg->theta = arg3;
return msg;
	;
}
#define INLINE_F58_1042
#endif
#ifndef INLINE_F58_1043
static void inline_F58_1043 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <geometry_msgs::Pose2D> (arg2, arg3);
	;
}
#define INLINE_F58_1043
#endif
#ifndef INLINE_F58_1044
static void inline_F58_1044 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <geometry_msgs::Pose2D> (*((geometry_msgs::Pose2D*)arg2));
	;
}
#define INLINE_F58_1044
#endif
#ifndef INLINE_F58_1045
static void inline_F58_1045 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<geometry_msgs::Pose2D, geometry_msgs::Pose2D::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F58_1045
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {POSE_2D_MSG}.make_empty */
void F58_1030 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 0, 1100);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(57, Current, 1100);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {POSE_2D_MSG}.make_from_pointer */
void F58_1031 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 1, 1101);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(57, Current, 1101);
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

/* {POSE_2D_MSG}.make_with_values */
void F58_1032 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_values";
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
	
	RTEAA(l_feature_name, 57, Current, 0, 3, 1102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1102);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 932, 0x20000000, 1); /* x */
	*(EIF_REAL_64 *)(Current + RTWA(932, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 933, 0x20000000, 1); /* y */
	*(EIF_REAL_64 *)(Current + RTWA(933, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 934, 0x20000000, 1); /* theta */
	*(EIF_REAL_64 *)(Current + RTWA(934, dtype)) = (EIF_REAL_64) arg3;
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

/* {POSE_2D_MSG}.x */
EIF_TYPED_VALUE F58_1033 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(932,Dtype(Current)));
	return r;
}


/* {POSE_2D_MSG}.y */
EIF_TYPED_VALUE F58_1034 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(933,Dtype(Current)));
	return r;
}


/* {POSE_2D_MSG}.theta */
EIF_TYPED_VALUE F58_1035 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(934,Dtype(Current)));
	return r;
}


/* {POSE_2D_MSG}.set_from_pointer */
void F58_1036 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 1, 1106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1106);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 932, 0x20000000, 1); /* x */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(935, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(932, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 933, 0x20000000, 1); /* y */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(936, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(933, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 934, 0x20000000, 1); /* theta */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(937, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(934, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {POSE_2D_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F58_1037 (EIF_REFERENCE Current)
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
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
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
	
	RTEAA(l_feature_name, 57, Current, 0, 0, 1107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(57, Current, 1107);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(932, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(933, dtype));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(934, dtype));
	ur8_3 = tr8_3;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(938, dtype))(Current, ur8_1x, ur8_2x, ur8_3x)).it_p);
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
}

/* {POSE_2D_MSG}.deallocate_c_msg */
void F58_1038 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 1, 1108);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1108);
	RTIV(Current, RTAL);
	inline_F58_1038 ((EIF_POINTER) arg1);
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

/* {POSE_2D_MSG}.get_x_from_c */
EIF_TYPED_VALUE F58_1039 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 1, 1109);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1109);
	RTIV(Current, RTAL);
	Result = inline_F58_1039 ((EIF_POINTER) arg1);
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

/* {POSE_2D_MSG}.get_y_from_c */
EIF_TYPED_VALUE F58_1040 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 1, 1110);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1110);
	RTIV(Current, RTAL);
	Result = inline_F58_1040 ((EIF_POINTER) arg1);
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

/* {POSE_2D_MSG}.get_theta_from_c */
EIF_TYPED_VALUE F58_1041 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_theta_from_c";
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
	
	RTEAA(l_feature_name, 57, Current, 0, 1, 1111);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1111);
	RTIV(Current, RTAL);
	Result = inline_F58_1041 ((EIF_POINTER) arg1);
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

/* {POSE_2D_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F58_1042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_msg_ptr";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
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
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 57, Current, 0, 3, 1112);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1112);
	RTIV(Current, RTAL);
	Result = inline_F58_1042 ((EIF_REAL_64) arg1, (EIF_REAL_64) arg2, (EIF_REAL_64) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {POSE_2D_MSG}.c_ros_advertize */
void F58_1043 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 3, 1113);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1113);
	RTIV(Current, RTAL);
	inline_F58_1043 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
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

/* {POSE_2D_MSG}.c_ros_publish */
void F58_1044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 2, 1114);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1114);
	RTIV(Current, RTAL);
	inline_F58_1044 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
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

/* {POSE_2D_MSG}.subscribe_to_ros */
void F58_1045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 57, Current, 0, 4, 1115);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(57, Current, 1115);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F58_1045 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
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

void EIF_Minit58 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
