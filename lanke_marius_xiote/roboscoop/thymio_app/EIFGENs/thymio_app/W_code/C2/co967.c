/*
 * Code for class CONTROLLER_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F967_7935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7937(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7941(EIF_REFERENCE);
extern EIF_TYPED_VALUE F967_7942(EIF_REFERENCE);
extern void F967_7943(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F967_7944(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F967_7945(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F967_7946(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F967_7947(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F967_7948(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F967_7949(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit967(void);

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

/* {CONTROLLER_PARAMETERS}.make */
void F967_7935 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 966, Current, 0, 0, 13627);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13627);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5638, 0xF800011F, 0); /* controller_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5638, Dtype(Current))) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {CONTROLLER_PARAMETERS}.controller_name */
EIF_TYPED_VALUE F967_7936 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5638,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.k_p_go */
EIF_TYPED_VALUE F967_7937 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5639,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.k_i_go */
EIF_TYPED_VALUE F967_7938 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5640,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.k_d_go */
EIF_TYPED_VALUE F967_7939 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5641,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.k_p_vleave */
EIF_TYPED_VALUE F967_7940 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5642,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.k_i_vleave */
EIF_TYPED_VALUE F967_7941 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5643,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.k_d_vleave */
EIF_TYPED_VALUE F967_7942 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5644,Dtype(Current)));
	return r;
}


/* {CONTROLLER_PARAMETERS}.set_controller_name */
void F967_7943 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_controller_name";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13620);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13620);
	RTCC(arg1, 966, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5638, 0xF800011F, 0); /* controller_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5638, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {CONTROLLER_PARAMETERS}.set_k_p_go */
void F967_7944 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_k_p_go";
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
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13621);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13621);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5639, 0x20000000, 1); /* k_p_go */
	*(EIF_REAL_64 *)(Current + RTWA(5639, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {CONTROLLER_PARAMETERS}.set_k_i_go */
void F967_7945 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_k_i_go";
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
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13622);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13622);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5640, 0x20000000, 1); /* k_i_go */
	*(EIF_REAL_64 *)(Current + RTWA(5640, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {CONTROLLER_PARAMETERS}.set_k_d_go */
void F967_7946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_k_d_go";
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
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13623);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13623);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5641, 0x20000000, 1); /* k_d_go */
	*(EIF_REAL_64 *)(Current + RTWA(5641, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {CONTROLLER_PARAMETERS}.set_k_p_vleave */
void F967_7947 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_k_p_vleave";
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
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13624);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13624);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5642, 0x20000000, 1); /* k_p_vleave */
	*(EIF_REAL_64 *)(Current + RTWA(5642, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {CONTROLLER_PARAMETERS}.set_k_i_vleave */
void F967_7948 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_k_i_vleave";
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
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13625);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13625);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5643, 0x20000000, 1); /* k_i_vleave */
	*(EIF_REAL_64 *)(Current + RTWA(5643, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {CONTROLLER_PARAMETERS}.set_k_d_vleave */
void F967_7949 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_k_d_vleave";
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
	
	RTEAA(l_feature_name, 966, Current, 0, 1, 13626);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(966, Current, 13626);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5644, 0x20000000, 1); /* k_d_vleave */
	*(EIF_REAL_64 *)(Current + RTWA(5644, Dtype(Current))) = (EIF_REAL_64) arg1;
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

void EIF_Minit967 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
