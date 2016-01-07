/*
 * Code for class ROBOT_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F970_8053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8057(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8058(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8059(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8060(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8061(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8062(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8063(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8066(EIF_REFERENCE);
extern void F970_8067(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8068(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8069(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8070(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8071(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8072(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8073(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8074(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8075(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8076(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8077(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8078(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F970_8079(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit970(void);

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

/* {ROBOT_PARAMETERS}.make */
void F970_8053 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 969, Current, 0, 0, 13676);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13676);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5756, 0xF800011F, 0); /* robot_name */
	tr1 = RTMS_EX_H("NULL",4,1314212940);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5756, Dtype(Current))) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROBOT_PARAMETERS}.robot_name */
EIF_TYPED_VALUE F970_8054 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5756,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.total_number_of_sensors */
EIF_TYPED_VALUE F970_8055 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5757,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.number_of_front_sensors */
EIF_TYPED_VALUE F970_8056 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5758,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.number_of_back_sensors */
EIF_TYPED_VALUE F970_8057 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5759,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.front_sensor_distance */
EIF_TYPED_VALUE F970_8058 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5760,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.back_sensor_distance */
EIF_TYPED_VALUE F970_8059 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5761,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_front_1 */
EIF_TYPED_VALUE F970_8060 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5762,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_front_2 */
EIF_TYPED_VALUE F970_8061 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5763,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_front_3 */
EIF_TYPED_VALUE F970_8062 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5764,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_front_4 */
EIF_TYPED_VALUE F970_8063 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5765,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_front_5 */
EIF_TYPED_VALUE F970_8064 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5766,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_back_1 */
EIF_TYPED_VALUE F970_8065 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5767,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.sensor_angle_back_2 */
EIF_TYPED_VALUE F970_8066 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5768,Dtype(Current)));
	return r;
}


/* {ROBOT_PARAMETERS}.set_robot_name */
void F970_8067 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13690);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13690);
	RTCC(arg1, 969, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5756, 0xF800011F, 0); /* robot_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5756, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {ROBOT_PARAMETERS}.set_total_number_of_sensors */
void F970_8068 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_total_number_of_sensors";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13691);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13691);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5757, 0x10000000, 1); /* total_number_of_sensors */
	*(EIF_INTEGER_32 *)(Current + RTWA(5757, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {ROBOT_PARAMETERS}.set_number_of_front_sensors */
void F970_8069 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_number_of_front_sensors";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13692);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13692);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5758, 0x10000000, 1); /* number_of_front_sensors */
	*(EIF_INTEGER_32 *)(Current + RTWA(5758, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {ROBOT_PARAMETERS}.set_number_of_back_sensors */
void F970_8070 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_number_of_back_sensors";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13693);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13693);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5759, 0x10000000, 1); /* number_of_back_sensors */
	*(EIF_INTEGER_32 *)(Current + RTWA(5759, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {ROBOT_PARAMETERS}.set_front_sensor_distance */
void F970_8071 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_front_sensor_distance";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13694);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13694);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5760, 0x20000000, 1); /* front_sensor_distance */
	*(EIF_REAL_64 *)(Current + RTWA(5760, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_back_sensor_distance */
void F970_8072 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_back_sensor_distance";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13695);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13695);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5761, 0x20000000, 1); /* back_sensor_distance */
	*(EIF_REAL_64 *)(Current + RTWA(5761, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_front_1 */
void F970_8073 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_front_1";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13696);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13696);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5762, 0x20000000, 1); /* sensor_angle_front_1 */
	*(EIF_REAL_64 *)(Current + RTWA(5762, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_front_2 */
void F970_8074 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_front_2";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13697);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13697);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5763, 0x20000000, 1); /* sensor_angle_front_2 */
	*(EIF_REAL_64 *)(Current + RTWA(5763, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_front_3 */
void F970_8075 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_front_3";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13698);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13698);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5764, 0x20000000, 1); /* sensor_angle_front_3 */
	*(EIF_REAL_64 *)(Current + RTWA(5764, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_front_4 */
void F970_8076 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_front_4";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13699);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13699);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5765, 0x20000000, 1); /* sensor_angle_front_4 */
	*(EIF_REAL_64 *)(Current + RTWA(5765, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_front_5 */
void F970_8077 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_front_5";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13700);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13700);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5766, 0x20000000, 1); /* sensor_angle_front_5 */
	*(EIF_REAL_64 *)(Current + RTWA(5766, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_back_1 */
void F970_8078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_back_1";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13701);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13701);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5767, 0x20000000, 1); /* sensor_angle_back_1 */
	*(EIF_REAL_64 *)(Current + RTWA(5767, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {ROBOT_PARAMETERS}.set_sensor_angle_back_2 */
void F970_8079 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_sensor_angle_back_2";
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
	
	RTEAA(l_feature_name, 969, Current, 0, 1, 13702);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13702);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5768, 0x20000000, 1); /* sensor_angle_back_2 */
	*(EIF_REAL_64 *)(Current + RTWA(5768, Dtype(Current))) = (EIF_REAL_64) arg1;
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

void EIF_Minit970 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
