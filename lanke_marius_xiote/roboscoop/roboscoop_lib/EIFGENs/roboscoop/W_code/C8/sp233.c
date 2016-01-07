/*
 * Code for class SPINNER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F233_5061(EIF_REFERENCE);
extern void EIF_Minit233(void);

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

/* {SPINNER}.spin */
void F233_5061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "spin";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 232, Current, 0, 0, 7289);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(232, Current, 7289);
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		if ((EIF_BOOLEAN) 0) break;
		RTHOOK(2);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1000000000L);
		ui8_1 = ti8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3733, Dtype(Current)))(Current, ui8_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui8_1
}

void EIF_Minit233 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
