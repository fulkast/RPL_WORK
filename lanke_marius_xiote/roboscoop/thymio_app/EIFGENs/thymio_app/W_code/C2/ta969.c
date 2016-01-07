/*
 * Code for class TANGENT_BUG_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F969_7963(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7964(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7965(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7966(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7968(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7969(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7970(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7971(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7972(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7973(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7974(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7975(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7976(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7977(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7978(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7980(EIF_REFERENCE);
extern void F969_7981(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7982(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7983(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7984(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7985(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7986(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7987(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7988(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7989(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7990(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7991(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7992(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7993(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7994(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7995(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7996(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7997(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit969(void);

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

/* {TANGENT_BUG_PARAMETERS}.make */
void F969_7963 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13641);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13641);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5666, 0xF800011F, 0); /* algorithm_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5666, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5667, 0xF800011F, 0); /* controller_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5667, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5668, 0xF800011F, 0); /* controller_file_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5668, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TANGENT_BUG_PARAMETERS}.algorithm_name */
EIF_TYPED_VALUE F969_7964 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5666,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.controller_name */
EIF_TYPED_VALUE F969_7965 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5667,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.controller_file_name */
EIF_TYPED_VALUE F969_7966 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5668,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.go_vx */
EIF_TYPED_VALUE F969_7967 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5669,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.follow_wall_vx */
EIF_TYPED_VALUE F969_7968 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5670,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.transit_vx */
EIF_TYPED_VALUE F969_7969 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5671,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.localize_vtheta */
EIF_TYPED_VALUE F969_7970 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5672,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.desired_wall_distance */
EIF_TYPED_VALUE F969_7971 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5673,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.goal_reached_distance_threshold */
EIF_TYPED_VALUE F969_7972 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5674,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.goal_unreachable_distance_threshold */
EIF_TYPED_VALUE F969_7973 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5675,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.vleave_reached_distance_threshold */
EIF_TYPED_VALUE F969_7974 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5676,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.wait_point_distance_threshold */
EIF_TYPED_VALUE F969_7975 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5677,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.wait_point_angle_threshold */
EIF_TYPED_VALUE F969_7976 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5678,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.obstacle_vanished_time_threshold */
EIF_TYPED_VALUE F969_7977 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5679,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.move_to_next_goal_threshold */
EIF_TYPED_VALUE F969_7978 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5680,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.vleave_pub_duration */
EIF_TYPED_VALUE F969_7979 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(5681,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.search_vleave_pub_duration */
EIF_TYPED_VALUE F969_7980 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(5682,Dtype(Current)));
	return r;
}


/* {TANGENT_BUG_PARAMETERS}.set_algorithm_name */
void F969_7981 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13659);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13659);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5666, 0xF800011F, 0); /* algorithm_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5666, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {TANGENT_BUG_PARAMETERS}.set_controller_name */
void F969_7982 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13660);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13660);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5667, 0xF800011F, 0); /* controller_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5667, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {TANGENT_BUG_PARAMETERS}.set_controller_filename */
void F969_7983 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_controller_filename";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13661);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13661);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5668, 0xF800011F, 0); /* controller_file_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5668, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {TANGENT_BUG_PARAMETERS}.set_desired_wall_distance */
void F969_7984 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_desired_wall_distance";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13662);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13662);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5673, 0x20000000, 1); /* desired_wall_distance */
	*(EIF_REAL_64 *)(Current + RTWA(5673, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_obstacle_vanished_time_threshold */
void F969_7985 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_obstacle_vanished_time_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13663);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13663);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5679, 0x20000000, 1); /* obstacle_vanished_time_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5679, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_move_to_next_goal_threshold */
void F969_7986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_move_to_next_goal_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13664);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13664);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5680, 0x20000000, 1); /* move_to_next_goal_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5680, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_vleave_reached_distance_threshold */
void F969_7987 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_vleave_reached_distance_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13665);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13665);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5676, 0x20000000, 1); /* vleave_reached_distance_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5676, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_goal_reached_distance_threshold */
void F969_7988 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_goal_reached_distance_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13666);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13666);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5674, 0x20000000, 1); /* goal_reached_distance_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5674, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_wait_point_distance_threshold */
void F969_7989 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_wait_point_distance_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13667);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13667);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5677, 0x20000000, 1); /* wait_point_distance_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5677, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_wait_point_angle_threshold */
void F969_7990 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_wait_point_angle_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13668);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13668);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5678, 0x20000000, 1); /* wait_point_angle_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5678, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_goal_unreachable_distance_threshold */
void F969_7991 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_goal_unreachable_distance_threshold";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13669);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5675, 0x20000000, 1); /* goal_unreachable_distance_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5675, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_vleave_pub_duration */
void F969_7992 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_vleave_pub_duration";
	RTEX;
#define arg1 arg1x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13670);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13670);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5681, 0x24000000, 1); /* vleave_pub_duration */
	*(EIF_INTEGER_64 *)(Current + RTWA(5681, Dtype(Current))) = (EIF_INTEGER_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_search_vleave_pub_duration */
void F969_7993 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_search_vleave_pub_duration";
	RTEX;
#define arg1 arg1x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13671);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13671);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5682, 0x24000000, 1); /* search_vleave_pub_duration */
	*(EIF_INTEGER_64 *)(Current + RTWA(5682, Dtype(Current))) = (EIF_INTEGER_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_go_vx */
void F969_7994 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_go_vx";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13672);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13672);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5669, 0x20000000, 1); /* go_vx */
	*(EIF_REAL_64 *)(Current + RTWA(5669, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_follow_wall_vx */
void F969_7995 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_follow_wall_vx";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13673);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13673);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5670, 0x20000000, 1); /* follow_wall_vx */
	*(EIF_REAL_64 *)(Current + RTWA(5670, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_transit_vx */
void F969_7996 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_transit_vx";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13674);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13674);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5671, 0x20000000, 1); /* transit_vx */
	*(EIF_REAL_64 *)(Current + RTWA(5671, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {TANGENT_BUG_PARAMETERS}.set_localize_vtheta */
void F969_7997 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_localize_vtheta";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13675);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13675);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5672, 0x20000000, 1); /* localize_vtheta */
	*(EIF_REAL_64 *)(Current + RTWA(5672, Dtype(Current))) = (EIF_REAL_64) arg1;
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

void EIF_Minit969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
