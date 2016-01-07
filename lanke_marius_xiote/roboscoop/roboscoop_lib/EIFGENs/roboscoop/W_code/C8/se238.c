/*
 * Code for class SED_OBJECTS_TABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F238_5272(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F238_5273(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F238_5274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F238_5275(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F238_7613(EIF_REFERENCE, int);
extern void EIF_Minit238(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F238_5275
static EIF_INTEGER_32 inline_F238_5275 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (0x7FFFFFF & (((rt_uint_ptr) arg1) / sizeof(rt_uint_ptr)));
	;
}
#define INLINE_F238_5275
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_OBJECTS_TABLE}.make */
void F238_5272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 237, Current, 0, 1, 7951);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7951);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_not_too_large", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4607, 273))(Current)).it_i4);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg1 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) arg1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3792, dtype))(Current, ui4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1278, 0x38000000, 1); /* last_index */
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_32 *)(Current + RTWA(1278, dtype)) = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("last_index_set", EX_POST);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(1278, dtype));
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
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
#undef ui4_1
#undef arg1
}

/* {SED_OBJECTS_TABLE}.index */
EIF_TYPED_VALUE F238_5273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc8);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_POINTER, &loc11);
	
	RTEAA(l_feature_name, 237, Current, 11, 1, 7952);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7952);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTCT("an_obj_not_void", EX_PRE);
	RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
	RTCK;
	RTJB;
label_1:
	RTCF;
body:;
	RTHOOK(2);
	RTDBGAL(Current, 11, 0x40000000, 1, 0); /* loc11 */
	loc11 = (EIF_POINTER) arg1;
	RTHOOK(3);
	RTDBGAL(Current, 8, 0xF80001F6, 0, 0); /* loc8 */
	loc8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3831, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 9, 0xF8000159, 0, 0); /* loc9 */
	loc9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3832, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	RTDBGAL(Current, 10, 0xF800023A, 0, 0); /* loc10 */
	loc10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3833, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
	loc6 = *(EIF_INTEGER_32 *)(Current + RTWA(3803, dtype));
	RTHOOK(7);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) loc6;
	RTHOOK(8);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	up1 = loc11;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3802, dtype))(Current, up1x)).it_i4);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc1 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(10);
	RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % loc6) - loc2);
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(12);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc2) % loc6);
		RTHOOK(13);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2862, "item", loc9))(loc9, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 0L))) {
			ui4_1 = loc3;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2862, "item", loc8))(loc8, ui4_1x)).it_p);
			tb1 = (EIF_BOOLEAN)(tp1 == loc11);
		}
		if (tb1) {
			RTHOOK(15);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(16);
			RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3830, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = loc3;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2862, "item", tr1))(tr1, ui4_1x)).it_n4);
			Result = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(17);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3842, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				RTHOOK(18);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(19);
				RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
				Result = *(EIF_NATURAL_32 *)(Current + RTWA(1278, dtype));
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				Result = (EIF_NATURAL_32) (EIF_NATURAL_32) (Result + tu4_1);
				RTHOOK(20);
				RTDBGAA(Current, dtype, 1278, 0x38000000, 1); /* last_index */
				*(EIF_NATURAL_32 *)(Current + RTWA(1278, dtype)) = (EIF_NATURAL_32) Result;
				RTHOOK(21);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2750, "count", loc8))(loc8)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(22);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2751, "capacity", loc8))(loc8)).it_i4);
				if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
					RTHOOK(23);
					ui4_1 = loc4;
					ui4_2 = loc5;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2878, "put", loc9))(loc9, ui4_1x, ui4_2x);
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3830, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					uu4_1 = Result;
					ui4_1 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2879, "force", tr1))(tr1, uu4_1x, ui4_1x);
					RTHOOK(25);
					up1 = arg1;
					ui4_1 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2879, "force", loc8))(loc8, up1x, ui4_1x);
					RTHOOK(26);
					RTDBGAA(Current, dtype, 3880, 0x10000000, 1); /* capacity */
					(*(EIF_INTEGER_32 *)(Current + RTWA(3880, dtype)))++;
				} else {
					RTHOOK(27);
					uu4_1 = Result;
					up1 = loc11;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2185, dtype))(Current, uu4_1x, up1x);
				}
			}
		}
		RTHOOK(28);
		RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
		loc7--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {SED_OBJECTS_TABLE}.wipe_out */
void F238_5274 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 237, Current, 0, 0, 7953);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(237, Current, 7953);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1278, 0x38000000, 1); /* last_index */
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_32 *)(Current + RTWA(1278, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2156, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SED_OBJECTS_TABLE}.hash_code_of */
EIF_TYPED_VALUE F238_5275 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hash_code_of";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 237, Current, 0, 1, 7954);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(237, Current, 7954);
	RTIV(Current, RTAL);
	Result = inline_F238_5275 ((EIF_POINTER) arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {SED_OBJECTS_TABLE}._invariant */
void F238_7613 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 237, Current, 0, 7612);
	RTSA(Dtype(Current));
	RTME(Dtype(Current), 0);
	RTIT("not_is_dotnet", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2019, 183))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit238 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
