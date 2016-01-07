/*
 * Code for class RANGE_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F66_1176(EIF_REFERENCE);
extern void F66_1177(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F66_1178(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1179(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1180(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1181(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1182(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1183(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1184(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1185(EIF_REFERENCE);
extern EIF_TYPED_VALUE F66_1186(EIF_REFERENCE);
extern void F66_1187(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1188(EIF_REFERENCE);
extern void F66_1189(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1190(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1191(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1192(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1193(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1194(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1195(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F66_1196(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F66_1197(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F66_1198(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F66_1199(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit66(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "sensor_msgs/Range.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F66_1189
static void inline_F66_1189 (EIF_POINTER arg1)
{
	delete (sensor_msgs::Range*)arg1;
	;
}
#define INLINE_F66_1189
#endif
#ifndef INLINE_F66_1190
static EIF_POINTER inline_F66_1190 (EIF_POINTER arg1)
{
	return &(((sensor_msgs::Range*)(arg1))->header);
	;
}
#define INLINE_F66_1190
#endif
#ifndef INLINE_F66_1191
static EIF_NATURAL_8 inline_F66_1191 (EIF_POINTER arg1)
{
	return (uint8_t)(((sensor_msgs::Range*)(arg1))->radiation_type);
	;
}
#define INLINE_F66_1191
#endif
#ifndef INLINE_F66_1192
static EIF_REAL_32 inline_F66_1192 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::Range*)(arg1))->field_of_view);
	;
}
#define INLINE_F66_1192
#endif
#ifndef INLINE_F66_1193
static EIF_REAL_32 inline_F66_1193 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::Range*)(arg1))->min_range);
	;
}
#define INLINE_F66_1193
#endif
#ifndef INLINE_F66_1194
static EIF_REAL_32 inline_F66_1194 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::Range*)(arg1))->max_range);
	;
}
#define INLINE_F66_1194
#endif
#ifndef INLINE_F66_1195
static EIF_REAL_32 inline_F66_1195 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::Range*)(arg1))->range);
	;
}
#define INLINE_F66_1195
#endif
#ifndef INLINE_F66_1196
static void inline_F66_1196 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <sensor_msgs::Range> (arg2, arg3);
	;
}
#define INLINE_F66_1196
#endif
#ifndef INLINE_F66_1197
static void inline_F66_1197 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <sensor_msgs::Range> (*((sensor_msgs::Range*)arg2));
	;
}
#define INLINE_F66_1197
#endif
#ifndef INLINE_F66_1198
static EIF_POINTER inline_F66_1198 (EIF_POINTER arg1, EIF_NATURAL_8 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6)
{
	sensor_msgs::Range* msg = new sensor_msgs::Range();
msg->header = *((std_msgs::Header*)arg1);
msg->radiation_type = arg2;
msg->field_of_view = arg3;
msg->min_range = arg4;
msg->max_range = arg5;
msg->range = arg6;
return msg;
	;
}
#define INLINE_F66_1198
#endif
#ifndef INLINE_F66_1199
static void inline_F66_1199 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<sensor_msgs::Range, sensor_msgs::Range::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F66_1199
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANGE_MSG}.make_empty */
void F66_1176 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 0, 1268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1268);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	tr1 = RTLNSMART(RTWCT(939, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1028, 0x18000000, 1); /* range */
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) -1.0);
	*(EIF_REAL_32 *)(Current + RTWA(1028, dtype)) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {RANGE_MSG}.make_from_pointer */
void F66_1177 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1269);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(65, Current, 1269);
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

/* {RANGE_MSG}.make_with_values */
void F66_1178 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "make_with_values";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n1
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
#define arg5 arg5x.it_r4
#define arg6 arg6x.it_r4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r4 = * (EIF_REAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r4 = * (EIF_REAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU(SK_REAL32,&arg5);
	RTLU(SK_REAL32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 65, Current, 0, 6, 1246);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1246);
	RTCC(arg1, 65, l_feature_name, 1, eif_new_type(51, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1024, 0x30000000, 1); /* radiation_type */
	*(EIF_NATURAL_8 *)(Current + RTWA(1024, dtype)) = (EIF_NATURAL_8) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1025, 0x18000000, 1); /* field_of_view */
	*(EIF_REAL_32 *)(Current + RTWA(1025, dtype)) = (EIF_REAL_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1026, 0x18000000, 1); /* min_range */
	*(EIF_REAL_32 *)(Current + RTWA(1026, dtype)) = (EIF_REAL_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1027, 0x18000000, 1); /* max_range */
	*(EIF_REAL_32 *)(Current + RTWA(1027, dtype)) = (EIF_REAL_32) arg5;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1028, 0x18000000, 1); /* range */
	*(EIF_REAL_32 *)(Current + RTWA(1028, dtype)) = (EIF_REAL_32) arg6;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RANGE_MSG}.type_ultrasound */
EIF_TYPED_VALUE F66_1179 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 0U);
	return r;
}

/* {RANGE_MSG}.type_infrared */
EIF_TYPED_VALUE F66_1180 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {RANGE_MSG}.radiation_type */
EIF_TYPED_VALUE F66_1181 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(1024,Dtype(Current)));
	return r;
}


/* {RANGE_MSG}.field_of_view */
EIF_TYPED_VALUE F66_1182 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1025,Dtype(Current)));
	return r;
}


