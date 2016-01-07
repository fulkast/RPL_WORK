/*
 * Code for class COLOR_RGBA_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F49_875(EIF_REFERENCE);
extern void F49_876(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F49_877(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F49_878(EIF_REFERENCE);
extern void F49_879(EIF_REFERENCE);
extern void F49_880(EIF_REFERENCE);
extern void F49_881(EIF_REFERENCE);
extern void F49_882(EIF_REFERENCE);
extern void F49_883(EIF_REFERENCE);
extern EIF_TYPED_VALUE F49_884(EIF_REFERENCE);
extern EIF_TYPED_VALUE F49_885(EIF_REFERENCE);
extern EIF_TYPED_VALUE F49_886(EIF_REFERENCE);
extern EIF_TYPED_VALUE F49_887(EIF_REFERENCE);
extern void F49_888(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F49_889(EIF_REFERENCE);
extern void F49_890(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F49_891(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F49_892(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F49_893(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F49_894(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F49_895(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F49_896(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F49_897(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F49_898(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit49(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "std_msgs/ColorRGBA.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F49_890
static void inline_F49_890 (EIF_POINTER arg1)
{
	delete (std_msgs::ColorRGBA*)arg1;
	;
}
#define INLINE_F49_890
#endif
#ifndef INLINE_F49_891
static EIF_REAL_32 inline_F49_891 (EIF_POINTER arg1)
{
	return (float)(((std_msgs::ColorRGBA*)(arg1))->r);
	;
}
#define INLINE_F49_891
#endif
#ifndef INLINE_F49_892
static EIF_REAL_32 inline_F49_892 (EIF_POINTER arg1)
{
	return (float)(((std_msgs::ColorRGBA*)(arg1))->g);
	;
}
#define INLINE_F49_892
#endif
#ifndef INLINE_F49_893
static EIF_REAL_32 inline_F49_893 (EIF_POINTER arg1)
{
	return (float)(((std_msgs::ColorRGBA*)(arg1))->b);
	;
}
#define INLINE_F49_893
#endif
#ifndef INLINE_F49_894
static EIF_REAL_32 inline_F49_894 (EIF_POINTER arg1)
{
	return (float)(((std_msgs::ColorRGBA*)(arg1))->a);
	;
}
#define INLINE_F49_894
#endif
#ifndef INLINE_F49_895
static EIF_POINTER inline_F49_895 (EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4)
{
	std_msgs::ColorRGBA* msg = new std_msgs::ColorRGBA();
msg->r = arg1;
msg->g = arg2;
msg->b = arg3;
msg->a = arg4;
return msg;
	;
}
#define INLINE_F49_895
#endif
#ifndef INLINE_F49_896
static void inline_F49_896 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <std_msgs::ColorRGBA> (arg2, arg3);
	;
}
#define INLINE_F49_896
#endif
#ifndef INLINE_F49_897
static void inline_F49_897 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((Publisher*)(arg1))->publish_message <std_msgs::ColorRGBA> (*((std_msgs::ColorRGBA*)arg2));
	;
}
#define INLINE_F49_897
#endif
#ifndef INLINE_F49_898
static void inline_F49_898 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<std_msgs::ColorRGBA, std_msgs::ColorRGBA::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F49_898
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COLOR_RGBA_MSG}.make_empty */
void F49_875 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_empty";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 945);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 945);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {COLOR_RGBA_MSG}.make_from_pointer */
void F49_876 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 946);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 946);
	RTIV(Current, RTAL);
	RTHOOK(1);
	up1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(811, Dtype(Current)))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {COLOR_RGBA_MSG}.make_with_values */
void F49_877 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make_with_values";
	RTEX;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 4, 947);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(48, Current, 947);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
		if ((EIF_BOOLEAN) (arg1 >= tr4_1)) {
			tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
			tb1 = (EIF_BOOLEAN) (arg1 <= tr4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
		if ((EIF_BOOLEAN) (arg2 >= tr4_1)) {
			tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
			tb1 = (EIF_BOOLEAN) (arg2 <= tr4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
		if ((EIF_BOOLEAN) (arg3 >= tr4_1)) {
			tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
			tb1 = (EIF_BOOLEAN) (arg3 <= tr4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
		if ((EIF_BOOLEAN) (arg4 >= tr4_1)) {
			tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
			tb1 = (EIF_BOOLEAN) (arg4 <= tr4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 855, 0x18000000, 1); /* r */
	*(EIF_REAL_32 *)(Current + RTWA(855, dtype)) = (EIF_REAL_32) arg1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 856, 0x18000000, 1); /* g */
	*(EIF_REAL_32 *)(Current + RTWA(856, dtype)) = (EIF_REAL_32) arg2;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 857, 0x18000000, 1); /* b */
	*(EIF_REAL_32 *)(Current + RTWA(857, dtype)) = (EIF_REAL_32) arg3;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 858, 0x18000000, 1); /* a */
	*(EIF_REAL_32 *)(Current + RTWA(858, dtype)) = (EIF_REAL_32) arg4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {COLOR_RGBA_MSG}.make_black */
void F49_878 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_black";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 948);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 948);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_4 = tr4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(848, Dtype(Current)))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.make_white */
void F49_879 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_white";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 949);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 949);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_3 = tr4_3;
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_4 = tr4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(848, Dtype(Current)))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.make_red */
void F49_880 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_red";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 950);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 950);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_4 = tr4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(848, Dtype(Current)))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.make_green */
void F49_881 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_green";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 951);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 951);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_4 = tr4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(848, Dtype(Current)))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.make_blue */
void F49_882 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_blue";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 952);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 952);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_3 = tr4_3;
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_4 = tr4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(848, Dtype(Current)))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.make_yellow */
void F49_883 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_yellow";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 953);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(48, Current, 953);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_2 = tr4_2;
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	ur4_3 = tr4_3;
	tr4_4 = (EIF_REAL_32) ((EIF_REAL_64) 1.0);
	ur4_4 = tr4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(848, Dtype(Current)))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.r */
EIF_TYPED_VALUE F49_884 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(855,Dtype(Current)));
	return r;
}


