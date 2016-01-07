/*
 * Code for class SEPARATE_STRING_MAKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F177_2321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F177_2322(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit177(void);

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

/* {SEPARATE_STRING_MAKER}.separate_str */
EIF_TYPED_VALUE F177_2321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separate_str";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 176, Current, 1, 1, 2200);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(176, Current, 2200);
	RTCC(arg1, 176, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800011F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(287, 0x05).id);
	RTS_PA (tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4950, "count", arg1));
	ui4_1 = ti4_1;
	RTS_AC (1, tr1, tp1);
	RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
	RTS_CC(4825, Dtype(tr1), tp1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1945, Dtype(Current)))(Current, ur1x, ur2x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF800011F, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {SEPARATE_STRING_MAKER}.make_separate_string */
void F177_2322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_separate_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 176, Current, 2, 2, 2201);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(176, Current, 2201);
	RTCC(arg1, 176, l_feature_name, 1, eif_new_type(287, 0x01), 0x01);
	RTCC(arg2, 176, l_feature_name, 2, eif_new_type(287, 0x05), 0x05);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg = uarg2;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg2);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4950, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2862, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AA (uc1x, it_c1, SK_CHAR8, 1, tp1);
			RTS_CP(5001, "append_character", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5001, "append_character", arg2))(arg2, uc1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(4950, "count", arg2, tp1, ui4_1x);
			ti4_2 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4950, "count", arg2))(arg2)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(6);
	RTEE;
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

void EIF_Minit177 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
