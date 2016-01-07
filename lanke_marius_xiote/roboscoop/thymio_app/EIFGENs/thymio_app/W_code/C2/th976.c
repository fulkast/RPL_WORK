/*
 * Code for class THYMIO_ROBOT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F976_8088(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F976_8089(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8094(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8095(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8096(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8097(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8098(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8099(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8100(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8101(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8102(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F976_8104(EIF_REFERENCE);
extern void F976_8105(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F976_8106(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F976_8107(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F976_8108(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit976(void);

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

/* {THYMIO_ROBOT}.make */
void F976_8088 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 1, 13728);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(975, Current, 13728);
	RTCC(arg1, 975, l_feature_name, 1, eif_new_type(969, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5789, 0xF80003B4, 0); /* range_sensors */
	tr1 = RTLNSMART(RTWCT(5789, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5400, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5500, Dtype(tr1), tp1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5789, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5790, 0xF80003BD, 0); /* range_group_wrapper */
	tr1 = RTLNSMART(RTWCT(5790, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	ur1 = RTCCL(arg1);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5580, Dtype(tr1), tp1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5790, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5791, 0xF80003B5, 0); /* ground_sensors */
	tr1 = RTLNSMART(RTWCT(5791, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5401, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5512, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5791, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5797, 0xF800004E, 0); /* odometry_signaler */
	tr1 = RTLNSMART(RTWCT(5797, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5398, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(1261, Dtype(tr1), tp1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5797, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5792, 0xF80003BE, 0); /* diff_drive */
	tr1 = RTLNSMART(RTWCT(5792, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5399, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5588, Dtype(tr1), tp1);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5792, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5793, 0xF80003BF, 0); /* sound_player */
	tr1 = RTLNSMART(RTWCT(5793, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5402, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5590, Dtype(tr1), tp1);
	RTNHOOK(6,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5793, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5794, 0xF80003B1, 0); /* top_leds */
	tr1 = RTLNSMART(RTWCT(5794, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5405, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5485, Dtype(tr1), tp1);
	RTNHOOK(7,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5794, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5795, 0xF80003A3, 0); /* buttons_leds */
	tr1 = RTLNSMART(RTWCT(5795, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5404, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5395, Dtype(tr1), tp1);
	RTNHOOK(8,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5795, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5796, 0xF80003A2, 0); /* circle_leds */
	tr1 = RTLNSMART(RTWCT(5796, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5403, 932))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5392, Dtype(tr1), tp1);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5796, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5453, 0xF80003A5, 0); /* robot_state */
	tr1 = RTLNSMART(RTWCT(5453, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(5418, Dtype(tr1), tp1);
	RTNHOOK(10,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5453, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {THYMIO_ROBOT}.robot_base_size */
EIF_TYPED_VALUE F976_8089 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.11;
	return r;
}

/* {THYMIO_ROBOT}.default_linear_speed */
EIF_TYPED_VALUE F976_8090 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.080000000000000002;
	return r;
}

/* {THYMIO_ROBOT}.get_odometry_signaler */
EIF_TYPED_VALUE F976_8091 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_odometry_signaler";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 0, 13710);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13710);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800004E, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5797, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {THYMIO_ROBOT}.get_diff_drive */
EIF_TYPED_VALUE F976_8092 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_diff_drive";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 0, 13711);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13711);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003BE, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5792, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {THYMIO_ROBOT}.get_range_sensors */
EIF_TYPED_VALUE F976_8093 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_range_sensors";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 0, 13712);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13712);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003B4, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5789, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {THYMIO_ROBOT}.get_range_group_wrapper */
EIF_TYPED_VALUE F976_8094 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_range_group_wrapper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 0, 13713);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13713);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003BD, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5790, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {THYMIO_ROBOT}.get_state_leds */
EIF_TYPED_VALUE F976_8095 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_state_leds";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 0, 13714);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13714);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80003B1, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5794, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {THYMIO_ROBOT}.range_sensors */
EIF_TYPED_VALUE F976_8096 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5789,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.range_group_wrapper */
EIF_TYPED_VALUE F976_8097 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5790,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.ground_sensors */
EIF_TYPED_VALUE F976_8098 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5791,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.diff_drive */
EIF_TYPED_VALUE F976_8099 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5792,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.sound_player */
EIF_TYPED_VALUE F976_8100 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5793,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.top_leds */
EIF_TYPED_VALUE F976_8101 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5794,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.buttons_leds */
EIF_TYPED_VALUE F976_8102 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5795,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.circle_leds */
EIF_TYPED_VALUE F976_8103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5796,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.odometry_signaler */
EIF_TYPED_VALUE F976_8104 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5797,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.start_behavior */
void F976_8105 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "start_behavior";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 1, 13724);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13724);
	RTCC(arg1, 975, l_feature_name, 1, eif_new_type(90, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CP(1395, "start", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", arg1))(arg1);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = RTMS_EX_H("Behaviour started\012",18,113355018);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
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
#undef up1
#undef ur1
#undef arg1
}

/* {THYMIO_ROBOT}.stop_behavior */
void F976_8106 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "stop_behavior";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 1, 13725);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(975, Current, 13725);
	RTCC(arg1, 975, l_feature_name, 1, eif_new_type(90, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CP(1396, "stop", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1396, "stop", arg1))(arg1);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2520, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("Behaviour requested for a stop\012",31,2114146058);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {THYMIO_ROBOT}.light_up_leds */
void F976_8107 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "light_up_leds";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 3, 13726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13726);
	RTCC(arg1, 975, l_feature_name, 1, eif_new_type(945, 0x05), 0x05);
	RTCC(arg2, 975, l_feature_name, 2, eif_new_type(931, 0x05), 0x05);
	RTCC(arg3, 975, l_feature_name, 3, eif_new_type(930, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg = uarg1 || uarg2 || uarg3;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg3);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CP(545, "set_to_blue", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(545, "set_to_blue", arg1))(arg1);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,276,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_16), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 4L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+0) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+1) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+2) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+3) = (EIF_INTEGER_16) ti2_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2873, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(5396, "set_leds_brightness", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5396, "set_leds_brightness", arg2))(arg2, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,276,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_16), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 8L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+0) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+1) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+2) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+3) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+4) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+5) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+6) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+7) = (EIF_INTEGER_16) ti2_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2873, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (1, arg3, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(5393, "set_leds_brightness", arg3, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5393, "set_leds_brightness", arg3))(arg3, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {THYMIO_ROBOT}.light_down_leds */
void F976_8108 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "light_down_leds";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 975, Current, 0, 3, 13727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(975, Current, 13727);
	RTCC(arg1, 975, l_feature_name, 1, eif_new_type(945, 0x05), 0x05);
	RTCC(arg2, 975, l_feature_name, 2, eif_new_type(931, 0x05), 0x05);
	RTCC(arg3, 975, l_feature_name, 3, eif_new_type(930, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg = uarg1 || uarg2 || uarg3;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg3);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CP(543, "set_to_red", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(543, "set_to_red", arg1))(arg1);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,276,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_16), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 4L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+0) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+1) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+2) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+3) = (EIF_INTEGER_16) ti2_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2873, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(5396, "set_leds_brightness", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5396, "set_leds_brightness", arg2))(arg2, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {798,276,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_16), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 8L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+0) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+1) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+2) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+3) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+4) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+5) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_16 *)tr2+6) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_16 *)tr2+7) = (EIF_INTEGER_16) ti2_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2873, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (1, arg3, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(5393, "set_leds_brightness", arg3, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5393, "set_leds_brightness", arg3))(arg3, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit976 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
