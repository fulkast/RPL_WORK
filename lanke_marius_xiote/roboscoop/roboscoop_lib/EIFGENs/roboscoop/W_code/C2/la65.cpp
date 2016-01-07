/*
 * Code for class LASER_SCAN_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F65_1144(EIF_REFERENCE);
extern void F65_1145(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F65_1146(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1147(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1148(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1151(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1152(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1153(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1154(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1155(EIF_REFERENCE);
extern void F65_1156(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1157(EIF_REFERENCE);
extern void F65_1158(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F65_1159(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1160(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1161(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1162(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1163(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1164(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1165(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1166(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1167(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1168(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1169(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F65_1170(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F65_1171(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F65_1172(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F65_1173(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1174(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F65_1175(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit65(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "sensor_msgs/LaserScan.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F65_1158
static void inline_F65_1158 (EIF_POINTER arg1)
{
	delete (sensor_msgs::LaserScan*)arg1;
	;
}
#define INLINE_F65_1158
#endif
#ifndef INLINE_F65_1159
static void inline_F65_1159 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	memcpy ((EIF_REAL_32 *)arg1, arg2, arg3 * sizeof (EIF_REAL_32));
	;
}
#define INLINE_F65_1159
#endif
#ifndef INLINE_F65_1160
static EIF_POINTER inline_F65_1160 (EIF_POINTER arg1)
{
	return &(((sensor_msgs::LaserScan*)(arg1))->header);
	;
}
#define INLINE_F65_1160
#endif
#ifndef INLINE_F65_1161
static EIF_REAL_32 inline_F65_1161 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->angle_min);
	;
}
#define INLINE_F65_1161
#endif
#ifndef INLINE_F65_1162
static EIF_REAL_32 inline_F65_1162 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->angle_max);
	;
}
#define INLINE_F65_1162
#endif
#ifndef INLINE_F65_1163
static EIF_REAL_32 inline_F65_1163 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->angle_increment);
	;
}
#define INLINE_F65_1163
#endif
#ifndef INLINE_F65_1164
static EIF_REAL_32 inline_F65_1164 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->time_increment);
	;
}
#define INLINE_F65_1164
#endif
#ifndef INLINE_F65_1165
static EIF_REAL_32 inline_F65_1165 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->scan_time);
	;
}
#define INLINE_F65_1165
#endif
#ifndef INLINE_F65_1166
static EIF_REAL_32 inline_F65_1166 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->range_min);
	;
}
#define INLINE_F65_1166
#endif
#ifndef INLINE_F65_1167
static EIF_REAL_32 inline_F65_1167 (EIF_POINTER arg1)
{
	return (float)(((sensor_msgs::LaserScan*)(arg1))->range_max);
	;
}
#define INLINE_F65_1167
#endif
#ifndef INLINE_F65_1168
static EIF_INTEGER_32 inline_F65_1168 (EIF_POINTER arg1)
{
	return (int)(((sensor_msgs::LaserScan*)(arg1))->ranges.size());
	;
}
#define INLINE_F65_1168
#endif
#ifndef INLINE_F65_1169
static EIF_INTEGER_32 inline_F65_1169 (EIF_POINTER arg1)
{
	return (int)(((sensor_msgs::LaserScan*)(arg1))->intensities.size());
	;
}
#define INLINE_F65_1169
#endif
#ifndef INLINE_F65_1170
static void inline_F65_1170 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	memcpy ((EIF_REAL_32 *)arg1, (((sensor_msgs::LaserScan*)(arg2))->ranges.data()), arg3 * sizeof (EIF_REAL_32));
	;
}
#define INLINE_F65_1170
#endif
#ifndef INLINE_F65_1171
static void inline_F65_1171 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	memcpy ((EIF_REAL_32 *)arg1, (((sensor_msgs::LaserScan*)(arg2))->intensities.data()), arg3 * sizeof (EIF_REAL_32));
	;
}
#define INLINE_F65_1171
#endif
#ifndef INLINE_F65_1172
static void inline_F65_1172 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <sensor_msgs::LaserScan> (arg2, arg3);
	;
}
#define INLINE_F65_1172
#endif
#ifndef INLINE_F65_1173
static void inline_F65_1173 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <sensor_msgs::LaserScan> (*((sensor_msgs::LaserScan*)arg2));
	;
}
#define INLINE_F65_1173
#endif
#ifndef INLINE_F65_1174
static EIF_POINTER inline_F65_1174 (EIF_POINTER arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6, EIF_REAL_32 arg7, EIF_REAL_32 arg8, EIF_POINTER arg9, EIF_POINTER arg10, EIF_INTEGER_32 arg11, EIF_INTEGER_32 arg12)
{
	sensor_msgs::LaserScan* msg = new sensor_msgs::LaserScan();
msg->header = *((std_msgs::Header*)arg1);
msg->angle_min = arg2;
msg->angle_max = arg3;
msg->angle_increment = arg4;
msg->time_increment = arg5;
msg->scan_time = arg6;
msg->range_min = arg7;
msg->range_max = arg8;
msg->ranges = std::vector<float>((float*)arg9, (float*)arg9 + arg11);
msg->intensities = std::vector<float>((float*)arg10, (float*)arg10 + arg12);
return msg;
	;
}
#define INLINE_F65_1174
#endif
#ifndef INLINE_F65_1175
static void inline_F65_1175 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<sensor_msgs::LaserScan, sensor_msgs::LaserScan::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F65_1175
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LASER_SCAN_MSG}.make_empty */
void F65_1144 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_empty";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1214);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1214);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	tr1 = RTLNSMART(RTWCT(939, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1005, 0xF800029E, 0); /* ranges */
	tr1 = RTLNSMART(RTWCT(1005, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3080, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1005, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1006, 0xF800029E, 0); /* intensities */
	tr1 = RTLNSMART(RTWCT(1006, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3080, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1006, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {LASER_SCAN_MSG}.make_from_pointer */
void F65_1145 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1215);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(64, Current, 1215);
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

/* {LASER_SCAN_MSG}.make_with_values */
void F65_1146 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
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
#define arg8 arg8x.it_r4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_r4 = * (EIF_REAL_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r4 = * (EIF_REAL_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r4 = * (EIF_REAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r4 = * (EIF_REAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg9);
	RTLR(2,arg10);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU(SK_REAL32,&arg5);
	RTLU(SK_REAL32,&arg6);
	RTLU(SK_REAL32,&arg7);
	RTLU(SK_REAL32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_REF,&arg10);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 10, 1216);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1216);
	RTCC(arg1, 64, l_feature_name, 1, eif_new_type(51, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,670,264,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 64, l_feature_name, 9, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,670,264,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg10, 64, l_feature_name, 10, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 998, 0x18000000, 1); /* angle_min */
	*(EIF_REAL_32 *)(Current + RTWA(998, dtype)) = (EIF_REAL_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 999, 0x18000000, 1); /* angle_max */
	*(EIF_REAL_32 *)(Current + RTWA(999, dtype)) = (EIF_REAL_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1000, 0x18000000, 1); /* angle_increment */
	*(EIF_REAL_32 *)(Current + RTWA(1000, dtype)) = (EIF_REAL_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1001, 0x18000000, 1); /* time_increment */
	*(EIF_REAL_32 *)(Current + RTWA(1001, dtype)) = (EIF_REAL_32) arg5;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1002, 0x18000000, 1); /* scan_time */
	*(EIF_REAL_32 *)(Current + RTWA(1002, dtype)) = (EIF_REAL_32) arg6;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1003, 0x18000000, 1); /* range_min */
	*(EIF_REAL_32 *)(Current + RTWA(1003, dtype)) = (EIF_REAL_32) arg7;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 1004, 0x18000000, 1); /* range_max */
	*(EIF_REAL_32 *)(Current + RTWA(1004, dtype)) = (EIF_REAL_32) arg8;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 1005, 0xF800029E, 0); /* ranges */
	tr1 = RTLNSMART(RTWCT(1005, dtype, Dftype(Current)).id);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	ur4_1 = tr4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg9))(arg9)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ur4_1x, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1005, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1005, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(10,2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr2))(tr2)).it_p);
	up1 = tp1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", arg9))(arg9)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(10,3);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr1))(tr1)).it_p);
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg9))(arg9)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1007, dtype))(Current, up1x, up2x, ui4_1x);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 1006, 0xF800029E, 0); /* intensities */
	tr1 = RTLNSMART(RTWCT(1006, dtype, Dftype(Current)).id);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	ur4_1 = tr4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg10))(arg10)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ur4_1x, ui4_1x, ui4_2x);
	RTNHOOK(11,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1006, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1006, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(12,2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr2))(tr2)).it_p);
	up1 = tp1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", arg10))(arg10)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(12,3);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr1))(tr1)).it_p);
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg10))(arg10)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1007, dtype))(Current, up1x, up2x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LASER_SCAN_MSG}.angle_min */
EIF_TYPED_VALUE F65_1147 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(998,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.angle_max */
EIF_TYPED_VALUE F65_1148 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(999,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.angle_increment */
EIF_TYPED_VALUE F65_1149 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1000,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.time_increment */
EIF_TYPED_VALUE F65_1150 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1001,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.scan_time */
EIF_TYPED_VALUE F65_1151 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1002,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.range_min */
EIF_TYPED_VALUE F65_1152 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1003,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.range_max */
EIF_TYPED_VALUE F65_1153 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(1004,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.ranges */
EIF_TYPED_VALUE F65_1154 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1005,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.intensities */
EIF_TYPED_VALUE F65_1155 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1006,Dtype(Current)));
	return r;
}


