/*
 * Code for class ROS_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F231_5053(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F231_5054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit231(void);

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

/* {ROS_ENVIRONMENT}.start_spinning */
void F231_5053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "start_spinning";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 230, Current, 0, 1, 7281);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(230, Current, 7281);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(28, 0x05), 0x05);
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
		RTS_CP(568, "start", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(568, "start", arg1))(arg1);
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
#undef arg1
}

/* {ROS_ENVIRONMENT}.shut_down_node */
void F231_5054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "shut_down_node";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_POINTER tp1;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 230, Current, 0, 1, 7282);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(230, Current, 7282);
	RTCC(arg1, 230, l_feature_name, 1, eif_new_type(29, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1000000000L);
	ui8_1 = ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3733, Dtype(Current)))(Current, ui8_1x);
	RTHOOK(2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CP(575, "shutdown", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(575, "shutdown", arg1))(arg1);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
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
#undef ui8_1
#undef arg1
}

void EIF_Minit231 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
