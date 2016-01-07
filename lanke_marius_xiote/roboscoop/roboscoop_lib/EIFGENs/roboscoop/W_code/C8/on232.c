/*
 * Code for class ON_TIMER_INVOKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F232_5055(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F232_5056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F232_5057(EIF_REFERENCE);
extern EIF_TYPED_VALUE F232_5058(EIF_REFERENCE);
extern EIF_TYPED_VALUE F232_5059(EIF_REFERENCE);
extern void F232_5060(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit232(void);

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

/* {ON_TIMER_INVOKER}.make */
void F232_5055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_i8
#define arg3 arg3x.it_i8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i8 = * (EIF_INTEGER_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU(SK_INT64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 231, Current, 0, 3, 7283);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(231, Current, 7283);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,0,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 231, l_feature_name, 1, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3751, 0x24000000, 1); /* duration */
	*(EIF_INTEGER_64 *)(Current + RTWA(3751, dtype)) = (EIF_INTEGER_64) arg2;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3752, 0x24000000, 1); /* sleep_portion */
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1000000L);
	*(EIF_INTEGER_64 *)(Current + RTWA(3752, dtype)) = (EIF_INTEGER_64) (EIF_INTEGER_64) (arg3 * ti8_1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3753, 0xF8000131, 0); /* sep_procedure */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3753, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
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
#undef arg3
#undef arg2
#undef arg1
}

/* {ON_TIMER_INVOKER}.start */
void F232_5056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT64, &loc2);
	
	RTEAA(l_feature_name, 231, Current, 2, 0, 7284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(231, Current, 7284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000018, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(24, 0x01).id);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	ui8_1 = ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(526, Dtype(tr1)))(tr1, ui8_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x24000000, 1, 0); /* loc2 */
	ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(539, "current_time_millis", loc1))(loc1)).it_i8);
	loc2 = *(EIF_INTEGER_64 *)(Current + RTWA(3751, dtype));
	loc2 = (EIF_INTEGER_64) (EIF_INTEGER_64) (ti8_1 + loc2);
	for (;;) {
		RTHOOK(3);
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(539, "current_time_millis", loc1))(loc1)).it_i8);
		if ((EIF_BOOLEAN) (ti8_1 >= loc2)) break;
		RTHOOK(4);
		ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(3752, dtype));
		ui8_1 = ti8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3733, dtype))(Current, ui8_1x);
	}
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3753, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3754, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui8_1
}

/* {ON_TIMER_INVOKER}.duration */
EIF_TYPED_VALUE F232_5057 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(3751,Dtype(Current)));
	return r;
}


/* {ON_TIMER_INVOKER}.sleep_portion */
EIF_TYPED_VALUE F232_5058 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(3752,Dtype(Current)));
	return r;
}


/* {ON_TIMER_INVOKER}.sep_procedure */
EIF_TYPED_VALUE F232_5059 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3753,Dtype(Current)));
	return r;
}


/* {ON_TIMER_INVOKER}.execute */
void F232_5060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "execute";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 231, Current, 0, 1, 7288);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(231, Current, 7288);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,0,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 231, l_feature_name, 1, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 1, 1);
	}
	ur1 = tr1;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (1, arg1, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(4792, "call", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4792, "call", arg1))(arg1, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
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

void EIF_Minit232 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