/* {LASER_SCAN_MSG}.set_from_pointer */
void F65_1156 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1226);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1226);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 998, 0x18000000, 1); /* angle_min */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1009, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(998, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 999, 0x18000000, 1); /* angle_max */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1010, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(999, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1000, 0x18000000, 1); /* angle_increment */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1011, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1000, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1001, 0x18000000, 1); /* time_increment */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1012, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1001, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1002, 0x18000000, 1); /* scan_time */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1013, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1002, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1003, 0x18000000, 1); /* range_min */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1014, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1003, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1004, 0x18000000, 1); /* range_max */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1015, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(1004, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 939, 0xF8000033, 0); /* header */
	tr1 = RTLNSMART(RTWCT(939, dtype, Dftype(Current)).id);
	up1 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1008, dtype))(Current, up1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(805, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(8,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 1005, 0xF800029E, 0); /* ranges */
	tr1 = RTLNSMART(RTWCT(1005, dtype, Dftype(Current)).id);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	ur4_1 = tr4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1016, dtype))(Current, up1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ur4_1x, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1005, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 1006, 0xF800029E, 0); /* intensities */
	tr1 = RTLNSMART(RTWCT(1006, dtype, Dftype(Current)).id);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	ur4_1 = tr4_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1017, dtype))(Current, up1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ur4_1x, ui4_1x, ui4_2x);
	RTNHOOK(10,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1006, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1005, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(11,2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr2))(tr2)).it_p);
	up1 = tp1;
	up2 = arg1;
	tr1 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1005, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	RTNHOOK(11,3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1018, dtype))(Current, up1x, up2x, ui4_1x);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1006, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(12,2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr2))(tr2)).it_p);
	up1 = tp1;
	up2 = arg1;
	tr1 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1006, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	RTNHOOK(12,3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1019, dtype))(Current, up1x, up2x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {LASER_SCAN_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F65_1157 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "allocate_c_msg";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
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
	EIF_TYPED_VALUE ur4_7x = {{0}, SK_REAL32};
#define ur4_7 ur4_7x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_REAL_32 tr4_5;
	EIF_REAL_32 tr4_6;
	EIF_REAL_32 tr4_7;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1227);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1227);
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
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(998, dtype));
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(999, dtype));
	ur4_2 = tr4_2;
	tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(1000, dtype));
	ur4_3 = tr4_3;
	tr4_4 = *(EIF_REAL_32 *)(Current + RTWA(1001, dtype));
	ur4_4 = tr4_4;
	tr4_5 = *(EIF_REAL_32 *)(Current + RTWA(1002, dtype));
	ur4_5 = tr4_5;
	tr4_6 = *(EIF_REAL_32 *)(Current + RTWA(1003, dtype));
	ur4_6 = tr4_6;
	tr4_7 = *(EIF_REAL_32 *)(Current + RTWA(1004, dtype));
	ur4_7 = tr4_7;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1005, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", tr1))(tr1)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	RTNHOOK(2,2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr2))(tr2)).it_p);
	up2 = tp1;
	tr1 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1006, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	RTNHOOK(2,3);
	tr2 = ((up4x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3071, "area", tr1))(tr1)), (((up4x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up4x.it_r = RTBU(up4x))), (up4x.type = SK_POINTER), up4x.it_r);
	RTNHOOK(2,4);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2871, "base_address", tr2))(tr2)).it_p);
	up3 = tp2;
	tr1 = ((up4x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1005, dtype))(Current)), (((up4x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up4x.it_r = RTBU(up4x))), (up4x.type = SK_POINTER), up4x.it_r);
	RTNHOOK(2,5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	tr1 = ((up4x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1006, dtype))(Current)), (((up4x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up4x.it_r = RTBU(up4x))), (up4x.type = SK_POINTER), up4x.it_r);
	RTNHOOK(2,6);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr1))(tr1)).it_i4);
	ui4_2 = ti4_2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1020, dtype))(Current, up1x, ur4_1x, ur4_2x, ur4_3x, ur4_4x, ur4_5x, ur4_6x, ur4_7x, up2x, up3x, ui4_1x, ui4_2x)).it_p);
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
#undef up3
#undef up4
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
#undef ur4_5
#undef ur4_6
#undef ur4_7
#undef ui4_1
#undef ui4_2
}

