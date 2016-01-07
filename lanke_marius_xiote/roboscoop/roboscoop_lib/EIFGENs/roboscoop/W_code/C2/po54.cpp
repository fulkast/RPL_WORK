/*
 * Code for class POINT_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F54_964(EIF_REFERENCE);
extern void F54_965(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F54_966(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F54_967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F54_968(EIF_REFERENCE);
extern EIF_TYPED_VALUE F54_969(EIF_REFERENCE);
extern void F54_970(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F54_971(EIF_REFERENCE);
extern void F54_972(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F54_973(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F54_974(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F54_975(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F54_976(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F54_977(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F54_978(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F54_979(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit54(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "geometry_msgs/Point.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F54_972
static void inline_F54_972 (EIF_POINTER arg1)
{
	delete (geometry_msgs::Point*)arg1;
	;
}
#define INLINE_F54_972
#endif
#ifndef INLINE_F54_973
static EIF_REAL_64 inline_F54_973 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Point*)(arg1))->x);
	;
}
#define INLINE_F54_973
#endif
#ifndef INLINE_F54_974
static EIF_REAL_64 inline_F54_974 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Point*)(arg1))->y);
	;
}
#define INLINE_F54_974
#endif
#ifndef INLINE_F54_975
static EIF_REAL_64 inline_F54_975 (EIF_POINTER arg1)
{
	return (double)(((geometry_msgs::Point*)(arg1))->z);
	;
}
#define INLINE_F54_975
#endif
#ifndef INLINE_F54_976
static EIF_POINTER inline_F54_976 (EIF_REAL_64 arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	geometry_msgs::Point* msg = new geometry_msgs::Point();
msg->x = arg1;
msg->y = arg2;
msg->z = arg3;
return msg;
	;
}
#define INLINE_F54_976
#endif
#ifndef INLINE_F54_977
static void inline_F54_977 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <geometry_msgs::Point> (arg2, arg3);
	;
}
#define INLINE_F54_977
#endif
#ifndef INLINE_F54_978
static void inline_F54_978 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <geometry_msgs::Point> (*((geometry_msgs::Point*)arg2));
	;
}
#define INLINE_F54_978
#endif
#ifndef INLINE_F54_979
static void inline_F54_979 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<geometry_msgs::Point, geometry_msgs::Point::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F54_979
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {POINT_MSG}.make_empty */
void F54_964 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 0, 1034);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(53, Current, 1034);
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

/* {POINT_MSG}.make_from_pointer */
void F54_965 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 1, 1035);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(53, Current, 1035);
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

/* {POINT_MSG}.make_with_values */
void F54_966 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 3, 1036);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1036);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 898, 0x20000000, 1); /* x */
	*(EIF_REAL_64 *)(Current + RTWA(898, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 899, 0x20000000, 1); /* y */
	*(EIF_REAL_64 *)(Current + RTWA(899, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 900, 0x20000000, 1); /* z */
	*(EIF_REAL_64 *)(Current + RTWA(900, dtype)) = (EIF_REAL_64) arg3;
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

/* {POINT_MSG}.x */
EIF_TYPED_VALUE F54_967 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(898,Dtype(Current)));
	return r;
}


/* {POINT_MSG}.y */
EIF_TYPED_VALUE F54_968 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(899,Dtype(Current)));
	return r;
}


/* {POINT_MSG}.z */
EIF_TYPED_VALUE F54_969 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(900,Dtype(Current)));
	return r;
}


/* {POINT_MSG}.set_from_pointer */
void F54_970 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 1, 1040);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1040);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 898, 0x20000000, 1); /* x */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(901, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(898, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 899, 0x20000000, 1); /* y */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(902, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(899, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 900, 0x20000000, 1); /* z */
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(903, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(900, dtype)) = (EIF_REAL_64) tr8_1;
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

/* {POINT_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F54_971 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 0, 1041);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(53, Current, 1041);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(898, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(899, dtype));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(900, dtype));
	ur8_3 = tr8_3;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(904, dtype))(Current, ur8_1x, ur8_2x, ur8_3x)).it_p);
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

/* {POINT_MSG}.deallocate_c_msg */
void F54_972 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 1, 1042);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1042);
	RTIV(Current, RTAL);
	inline_F54_972 ((EIF_POINTER) arg1);
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

/* {POINT_MSG}.get_x_from_c */
EIF_TYPED_VALUE F54_973 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 1, 1043);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1043);
	RTIV(Current, RTAL);
	Result = inline_F54_973 ((EIF_POINTER) arg1);
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

/* {POINT_MSG}.get_y_from_c */
EIF_TYPED_VALUE F54_974 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 1, 1044);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1044);
	RTIV(Current, RTAL);
	Result = inline_F54_974 ((EIF_POINTER) arg1);
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

/* {POINT_MSG}.get_z_from_c */
EIF_TYPED_VALUE F54_975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 1, 1045);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1045);
	RTIV(Current, RTAL);
	Result = inline_F54_975 ((EIF_POINTER) arg1);
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

/* {POINT_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F54_976 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 3, 1046);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1046);
	RTIV(Current, RTAL);
	Result = inline_F54_976 ((EIF_REAL_64) arg1, (EIF_REAL_64) arg2, (EIF_REAL_64) arg3);
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

/* {POINT_MSG}.c_ros_advertize */
void F54_977 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 3, 1047);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1047);
	RTIV(Current, RTAL);
	inline_F54_977 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
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

/* {POINT_MSG}.c_ros_publish */
void F54_978 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 2, 1048);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1048);
	RTIV(Current, RTAL);
	inline_F54_978 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
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

/* {POINT_MSG}.subscribe_to_ros */
void F54_979 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 53, Current, 0, 4, 1049);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(53, Current, 1049);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F54_979 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
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

void EIF_Minit54 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
