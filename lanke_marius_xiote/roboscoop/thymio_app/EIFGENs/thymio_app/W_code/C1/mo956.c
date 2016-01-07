/*
 * Code for class MOVING_TO_GOAL_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F956_7843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7844(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7845(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7846(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7847(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7848(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7849(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F956_7851(EIF_REFERENCE);
extern void F956_7852(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F956_7853(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F956_7854(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F956_7855(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F956_7856(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F956_7857(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F956_7858(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F956_7859(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F956_7860(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit956(void);

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

/* {MOVING_TO_GOAL_SIGNALER}.make */
void F956_7843 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
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
	
	RTEAA(l_feature_name, 955, Current, 0, 0, 13458);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(955, Current, 13458);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5560, 0xF8000035, 0); /* v_leave */
	tr1 = RTLNSMART(RTWCT(5560, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5560, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5562, 0xF8000039, 0); /* localized_time_absolute_pose */
	tr1 = RTLNSMART(RTWCT(5562, dtype, Dftype(Current)).id);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(931, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5562, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5563, 0xF8000035, 0); /* localized_time_absolute_point */
	tr1 = RTLNSMART(RTWCT(5563, dtype, Dftype(Current)).id);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5563, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5561, 0xF8000039, 0); /* localized_time_relative_pose */
	tr1 = RTLNSMART(RTWCT(5561, dtype, Dftype(Current)).id);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(931, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5561, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5558, 0x20000000, 1); /* d_min */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4407, 258))(Current)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(5558, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur8_1
#undef ur8_2
#undef ur8_3
}

/* {MOVING_TO_GOAL_SIGNALER}.is_v_leave_found */
EIF_TYPED_VALUE F956_7844 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5556,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.need_to_reset_cur_goal */
EIF_TYPED_VALUE F956_7845 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5557,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.d_min */
EIF_TYPED_VALUE F956_7846 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5558,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.timestamp_obstacle_last_seen */
EIF_TYPED_VALUE F956_7847 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5559,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.v_leave */
EIF_TYPED_VALUE F956_7848 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5560,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.localized_time_relative_pose */
EIF_TYPED_VALUE F956_7849 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5561,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.localized_time_absolute_pose */
EIF_TYPED_VALUE F956_7850 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5562,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.localized_time_absolute_point */
EIF_TYPED_VALUE F956_7851 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5563,Dtype(Current)));
	return r;
}


/* {MOVING_TO_GOAL_SIGNALER}.set_is_v_leave_found */
void F956_7852 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_v_leave_found";
	RTEX;
#define arg1 arg1x.it_b
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
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13467);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(955, Current, 13467);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5556, 0x04000000, 1); /* is_v_leave_found */
	*(EIF_BOOLEAN *)(Current + RTWA(5556, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.set_need_to_reset_cur_goal */
void F956_7853 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_need_to_reset_cur_goal";
	RTEX;
#define arg1 arg1x.it_b
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
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13468);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(955, Current, 13468);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5557, 0x04000000, 1); /* need_to_reset_cur_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5557, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.set_d_min */
void F956_7854 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_d_min";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13469);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(955, Current, 13469);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5558, 0x20000000, 1); /* d_min */
	*(EIF_REAL_64 *)(Current + RTWA(5558, Dtype(Current))) = (EIF_REAL_64) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.set_timestamp_obstacle_last_seen */
void F956_7855 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_timestamp_obstacle_last_seen";
	RTEX;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 955, Current, 0, 2, 13470);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(955, Current, 13470);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		RTDBGAA(Current, Dtype(Current), 5559, 0x20000000, 1); /* timestamp_obstacle_last_seen */
		*(EIF_REAL_64 *)(Current + RTWA(5559, Dtype(Current))) = (EIF_REAL_64) arg2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.set_v_leave */
void F956_7856 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_v_leave";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13471);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(955, Current, 13471);
	RTCC(arg1, 955, l_feature_name, 1, eif_new_type(53, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5560, 0xF8000035, 0); /* v_leave */
	tr1 = RTLNSMART(RTWCT(5560, Dtype(Current), Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5560, Dtype(Current))) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.set_localized_time_relative_pose */
void F956_7857 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_localized_time_relative_pose";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13472);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(955, Current, 13472);
	RTCC(arg1, 955, l_feature_name, 1, eif_new_type(57, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5561, 0xF8000039, 0); /* localized_time_relative_pose */
	tr1 = RTLNSMART(RTWCT(5561, Dtype(Current), Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5561, Dtype(Current))) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.set_localized_time_absolute_pose */
void F956_7858 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_localized_time_absolute_pose";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13473);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(955, Current, 13473);
	RTCC(arg1, 955, l_feature_name, 1, eif_new_type(57, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5562, 0xF8000039, 0); /* localized_time_absolute_pose */
	tr1 = RTLNSMART(RTWCT(5562, dtype, Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(807, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5562, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5563, 0xF8000035, 0); /* localized_time_absolute_point */
	tr1 = RTLNSMART(RTWCT(5563, dtype, Dftype(Current)).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(932, "x", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(932, "x", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(933, "y", arg1, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(933, "y", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5563, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.convert_robot_frame_coord_to_absolute_coord */
EIF_TYPED_VALUE F956_7859 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "convert_robot_frame_coord_to_absolute_coord";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 955, Current, 1, 2, 13474);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(955, Current, 13474);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000035, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(53, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(932, "x", tr2));
	ur8_1 = (EIF_REAL_64) (arg1 - tr8_1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,2);
	tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(933, "y", tr2));
	ur8_2 = (EIF_REAL_64) (arg2 - tr8_2);
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_3 = tr8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(897, Dtype(tr1)))(tr1, ur8_1x, ur8_2x, ur8_3x);
	RTNHOOK(1,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000035, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5563, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(loc1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5562, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,1);
	tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(934, "theta", tr2));
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5561, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(934, "theta", tr2));
	ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5547, dtype))(Current, ur1x, ur2x, ur8_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef arg2
#undef arg1
}

/* {MOVING_TO_GOAL_SIGNALER}.convert_robot_frame_orientation_to_absolute_orientation */
EIF_TYPED_VALUE F956_7860 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "convert_robot_frame_orientation_to_absolute_orientation";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 955, Current, 0, 1, 13475);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(955, Current, 13475);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5562, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(934, "theta", tr1));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,2);
	tr8_2 = *(EIF_REAL_64 *)(tr1 + RTVA(934, "theta", tr1));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (arg1 + tr8_1) - tr8_2);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5548, dtype))(Current, ur8_1x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef arg1
}

void EIF_Minit956 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