/* {LASER_SCAN_MSG}.deallocate_c_msg */
void F65_1158 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1228);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1228);
	RTIV(Current, RTAL);
	inline_F65_1158 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.copy_float_array_data */
void F65_1159 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "copy_float_array_data";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 3, 1229);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1229);
	RTIV(Current, RTAL);
	inline_F65_1159 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
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

/* {LASER_SCAN_MSG}.get_header_from_c */
EIF_TYPED_VALUE F65_1160 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1230);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1230);
	RTIV(Current, RTAL);
	Result = inline_F65_1160 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_angle_min_from_c */
EIF_TYPED_VALUE F65_1161 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_angle_min_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1231);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1231);
	RTIV(Current, RTAL);
	Result = inline_F65_1161 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_angle_max_from_c */
EIF_TYPED_VALUE F65_1162 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_angle_max_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1232);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1232);
	RTIV(Current, RTAL);
	Result = inline_F65_1162 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_angle_increment_from_c */
EIF_TYPED_VALUE F65_1163 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_angle_increment_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1233);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1233);
	RTIV(Current, RTAL);
	Result = inline_F65_1163 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_time_increment_from_c */
EIF_TYPED_VALUE F65_1164 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_time_increment_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1234);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1234);
	RTIV(Current, RTAL);
	Result = inline_F65_1164 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_scan_time_from_c */
