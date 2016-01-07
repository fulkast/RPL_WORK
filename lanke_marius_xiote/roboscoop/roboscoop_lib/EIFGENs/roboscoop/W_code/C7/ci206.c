/*
 * Code for class CIRCULAR_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F206_3447(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F206_3448(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_3449(EIF_REFERENCE);
extern EIF_TYPED_VALUE F206_3450(EIF_REFERENCE);
extern void EIF_Minit206(void);

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

/* {CIRCULAR_CURSOR}.make */
void F206_3447 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 205, Current, 0, 3, 3464);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(205, Current, 3464);
	RTCC(arg1, 205, l_feature_name, 1, RTWCT(2769, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2769, 0xF80000CC, 0); /* cursor */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2769, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2770, 0x04000000, 1); /* internal_exhausted */
	*(EIF_BOOLEAN *)(Current + RTWA(2770, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 2771, 0x10000000, 1); /* starter */
	*(EIF_INTEGER_32 *)(Current + RTWA(2771, dtype)) = (EIF_INTEGER_32) arg3;
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

/* {CIRCULAR_CURSOR}.cursor */
EIF_TYPED_VALUE F206_3448 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2769,Dtype(Current)));
	return r;
}


/* {CIRCULAR_CURSOR}.internal_exhausted */
EIF_TYPED_VALUE F206_3449 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2770,Dtype(Current)));
	return r;
}


/* {CIRCULAR_CURSOR}.starter */
EIF_TYPED_VALUE F206_3450 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2771,Dtype(Current)));
	return r;
}


void EIF_Minit206 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
