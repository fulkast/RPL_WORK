/*
 * Code for class STATE_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F934_7673(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7674(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7675(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7676(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7677(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7678(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7679(EIF_REFERENCE);
extern EIF_TYPED_VALUE F934_7680(EIF_REFERENCE);
extern void F934_7681(EIF_REFERENCE);
extern void F934_7682(EIF_REFERENCE);
extern void F934_7683(EIF_REFERENCE);
extern void F934_7684(EIF_REFERENCE);
extern void F934_7685(EIF_REFERENCE);
extern void F934_7686(EIF_REFERENCE);
extern void F934_7687(EIF_REFERENCE);
extern void F934_7688(EIF_REFERENCE);
extern void EIF_Minit934(void);

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

/* {STATE_SIGNALER}.make */
void F934_7673 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13297);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(933, Current, 13297);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5425, 0x04000000, 1); /* is_localizing */
	*(EIF_BOOLEAN *)(Current + RTWA(5425, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.is_goal_reached */
EIF_TYPED_VALUE F934_7674 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5419,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.is_goal_unreachable */
EIF_TYPED_VALUE F934_7675 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5420,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.is_go */
EIF_TYPED_VALUE F934_7676 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5421,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.is_wall_following */
EIF_TYPED_VALUE F934_7677 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5422,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.is_transiting */
EIF_TYPED_VALUE F934_7678 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5423,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.is_waiting */
EIF_TYPED_VALUE F934_7679 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5424,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.is_localizing */
EIF_TYPED_VALUE F934_7680 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5425,Dtype(Current)));
	return r;
}


/* {STATE_SIGNALER}.set_is_goal_reached */
void F934_7681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_goal_reached";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13305);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13305);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5419, 0x04000000, 1); /* is_goal_reached */
	*(EIF_BOOLEAN *)(Current + RTWA(5419, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.set_is_goal_unreachable */
void F934_7682 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_goal_unreachable";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13306);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5420, 0x04000000, 1); /* is_goal_unreachable */
	*(EIF_BOOLEAN *)(Current + RTWA(5420, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.set_is_go */
void F934_7683 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_go";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13307);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13307);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5421, 0x04000000, 1); /* is_go */
	*(EIF_BOOLEAN *)(Current + RTWA(5421, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.set_is_wall_following */
void F934_7684 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_wall_following";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13308);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13308);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5422, 0x04000000, 1); /* is_wall_following */
	*(EIF_BOOLEAN *)(Current + RTWA(5422, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.set_is_transiting */
void F934_7685 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_transiting";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13309);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13309);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5423, 0x04000000, 1); /* is_transiting */
	*(EIF_BOOLEAN *)(Current + RTWA(5423, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.set_is_waiting */
void F934_7686 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_waiting";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13310);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13310);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5424, 0x04000000, 1); /* is_waiting */
	*(EIF_BOOLEAN *)(Current + RTWA(5424, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.set_is_localizing */
void F934_7687 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_is_localizing";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13311);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13311);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5433, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5425, 0x04000000, 1); /* is_localizing */
	*(EIF_BOOLEAN *)(Current + RTWA(5425, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATE_SIGNALER}.clear_all_states */
void F934_7688 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_all_states";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 933, Current, 0, 0, 13296);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(933, Current, 13296);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5421, 0x04000000, 1); /* is_go */
	*(EIF_BOOLEAN *)(Current + RTWA(5421, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5422, 0x04000000, 1); /* is_wall_following */
	*(EIF_BOOLEAN *)(Current + RTWA(5422, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5423, 0x04000000, 1); /* is_transiting */
	*(EIF_BOOLEAN *)(Current + RTWA(5423, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5419, 0x04000000, 1); /* is_goal_reached */
	*(EIF_BOOLEAN *)(Current + RTWA(5419, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5420, 0x04000000, 1); /* is_goal_unreachable */
	*(EIF_BOOLEAN *)(Current + RTWA(5420, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5424, 0x04000000, 1); /* is_waiting */
	*(EIF_BOOLEAN *)(Current + RTWA(5424, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5425, 0x04000000, 1); /* is_localizing */
	*(EIF_BOOLEAN *)(Current + RTWA(5425, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit934 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
