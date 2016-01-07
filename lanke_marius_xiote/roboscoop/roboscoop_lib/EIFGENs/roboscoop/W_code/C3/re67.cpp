/*
 * Code for class REFLECTED_AMBIENT_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F67_1200(EIF_REFERENCE);
extern void F67_1201(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F67_1202(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1203(EIF_REFERENCE);
extern EIF_TYPED_VALUE F67_1204(EIF_REFERENCE);
extern EIF_TYPED_VALUE F67_1205(EIF_REFERENCE);
extern EIF_TYPED_VALUE F67_1206(EIF_REFERENCE);
extern EIF_TYPED_VALUE F67_1207(EIF_REFERENCE);
extern EIF_TYPED_VALUE F67_1208(EIF_REFERENCE);
extern void F67_1209(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1210(EIF_REFERENCE);
extern void F67_1211(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1212(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1213(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1215(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1216(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1217(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1218(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F67_1219(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F67_1220(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F67_1221(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F67_1222(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit67(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "roboscoop_ros/RS_ReflectedAmbient.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_1211
static void inline_F67_1211 (EIF_POINTER arg1)
{
	delete (roboscoop_ros::RS_ReflectedAmbient*)arg1;
	;
}
#define INLINE_F67_1211
#endif
#ifndef INLINE_F67_1212
static EIF_POINTER inline_F67_1212 (EIF_POINTER arg1)
{
	return &(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->header);
	;
}
#define INLINE_F67_1212
#endif
#ifndef INLINE_F67_1213
static EIF_REAL_32 inline_F67_1213 (EIF_POINTER arg1)
{
	return (float)(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->reflected_min);
	;
}
#define INLINE_F67_1213
#endif
#ifndef INLINE_F67_1214
static EIF_REAL_32 inline_F67_1214 (EIF_POINTER arg1)
{
	return (float)(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->reflected_max);
	;
}
#define INLINE_F67_1214
#endif
#ifndef INLINE_F67_1215
static EIF_REAL_32 inline_F67_1215 (EIF_POINTER arg1)
{
	return (float)(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->ambient_min);
	;
}
#define INLINE_F67_1215
#endif
#ifndef INLINE_F67_1216
static EIF_REAL_32 inline_F67_1216 (EIF_POINTER arg1)
{
	return (float)(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->ambient_max);
	;
}
#define INLINE_F67_1216
#endif
#ifndef INLINE_F67_1217
static EIF_REAL_32 inline_F67_1217 (EIF_POINTER arg1)
{
	return (float)(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->reflected);
	;
}
#define INLINE_F67_1217
#endif
#ifndef INLINE_F67_1218
static EIF_REAL_32 inline_F67_1218 (EIF_POINTER arg1)
{
	return (float)(((roboscoop_ros::RS_ReflectedAmbient*)(arg1))->ambient);
	;
}
#define INLINE_F67_1218
#endif
#ifndef INLINE_F67_1219
static void inline_F67_1219 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <roboscoop_ros::RS_ReflectedAmbient> (arg2, arg3);
	;
}
#define INLINE_F67_1219
#endif
#ifndef INLINE_F67_1220
static void inline_F67_1220 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <roboscoop_ros::RS_ReflectedAmbient> (*((roboscoop_ros::RS_ReflectedAmbient*)arg2));
	;
}
#define INLINE_F67_1220
#endif
#ifndef INLINE_F67_1221
static EIF_POINTER inline_F67_1221 (EIF_POINTER arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6, EIF_REAL_32 arg7)
{
	roboscoop_ros::RS_ReflectedAmbient* msg = new roboscoop_ros::RS_ReflectedAmbient();
msg->header = *((std_msgs::Header*)arg1);
msg->reflected_min = arg2;
msg->reflected_max = arg3;
msg->ambient_min = arg4;
msg->ambient_max = arg5;
msg->reflected = arg6;
msg->ambient = arg7;
return msg;
	;
}
#define INLINE_F67_1221
#endif
#ifndef INLINE_F67_1222
static void inline_F67_1222 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<roboscoop_ros::RS_ReflectedAmbient, roboscoop_ros::RS_ReflectedAmbient::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F67_1222
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REFLECTED_AMBIENT_MSG}.make_empty */
void F67_1200 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_empty";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 0, 1284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(66, Current, 1284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	tr1 = RTLNSMART(RTWCT(939, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1042, 0x18000000, 1); /* reflected */
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	*(EIF_REAL_32 *)(Current + RTWA(1042, dtype)) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {REFLECTED_AMBIENT_MSG}.make_from_pointer */
void F67_1201 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1285);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(66, Current, 1285);
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