/* {COLOR_RGBA_MSG}.g */
EIF_TYPED_VALUE F49_885 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(856,Dtype(Current)));
	return r;
}


/* {COLOR_RGBA_MSG}.b */
EIF_TYPED_VALUE F49_886 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(857,Dtype(Current)));
	return r;
}


/* {COLOR_RGBA_MSG}.a */
EIF_TYPED_VALUE F49_887 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(858,Dtype(Current)));
	return r;
}


/* {COLOR_RGBA_MSG}.set_from_pointer */
void F49_888 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 958);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(48, Current, 958);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 855, 0x18000000, 1); /* r */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(859, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(855, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 856, 0x18000000, 1); /* g */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(860, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(856, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 857, 0x18000000, 1); /* b */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(861, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(857, dtype)) = (EIF_REAL_32) tr4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 858, 0x18000000, 1); /* a */
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(862, dtype))(Current, up1x)).it_r4);
	*(EIF_REAL_32 *)(Current + RTWA(858, dtype)) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {COLOR_RGBA_MSG}.allocate_c_msg */
EIF_TYPED_VALUE F49_889 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "allocate_c_msg";
	RTEX;
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ur4_3x = {{0}, SK_REAL32};
#define ur4_3 ur4_3x.it_r4
	EIF_TYPED_VALUE ur4_4x = {{0}, SK_REAL32};
#define ur4_4 ur4_4x.it_r4
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 0, 959);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(48, Current, 959);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	tr4_1 = *(EIF_REAL_32 *)(Current + RTWA(855, dtype));
	ur4_1 = tr4_1;
	tr4_2 = *(EIF_REAL_32 *)(Current + RTWA(856, dtype));
	ur4_2 = tr4_2;
	tr4_3 = *(EIF_REAL_32 *)(Current + RTWA(857, dtype));
	ur4_3 = tr4_3;
	tr4_4 = *(EIF_REAL_32 *)(Current + RTWA(858, dtype));
	ur4_4 = tr4_4;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(863, dtype))(Current, ur4_1x, ur4_2x, ur4_3x, ur4_4x)).it_p);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ur4_1
#undef ur4_2
#undef ur4_3
#undef ur4_4
}

/* {COLOR_RGBA_MSG}.deallocate_c_msg */
void F49_890 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "deallocate_c_msg";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 960);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 960);
	RTIV(Current, RTAL);
	inline_F49_890 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {COLOR_RGBA_MSG}.get_r_from_c */
EIF_TYPED_VALUE F49_891 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_r_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 961);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 961);
	RTIV(Current, RTAL);
	Result = inline_F49_891 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {COLOR_RGBA_MSG}.get_g_from_c */
EIF_TYPED_VALUE F49_892 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_g_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 962);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 962);
	RTIV(Current, RTAL);
	Result = inline_F49_892 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {COLOR_RGBA_MSG}.get_b_from_c */
EIF_TYPED_VALUE F49_893 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_b_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 963);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 963);
	RTIV(Current, RTAL);
	Result = inline_F49_893 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {COLOR_RGBA_MSG}.get_a_from_c */
EIF_TYPED_VALUE F49_894 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_a_from_c";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 1, 964);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 964);
	RTIV(Current, RTAL);
	Result = inline_F49_894 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
#undef arg1
}

/* {COLOR_RGBA_MSG}.c_msg_ptr */
EIF_TYPED_VALUE F49_895 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_msg_ptr";
	RTEX;
#define arg1 arg1x.it_r4
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r4 = * (EIF_REAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_REAL32,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 4, 965);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 965);
	RTIV(Current, RTAL);
	Result = inline_F49_895 ((EIF_REAL_32) arg1, (EIF_REAL_32) arg2, (EIF_REAL_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {COLOR_RGBA_MSG}.c_ros_advertize */
void F49_896 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_ros_advertize";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 3, 966);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 966);
	RTIV(Current, RTAL);
	inline_F49_896 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {COLOR_RGBA_MSG}.c_ros_publish */
void F49_897 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_ros_publish";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 2, 967);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 967);
	RTIV(Current, RTAL);
	inline_F49_897 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {COLOR_RGBA_MSG}.subscribe_to_ros */
void F49_898 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "subscribe_to_ros";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_r
#define arg4 arg4x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 48, Current, 0, 4, 968);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(48, Current, 968);
	RTIV(Current, RTAL);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = &arg3;
		EIF_POINTER larg4 = arg4;
		inline_F49_898 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit49 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
