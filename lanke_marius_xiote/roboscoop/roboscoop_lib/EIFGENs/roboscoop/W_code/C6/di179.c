/*
 * Code for class DIFFERENTIAL_DRIVE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F179_2323(EIF_REFERENCE);
extern EIF_TYPED_VALUE F179_2324(EIF_REFERENCE);
extern void EIF_Minit179(void);

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

/* {DIFFERENTIAL_DRIVE}.base_size */
EIF_TYPED_VALUE F179_2323 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(1946,Dtype(Current)));
	return r;
}


/* {DIFFERENTIAL_DRIVE}.max_linear_speed */
EIF_TYPED_VALUE F179_2324 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(1947,Dtype(Current)));
	return r;
}


void EIF_Minit179 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
