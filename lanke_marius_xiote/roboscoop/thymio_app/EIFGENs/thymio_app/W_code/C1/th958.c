/*
 * Code for class THYMIO_RANGE_GROUP_WRAPPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F958_7868(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F958_7869(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F958_7870(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7873(EIF_REFERENCE);
extern void F958_7874(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7876(EIF_REFERENCE);
extern void EIF_Minit958(void);

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

/* {THYMIO_RANGE_GROUP_WRAPPER}.make */
void F958_7868 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 957, Current, 1, 1, 13485);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13485);
	RTCC(arg1, 957, l_feature_name, 1, eif_new_type(969, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5573, 0x10000000, 1); /* total_number_of_sensors */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5757, "total_number_of_sensors", arg1, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5757, "total_number_of_sensors", arg1))(arg1)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	*(EIF_INTEGER_32 *)(Current + RTWA(5573, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5574, 0x10000000, 1); /* number_of_front_sensors */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5758, "number_of_front_sensors", arg1, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5758, "number_of_front_sensors", arg1))(arg1)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	*(EIF_INTEGER_32 *)(Current + RTWA(5574, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5575, 0x10000000, 1); /* number_of_back_sensors */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5759, "number_of_back_sensors", arg1, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5759, "number_of_back_sensors", arg1))(arg1)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	*(EIF_INTEGER_32 *)(Current + RTWA(5575, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5576, 0xF800018C, 0); /* sensor_distances */
	tr1 = RTLNSMART(RTWCT(5576, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5573, dtype));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3082, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5576, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5758, "number_of_front_sensors", arg1, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5758, "number_of_front_sensors", arg1))(arg1)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5576, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5760, "front_sensor_distance", arg1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5760, "front_sensor_distance", arg1))(arg1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	for (;;) {
		RTHOOK(9);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5573, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5576, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5761, "back_sensor_distance", arg1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5761, "back_sensor_distance", arg1))(arg1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5577, 0xF800018C, 0); /* sensor_angles */
	tr1 = RTLNSMART(RTWCT(5577, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5573, dtype));
	ui4_2 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3082, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(12,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5577, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5762, "sensor_angle_front_1", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5762, "sensor_angle_front_1", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5763, "sensor_angle_front_2", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5763, "sensor_angle_front_2", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTHOOK(15);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(15,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5764, "sensor_angle_front_3", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5764, "sensor_angle_front_3", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTHOOK(16);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(16,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5765, "sensor_angle_front_4", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5765, "sensor_angle_front_4", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTHOOK(17);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(17,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5766, "sensor_angle_front_5", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5766, "sensor_angle_front_5", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTHOOK(18);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(18,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5767, "sensor_angle_back_1", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5767, "sensor_angle_back_1", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTHOOK(19);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(19,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5768, "sensor_angle_back_2", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5768, "sensor_angle_back_2", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2185, "put", tr1))(tr1, ur8_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {THYMIO_RANGE_GROUP_WRAPPER}.follow_wall_orientation */
EIF_TYPED_VALUE F958_7869 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "follow_wall_orientation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	
	RTEAA(l_feature_name, 957, Current, 10, 5, 13486);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13486);
	RTCC(arg1, 957, l_feature_name, 1, eif_new_type(938, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF8000035, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5463, "get_number_detecting_sensors", arg1, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5463, "get_number_detecting_sensors", arg1))(arg1)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5585, dtype))(Current, ub1x);
		RTHOOK(6);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5464, "get_closest_sensor_index", arg1, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5464, "get_closest_sensor_index", arg1))(arg1)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5581, 0x10000000, 1); /* prev_closest_sensor_index */
		*(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype)) = (EIF_INTEGER_32) loc5;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5582, 0x20000000, 1); /* prev_closest_sensor_range */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5459, "sensors", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
		ui4_1 = ti4_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2182, "i_th", tr1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
			RTS_AC (0, tr2, tp1);
			RTS_CF(1028, "range", tr2, tp1, ur4_1x);
			tr4_1 = (ur4_1x.it_r4);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr2));
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1028, "range", tr2))(tr2)).it_r4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_1 = (EIF_REAL_64) (tr4_1);
		*(EIF_REAL_64 *)(Current + RTWA(5582, dtype)) = (EIF_REAL_64) tr8_1;
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(10);
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5585, dtype))(Current, ub1x);
		RTHOOK(11);
		RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
		ui4_1 = loc5;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(5465, "get_second_closest_sensor_index", arg1, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5465, "get_second_closest_sensor_index", arg1))(arg1, ui4_1x)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		RTDBGAL(Current, 3, 0xF8000035, 0, 0); /* loc3 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5459, "sensors", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ui4_1 = loc5;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2182, "i_th", tr1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
			RTS_AC (0, tr2, tp1);
			RTS_CF(1028, "range", tr2, tp1, ur4_1x);
			tr4_1 = (ur4_1x.it_r4);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr2));
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1028, "range", tr2))(tr2)).it_r4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_1 = (EIF_REAL_64) (tr4_1);
		ur8_1 = tr8_1;
		ui4_1 = loc5;
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5578, dtype))(Current, ur8_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(13);
		RTDBGAL(Current, 4, 0xF8000035, 0, 0); /* loc4 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5459, "sensors", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ui4_1 = loc6;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2182, "i_th", tr1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
			RTS_AC (0, tr2, tp1);
			RTS_CF(1028, "range", tr2, tp1, ur4_1x);
			tr4_1 = (ur4_1x.it_r4);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr2));
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1028, "range", tr2))(tr2)).it_r4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_1 = (EIF_REAL_64) (tr4_1);
		ur8_1 = tr8_1;
		ui4_1 = loc6;
		loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5578, dtype))(Current, ur8_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(14);
		RTDBGAL(Current, 7, 0x20000000, 1, 0); /* loc7 */
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc4);
		loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5550, dtype))(Current, ur1x, ur2x)).it_r8);
		RTHOOK(15);
		RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc4);
		ur8_1 = loc7;
		ur8_2 = arg2;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5551, dtype))(Current, ur1x, ur2x, ur8_1x, ur8_2x)).it_r8);
	} else {
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(17);
			RTDBGAL(Current, 9, 0x20000000, 1, 0); /* loc9 */
			loc9 = (EIF_REAL_64) (EIF_REAL_64) 0.12;
			RTHOOK(18);
			RTDBGAL(Current, 10, 0x20000000, 1, 0); /* loc10 */
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 8L));
			loc10 = (EIF_REAL_64) tr8_1;
			RTHOOK(19);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5459, "sensors", arg1, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
			ui4_1 = ti4_1;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (1, tr1, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(2182, "i_th", tr1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
				RTS_AC (0, tr2, tp1);
				RTS_CF(1028, "range", tr2, tp1, ur4_1x);
				tr4_1 = (ur4_1x.it_r4);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr2));
				tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1028, "range", tr2))(tr2)).it_r4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.101);
			if ((EIF_BOOLEAN) (tr4_1 > tr4_2)) {
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(5466, "is_obstacle_mostly_at_left", arg1, tp1, ub1x);
					tb4 = (ub1x.it_b);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5466, "is_obstacle_mostly_at_left", arg1))(arg1)).it_b);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				tb3 = tb4;
			}
			if (tb3) {
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(5459, "sensors", arg1, tp1, up1x);
					tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				ui4_1 = ((EIF_INTEGER_32) 1L);
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
					RTS_AC (1, tr1, tp1);
					RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
					RTS_CF(2182, "i_th", tr1, tp1, up1x);
					tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTS_IMPERSONATE (RTS_PID(tr1));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
					RTS_AC (0, tr2, tp1);
					RTS_CF(1029, "is_valid_range", tr2, tp1, ub1x);
					tb3 = (ub1x.it_b);
				} else {
					RTS_IMPERSONATE (RTS_PID(tr2));
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1029, "is_valid_range", tr2))(tr2)).it_b);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				tb2 = tb3;
			}
			if (tb2) {
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(5459, "sensors", arg1, tp1, up1x);
					tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				ui4_1 = ((EIF_INTEGER_32) 2L);
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
					RTS_AC (1, tr1, tp1);
					RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
					RTS_CF(2182, "i_th", tr1, tp1, up1x);
					tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTS_IMPERSONATE (RTS_PID(tr1));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
					RTS_AC (0, tr2, tp1);
					RTS_CF(1029, "is_valid_range", tr2, tp1, ub1x);
					tb2 = (ub1x.it_b);
				} else {
					RTS_IMPERSONATE (RTS_PID(tr2));
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1029, "is_valid_range", tr2))(tr2)).it_b);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(20);
				RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
				Result = (EIF_REAL_64) (EIF_REAL_64) 0.0;
			} else {
				RTHOOK(21);
				RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (0, arg1, tp1);
					RTS_CF(5459, "sensors", arg1, tp1, up1x);
					tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "sensors", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
				ui4_1 = ti4_1;
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
					RTS_AC (1, tr1, tp1);
					RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
					RTS_CF(2182, "i_th", tr1, tp1, up1x);
					tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTS_IMPERSONATE (RTS_PID(tr1));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
					RTS_AC (0, tr2, tp1);
					RTS_CF(1028, "range", tr2, tp1, ur4_1x);
					tr4_1 = (ur4_1x.it_r4);
				} else {
					RTS_IMPERSONATE (RTS_PID(tr2));
					tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1028, "range", tr2))(tr2)).it_r4);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				tr8_1 = (EIF_REAL_64) (tr4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr1 = RTLN(eif_new_type(258, 0x00).id);
				*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) 3.0 - tr8_2);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4404, "sign", tr1))(tr1)).it_i4);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc10 * (EIF_REAL_64) (tr8_1 - loc9)) * tr8_2);
			}
		} else {
			RTHOOK(22);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(23);
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5587, dtype))(Current)).it_r8);
				if ((EIF_BOOLEAN) (arg3 < (EIF_REAL_64) (arg4 + (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (arg5))))) {
					RTHOOK(24);
					RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
					Result = (EIF_REAL_64) (EIF_REAL_64) 0.0;
				} else {
					RTHOOK(25);
					RTDBGAL(Current, 8, 0x20000000, 1, 0); /* loc8 */
					loc8 = (EIF_REAL_64) (EIF_REAL_64) 0.11;
					RTHOOK(26);
					RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
					tr8_1 = (EIF_REAL_64) (ti4_1);
					tr1 = RTLN(eif_new_type(258, 0x00).id);
					*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) 3.0 - tr8_1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4404, "sign", tr1))(tr1)).it_i4);
					tr8_1 = (EIF_REAL_64) ((ti4_1));
					Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg5) /  (EIF_REAL_64) (loc8)) * tr8_1);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ur4_1