/* {REFLECTED_AMBIENT_MSG}.make_with_values */
void F67_1202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "make_with_values";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
#define arg5 arg5x.it_r4
#define arg6 arg6x.it_r4
#define arg7 arg7x.it_r4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r4 = * (EIF_REAL_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r4 = * (EIF_REAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r4 = * (EIF_REAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU(SK_REAL32,&arg5);
	RTLU(SK_REAL32,&arg6);
	RTLU(SK_REAL32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 7, 1286);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(66, Current, 1286);
	RTCC(arg1, 66, l_feature_name, 1, eif_new_type(51, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1038, 0x18000000, 1); /* reflected_min */
	*(EIF_REAL_32 *)(Current + RTWA(1038, dtype)) = (EIF_REAL_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1039, 0x18000000, 1); /* reflected_max */
	*(EIF_REAL_32 *)(Current + RTWA(1039, dtype)) = (EIF_REAL_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1040, 0x18000000, 1); /* ambient_min */
	*(EIF_REAL_32 *)(Current + RTWA(1040, dtype)) = (EIF_REAL_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1041, 0x18000000, 1); /* ambient_max */
	*(EIF_REAL_32 *)(Current + RTWA(1041, dtype)) = (EIF_REAL_32) arg5;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1042, 0x18000000, 1); /* reflected */
	*(EIF_REAL_32 *)(Current + RTWA(1042, dtype)) = (EIF_REAL_32) arg6;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1043, 0x18000000, 1); /* ambient */
	*(EIF_REAL_32 *)(Current + RTWA(1043, dtype)) = (EIF_REAL_32) arg7;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.reflected_min */
EIF_TYPED_VALUE F67_1203 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1038,Dtype(Current)));
	return r;
}


/* {REFLECTED_AMBIENT_MSG}.reflected_max */
EIF_TYPED_VALUE F67_1204 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1039,Dtype(Current)));
	return r;
}


/* {REFLECTED_AMBIENT_MSG}.ambient_min */
EIF_TYPED_VALUE F67_1205 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1040,Dtype(Current)));
	return r;
}


/* {REFLECTED_AMBIENT_MSG}.ambient_max */
EIF_TYPED_VALUE F67_1206 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1041,Dtype(Current)));
	return r;
}


/* {REFLECTED_AMBIENT_MSG}.reflected */
EIF_TYPED_VALUE F67_1207 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1042,Dtype(Current)));
	return r;
}


/* {REFLECTED_AMBIENT_MSG}.ambient */
EIF_TYPED_VALUE F67_1208 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1043,Dtype(Current)));
	return r;
}


/* {REFLECTED_AMBIENT_MSG}.set_from_pointer */
void F67_1209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(66, Current, 1270);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	tr1 = RTLNSMART(RTWCT(939, dtype, Dftype(Current)).id);
	up1 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1044, dtype))(Current, up1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(805, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1038, 0x18000000, 1); /* reflected_min */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1045, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1038, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1039, 0x18000000, 1); /* reflected_max */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1046, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1039, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1040, 0x18000000, 1); /* ambient_min */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1047, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1040, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1041, 0x18000000, 1); /* ambient_max */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1048, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1041, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1042, 0x18000000, 1); /* reflected */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1049, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1042, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1043, 0x18000000, 1); /* ambient */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1050, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1043, dtype)) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F67_1210 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "allocate_c_msg";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_TYPED_VALUE ur4_5x = {{0}, SK_REAL32};
#define ur4_5 ur4_5x.it_r4
	EIF_TYPED_VALUE ur4_6x = {{0}, SK_REAL32};