EIF_TYPED_VALUE F65_1165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_scan_time_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1235);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1235);
	RTIV(Current, RTAL);
	Result = inline_F65_1165 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_range_min_from_c */
EIF_TYPED_VALUE F65_1166 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_range_min_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1236);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1236);
	RTIV(Current, RTAL);
	Result = inline_F65_1166 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_range_max_from_c */
EIF_TYPED_VALUE F65_1167 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_range_max_from_c";
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
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1237);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1237);
	RTIV(Current, RTAL);
	Result = inline_F65_1167 ((EIF_POINTER) arg1);
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

/* {LASER_SCAN_MSG}.get_ranges_count_from_c */
EIF_TYPED_VALUE F65_1168 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_ranges_count_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1238);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1238);
	RTIV(Current, RTAL);
	Result = inline_F65_1168 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {LASER_SCAN_MSG}.get_intensities_count_from_c */
EIF_TYPED_VALUE F65_1169 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_intensities_count_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1239);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1239);
	RTIV(Current, RTAL);
	Result = inline_F65_1169 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {LASER_SCAN_MSG}.copy_ranges_from_c */
void F65_1170 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "copy_ranges_from_c";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 3, 1240);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1240);
	RTIV(Current, RTAL);
	inline_F65_1170 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
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

/* {LASER_SCAN_MSG}.copy_intensities_from_c */
void F65_1171 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "copy_intensities_from_c";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 3, 1241);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1241);
	RTIV(Current, RTAL);
	inline_F65_1171 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
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

/* {LASER_SCAN_MSG}.c_ros_advertize */
void F65_1172 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	
	RTEAA(l_feature_name, 64, Current, 0, 3, 1242);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1242);
	RTIV(Current, RTAL);
	inline_F65_1172 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
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

/* {LASER_SCAN_MSG}.c_ros_publish */
void F65_1173 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 64, Current, 0, 2, 1243);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1243);
	RTIV(Current, RTAL);
	inline_F65_1173 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
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

/* {LASER_SCAN_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F65_1174 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x)
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
#define arg8 arg8x.it_r4
#define arg9 arg9x.it_p
#define arg10 arg10x.it_p
#define arg11 arg11x.it_i4
#define arg12 arg12x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg12x.type & SK_HEAD) == SK_REF) arg12x.it_i4 = * (EIF_INTEGER_32 *) arg12x.it_r;
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_p = * (EIF_POINTER *) arg10x.it_r;
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_p = * (EIF_POINTER *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_r4 = * (EIF_REAL_32 *) arg8x.it_r;
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
	RTLU(SK_REAL32,&arg8);
	RTLU(SK_POINTER,&arg9);
	RTLU(SK_POINTER,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_INT32,&arg12);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 12, 1244);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1244);
	RTIV(Current, RTAL);
	Result = inline_F65_1174 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2, (EIF_REAL_32) arg3, (EIF_REAL_32) arg4, (EIF_REAL_32) arg5, (EIF_REAL_32) arg6, (EIF_REAL_32) arg7, (EIF_REAL_32) arg8, (EIF_POINTER) arg9, (EIF_POINTER) arg10, (EIF_INTEGER_32) arg11, (EIF_INTEGER_32) arg12);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LASER_SCAN_MSG}.subscribe_to_ros */
void F65_1175 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
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
	
	RTEAA(l_feature_name, 64, Current, 0, 4, 1245);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(64, Current, 1245);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F65_1175 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
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

void EIF_Minit65 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