/* {RANGE_MSG}.min_range */
EIF_TYPED_VALUE F66_1183 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1026,Dtype(Current)));
	return r;
}


/* {RANGE_MSG}.max_range */
EIF_TYPED_VALUE F66_1184 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1027,Dtype(Current)));
	return r;
}


/* {RANGE_MSG}.range */
EIF_TYPED_VALUE F66_1185 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1028,Dtype(Current)));
	return r;
}


/* {RANGE_MSG}.is_valid_range */
EIF_TYPED_VALUE F66_1186 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_range";
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 65, Current, 0, 0, 1254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1254);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1028, dtype));
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(1026, dtype));
	tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(1028, dtype));
	tr4_4 = *(EIF_REAL_32 *)(Current + RTWA(1027, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tr4_1 >= tr4_2) && (EIF_BOOLEAN) (tr4_3 <= tr4_4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {RANGE_MSG}.set_from_pointer */
void F66_1187 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	EIF_NATURAL_8 tu1_1;
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1255);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	tr1 = RTLNSMART(RTWCT(939, dtype, Dftype(Current)).id);
	up1 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1030, dtype))(Current, up1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(805, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1024, 0x30000000, 1); /* radiation_type */
	up1 = arg1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1031, dtype))(Current, up1x)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(1024, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1025, 0x18000000, 1); /* field_of_view */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1032, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1025, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1026, 0x18000000, 1); /* min_range */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1033, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1026, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1027, 0x18000000, 1); /* max_range */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1034, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1027, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1028, 0x18000000, 1); /* range */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1035, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1028, dtype)) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {RANGE_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F66_1188 (EIF_REFERENCE Current)
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
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_NATURAL_8 tu1_1;
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
	
	RTEAA(l_feature_name, 65, Current, 1, 0, 1256);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(65, Current, 1256);
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(1024, dtype));
	uu1_1 = tu1_1;
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(1025, dtype));
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(1026, dtype));
	ur4_2 = tr4_2;
	tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(1027, dtype));
	ur4_3 = tr4_3;
	tr4_4 = *(EIF_REAL_32 *)(Current + RTWA(1028, dtype));
	ur4_4 = tr4_4;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1036, dtype))(Current, up1x, uu1_1x, ur4_1x, ur4_2x, ur4_3x, ur4_4x)).it_p);
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
#undef uu1_1
}

/* {RANGE_MSG}.deallocate_c_msg */
void F66_1189 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1257);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1257);
	RTIV(Current, RTAL);
	inline_F66_1189 ((EIF_POINTER) arg1);
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

/* {RANGE_MSG}.get_header_from_c */
EIF_TYPED_VALUE F66_1190 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1258);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1258);
	RTIV(Current, RTAL);
	Result = inline_F66_1190 ((EIF_POINTER) arg1);
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

/* {RANGE_MSG}.get_radiation_type_from_c */
EIF_TYPED_VALUE F66_1191 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_radiation_type_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1259);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1259);
	RTIV(Current, RTAL);
	Result = inline_F66_1191 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {RANGE_MSG}.get_field_of_view_type_from_c */
EIF_TYPED_VALUE F66_1192 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_field_of_view_type_from_c";
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1260);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1260);
	RTIV(Current, RTAL);
	Result = inline_F66_1192 ((EIF_POINTER) arg1);
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

/* {RANGE_MSG}.get_min_range_from_c */
EIF_TYPED_VALUE F66_1193 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_min_range_from_c";
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1261);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1261);
	RTIV(Current, RTAL);
	Result = inline_F66_1193 ((EIF_POINTER) arg1);
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

/* {RANGE_MSG}.get_max_range_from_c */
EIF_TYPED_VALUE F66_1194 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_max_range_from_c";
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1262);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1262);
	RTIV(Current, RTAL);
	Result = inline_F66_1194 ((EIF_POINTER) arg1);
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

/* {RANGE_MSG}.get_range_from_c */
EIF_TYPED_VALUE F66_1195 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_range_from_c";
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
	
	RTEAA(l_feature_name, 65, Current, 0, 1, 1263);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1263);
	RTIV(Current, RTAL);
	Result = inline_F66_1195 ((EIF_POINTER) arg1);
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

/* {RANGE_MSG}.c_ros_advertize */
void F66_1196 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 3, 1264);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1264);
	RTIV(Current, RTAL);
	inline_F66_1196 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
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

/* {RANGE_MSG}.c_ros_publish */
void F66_1197 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 2, 1265);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1265);
	RTIV(Current, RTAL);
	inline_F66_1197 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
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

/* {RANGE_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F66_1198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "c_msg_ptr";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_n1
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
#define arg5 arg5x.it_r4
#define arg6 arg6x.it_r4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r4 = * (EIF_REAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r4 = * (EIF_REAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU(SK_REAL32,&arg5);
	RTLU(SK_REAL32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 65, Current, 0, 6, 1266);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1266);
	RTIV(Current, RTAL);
	Result = inline_F66_1198 ((EIF_POINTER) arg1, (EIF_NATURAL_8) arg2, (EIF_REAL_32) arg3, (EIF_REAL_32) arg4, (EIF_REAL_32) arg5, (EIF_REAL_32) arg6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RANGE_MSG}.subscribe_to_ros */
void F66_1199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 65, Current, 0, 4, 1267);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(65, Current, 1267);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F66_1199 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
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

void EIF_Minit66 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
