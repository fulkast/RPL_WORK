/*
 * Code for class A_STAR_GRAPH_NODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F953_7802(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F953_7803(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F953_7804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F953_7805(EIF_REFERENCE);
extern EIF_TYPED_VALUE F953_7806(EIF_REFERENCE);
extern EIF_TYPED_VALUE F953_7807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F953_7808(EIF_REFERENCE);
extern void F953_7809(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F953_7810(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit953(void);

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

/* {A_STAR_GRAPH_NODE}.make */
void F953_7802 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 952, Current, 0, 5, 13417);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(952, Current, 13417);
	RTCC(arg1, 952, l_feature_name, 1, eif_new_type(239, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5518, 0xF80000EF, 0); /* graph_node */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5518, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5516, 0x20000000, 1); /* path_cost */
	*(EIF_REAL_64 *)(Current + RTWA(5516, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5517, 0x20000000, 1); /* heuristic_cost */
	*(EIF_REAL_64 *)(Current + RTWA(5517, dtype)) = (EIF_REAL_64) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5520, 0x10000000, 1); /* prev_node_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(5520, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5519, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(5519, dtype)) = (EIF_INTEGER_32) arg5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {A_STAR_GRAPH_NODE}.is_less */
EIF_TYPED_VALUE F953_7803 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 952, Current, 0, 1, 13418);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(952, Current, 13418);
	RTCC(arg1, 952, l_feature_name, 1, eif_new_type(952, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTVA(5516, "path_cost", Current));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTVA(5517, "heuristic_cost", Current));
	tr8_3 = *(EIF_REAL_64 *)(arg1 + RTVA(5516, "path_cost", arg1));
	tr8_4 = *(EIF_REAL_64 *)(arg1 + RTVA(5517, "heuristic_cost", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 + tr8_2) > (EIF_REAL_64) (tr8_3 + tr8_4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1731, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1731, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {A_STAR_GRAPH_NODE}.path_cost */
EIF_TYPED_VALUE F953_7804 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5516,Dtype(Current)));
	return r;
}


/* {A_STAR_GRAPH_NODE}.heuristic_cost */
EIF_TYPED_VALUE F953_7805 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5517,Dtype(Current)));
	return r;
}


/* {A_STAR_GRAPH_NODE}.graph_node */
EIF_TYPED_VALUE F953_7806 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5518,Dtype(Current)));
	return r;
}


/* {A_STAR_GRAPH_NODE}.index */
EIF_TYPED_VALUE F953_7807 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5519,Dtype(Current)));
	return r;
}


/* {A_STAR_GRAPH_NODE}.prev_node_index */
EIF_TYPED_VALUE F953_7808 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5520,Dtype(Current)));
	return r;
}


/* {A_STAR_GRAPH_NODE}.update_path_cost */
void F953_7809 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_path_cost";
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
	
	RTEAA(l_feature_name, 952, Current, 0, 1, 13424);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(952, Current, 13424);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5516, 0x20000000, 1); /* path_cost */
	*(EIF_REAL_64 *)(Current + RTWA(5516, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {A_STAR_GRAPH_NODE}.update_prev_node_index */
void F953_7810 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_prev_node_index";
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
	
	RTEAA(l_feature_name, 952, Current, 0, 1, 13425);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(952, Current, 13425);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5520, 0x10000000, 1); /* prev_node_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(5520, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

void EIF_Minit953 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