#define ur4_6 ur4_6x.it_r4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 66, Current, 1, 0, 1271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(66, Current, 1271);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(812, "allocate_c_msg", tr1))(tr1)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	up1 = loc1;
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1038, dtype));
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(1039, dtype));
	ur4_2 = tr4_2;
	tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(1040, dtype));
	ur4_3 = tr4_3;
	tr4_4 = *(EIF_REAL_32 *)(Current + RTWA(1041, dtype));
	ur4_4 = tr4_4;
	tr4_5 = *(EIF_REAL_32 *)(Current + RTWA(1042, dtype));
	ur4_5 = tr4_5;
	tr4_6 = *(EIF_REAL_32 *)(Current + RTWA(1043, dtype));
	ur4_6 = tr4_6;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1051, dtype))(Current, up1x, ur4_1x, ur4_2x, ur4_3x, ur4_4x, ur4_5x, ur4_6x)).it_p);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(813, "deallocate_c_msg", tr1))(tr1, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
#undef ur4_5
#undef ur4_6
}

/* {REFLECTED_AMBIENT_MSG}.deallocate_c_msg */
void F67_1211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1272);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1272);
	RTIV(Current, RTAL);
	inline_F67_1211 ((EIF_POINTER) arg1);
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

/* {REFLECTED_AMBIENT_MSG}.get_header_from_c */
EIF_TYPED_VALUE F67_1212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_header_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1273);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1273);
	RTIV(Current, RTAL);
	Result = inline_F67_1212 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.get_reflected_min_from_c */
EIF_TYPED_VALUE F67_1213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_reflected_min_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1274);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1274);
	RTIV(Current, RTAL);
	Result = inline_F67_1213 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.get_reflected_max_from_c */
EIF_TYPED_VALUE F67_1214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_reflected_max_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1275);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1275);
	RTIV(Current, RTAL);
	Result = inline_F67_1214 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.get_ambient_min_from_c */
EIF_TYPED_VALUE F67_1215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_ambient_min_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1276);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1276);
	RTIV(Current, RTAL);
	Result = inline_F67_1215 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.get_ambient_max_from_c */
EIF_TYPED_VALUE F67_1216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_ambient_max_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1277);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1277);
	RTIV(Current, RTAL);
	Result = inline_F67_1216 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.get_reflected_from_c */
EIF_TYPED_VALUE F67_1217 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_reflected_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1278);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1278);
	RTIV(Current, RTAL);
	Result = inline_F67_1217 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.get_ambient_from_c */
EIF_TYPED_VALUE F67_1218 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_ambient_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 1, 1279);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1279);
	RTIV(Current, RTAL);
	Result = inline_F67_1218 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.c_ros_advertize */
void F67_1219 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 66, Current, 0, 3, 1280);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1280);
	RTIV(Current, RTAL);
	inline_F67_1219 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
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

/* {REFLECTED_AMBIENT_MSG}.c_ros_publish */
void F67_1220 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 66, Current, 0, 2, 1281);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1281);
	RTIV(Current, RTAL);
	inline_F67_1220 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
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

/* {REFLECTED_AMBIENT_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F67_1221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "c_msg_ptr";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
#define arg5 arg5x.it_r4
#define arg6 arg6x.it_r4
#define arg7 arg7x.it_r4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r4 = * (EIF_REAL_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r4 = * (EIF_REAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r4 = * (EIF_REAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU(SK_REAL32,&arg5);
	RTLU(SK_REAL32,&arg6);
	RTLU(SK_REAL32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 66, Current, 0, 7, 1282);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1282);
	RTIV(Current, RTAL);
	Result = inline_F67_1221 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2, (EIF_REAL_32) arg3, (EIF_REAL_32) arg4, (EIF_REAL_32) arg5, (EIF_REAL_32) arg6, (EIF_REAL_32) arg7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {REFLECTED_AMBIENT_MSG}.subscribe_to_ros */
void F67_1222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 66, Current, 0, 4, 1283);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(66, Current, 1283);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F67_1222 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
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

void EIF_Minit67 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