#undef ui4_1
#undef ub1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {THYMIO_RANGE_GROUP_WRAPPER}.prev_closest_sensor_index */
EIF_TYPED_VALUE F958_7870 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5581,Dtype(Current)));
	return r;
}


/* {THYMIO_RANGE_GROUP_WRAPPER}.prev_closest_sensor_range */
EIF_TYPED_VALUE F958_7871 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5582,Dtype(Current)));
	return r;
}


/* {THYMIO_RANGE_GROUP_WRAPPER}.is_obstacle_vanished */
EIF_TYPED_VALUE F958_7872 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5583,Dtype(Current)));
	return r;
}


/* {THYMIO_RANGE_GROUP_WRAPPER}.time_steps_obstacle_vanished */
EIF_TYPED_VALUE F958_7873 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5584,Dtype(Current)));
	return r;
}


/* {THYMIO_RANGE_GROUP_WRAPPER}.set_obstacle_vanished */
void F958_7874 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_obstacle_vanished";
	RTEX;
#define arg1 arg1x.it_b
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13482);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13482);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_BOOLEAN) 0)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 5583, 0x04000000, 1); /* is_obstacle_vanished */
		*(EIF_BOOLEAN *)(Current + RTWA(5583, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5584, 0x20000000, 1); /* time_steps_obstacle_vanished */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		*(EIF_REAL_64 *)(Current + RTWA(5584, dtype)) = (EIF_REAL_64) tr8_1;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5583, 0x04000000, 1); /* is_obstacle_vanished */
		*(EIF_BOOLEAN *)(Current + RTWA(5583, dtype)) = (EIF_BOOLEAN) arg1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {THYMIO_RANGE_GROUP_WRAPPER}.increment_obstacle_vanished_time_steps */
void F958_7875 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "increment_obstacle_vanished_time_steps";
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
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13483);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13483);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5584, 0x20000000, 1); /* time_steps_obstacle_vanished */
	(*(EIF_REAL_64 *)(Current + RTWA(5584, dtype))) += (EIF_REAL_64) 0.00195;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {THYMIO_RANGE_GROUP_WRAPPER}.distance_corner_turn_point */
EIF_TYPED_VALUE F958_7876 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "distance_corner_turn_point";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13484);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13484);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5582, dtype));
	ur8_1 = tr8_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5578, dtype))(Current, ur8_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(898, "x", tr1));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5577, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5581, dtype));
	ui4_1 = ti4_1;
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2182, "item", tr1))(tr1, ui4_1x)).it_r8);
	ur8_1 = tr8_2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1896, dtype))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef ui4_1
}

void EIF_Minit958 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
