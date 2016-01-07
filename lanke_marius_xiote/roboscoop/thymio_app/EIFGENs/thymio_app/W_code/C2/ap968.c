/*
 * Code for class APP_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F968_7950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F968_7951(EIF_REFERENCE);
extern EIF_TYPED_VALUE F968_7952(EIF_REFERENCE);
extern EIF_TYPED_VALUE F968_7953(EIF_REFERENCE);
extern EIF_TYPED_VALUE F968_7954(EIF_REFERENCE);
extern EIF_TYPED_VALUE F968_7955(EIF_REFERENCE);
extern EIF_TYPED_VALUE F968_7956(EIF_REFERENCE);
extern void F968_7957(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F968_7958(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F968_7959(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F968_7960(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F968_7961(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F968_7962(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit968(void);

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

/* {APP_PARAMETERS}.make */
void F968_7950 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 967, Current, 0, 0, 13628);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(967, Current, 13628);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5653, 0xF800011F, 0); /* app_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5653, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5654, 0xF800011F, 0); /* robot_file_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5654, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5655, 0xF800011F, 0); /* robot_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5655, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5656, 0xF800011F, 0); /* algorithm_file_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5656, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5657, 0xF800011F, 0); /* algorithm_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5657, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5658, 0xF800011F, 0); /* path_planner_file_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5658, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {APP_PARAMETERS}.app_name */
EIF_TYPED_VALUE F968_7951 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5653,Dtype(Current)));
	return r;
}


/* {APP_PARAMETERS}.robot_file_name */
EIF_TYPED_VALUE F968_7952 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5654,Dtype(Current)));
	return r;
}


/* {APP_PARAMETERS}.robot_name */
EIF_TYPED_VALUE F968_7953 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5655,Dtype(Current)));
	return r;
}


/* {APP_PARAMETERS}.algorithm_file_name */
EIF_TYPED_VALUE F968_7954 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5656,Dtype(Current)));
	return r;
}


/* {APP_PARAMETERS}.algorithm_name */
EIF_TYPED_VALUE F968_7955 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5657,Dtype(Current)));
	return r;
}


/* {APP_PARAMETERS}.path_planner_file_name */
EIF_TYPED_VALUE F968_7956 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5658,Dtype(Current)));
	return r;
}


/* {APP_PARAMETERS}.set_app_name */
void F968_7957 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_app_name";
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
	
	RTEAA(l_feature_name, 967, Current, 0, 1, 13635);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(967, Current, 13635);
	RTCC(arg1, 967, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5653, 0xF800011F, 0); /* app_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5653, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {APP_PARAMETERS}.set_robot_filename */
void F968_7958 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_robot_filename";
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
	
	RTEAA(l_feature_name, 967, Current, 0, 1, 13636);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(967, Current, 13636);
	RTCC(arg1, 967, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5654, 0xF800011F, 0); /* robot_file_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5654, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {APP_PARAMETERS}.set_robot_name */
void F968_7959 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_robot_name";
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
	
	RTEAA(l_feature_name, 967, Current, 0, 1, 13637);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(967, Current, 13637);
	RTCC(arg1, 967, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5655, 0xF800011F, 0); /* robot_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5655, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {APP_PARAMETERS}.set_algorithm_filename */
void F968_7960 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_algorithm_filename";
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
	
	RTEAA(l_feature_name, 967, Current, 0, 1, 13638);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(967, Current, 13638);
	RTCC(arg1, 967, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5656, 0xF800011F, 0); /* algorithm_file_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5656, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {APP_PARAMETERS}.set_algorithm_name */
void F968_7961 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_algorithm_name";
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
	
	RTEAA(l_feature_name, 967, Current, 0, 1, 13639);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(967, Current, 13639);
	RTCC(arg1, 967, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5657, 0xF800011F, 0); /* algorithm_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5657, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {APP_PARAMETERS}.set_path_planner_file_name */
void F968_7962 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_path_planner_file_name";
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
	
	RTEAA(l_feature_name, 967, Current, 0, 1, 13640);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(967, Current, 13640);
	RTCC(arg1, 967, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5658, 0xF800011F, 0); /* path_planner_file_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5658, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

void EIF_Minit968 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
