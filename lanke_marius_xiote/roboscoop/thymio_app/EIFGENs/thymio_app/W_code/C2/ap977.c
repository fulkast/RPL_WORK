/*
 * Code for class APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F977_8109(EIF_REFERENCE);
extern void EIF_Minit977(void);

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

/* {APP}.make */
void F977_8109 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(24);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc6);
	RTLR(15,loc3);
	RTLR(16,loc14);
	RTLR(17,loc15);
	RTLR(18,loc16);
	RTLR(19,ur2);
	RTLR(20,loc17);
	RTLR(21,ur3);
	RTLR(22,loc18);
	RTLR(23,loc19);
	RTLIU(24);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	
	RTEAA(l_feature_name, 976, Current, 19, 0, 13780);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(976, Current, 13780);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800001D, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(193, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2548, "roboscoop_node", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2520, dtype))(Current, ur1x);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF800001C, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(28, 0x05).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(567, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3747, dtype))(Current, ur1x);
	RTHOOK(5);
	RTDBGAL(Current, 4, 0xF80003CC, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(972, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 5, 0xF80003C7, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(967, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5652, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 7, 0xF80003CE, 0, 0); /* loc7 */
	tr1 = RTLN(eif_new_type(974, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 8, 0xF80003C9, 0, 0); /* loc8 */
	tr1 = RTLN(eif_new_type(969, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5755, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(Current, 9, 0xF80003CA, 0, 0); /* loc9 */
	tr1 = RTLN(eif_new_type(970, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 10, 0xF80003C5, 0, 0); /* loc10 */
	tr1 = RTLN(eif_new_type(965, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5803, Dtype(tr1)))(tr1);
	RTNHOOK(10,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	RTDBGAL(Current, 11, 0xF80003CD, 0, 0); /* loc11 */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(11,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTDBGAL(Current, 12, 0xF80003C8, 0, 0); /* loc12 */
	tr1 = RTLN(eif_new_type(968, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5665, Dtype(tr1)))(tr1);
	RTNHOOK(12,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	RTDBGAL(Current, 6, 0xF800011F, 0, 0); /* loc6 */
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3713, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2813, "argument", loc6))(loc6, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(13,2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4878, "to_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(14);
	RTDBGAL(Current, 5, 0xF80003C7, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(287, 0x01).id);
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4925, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(14,1);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5782, "parse_txt_file", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	RTDBGAL(Current, 8, 0xF80003C9, 0, 0); /* loc8 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5654, "robot_file_name", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5782, "parse_txt_file", loc7))(loc7, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	RTDBGAL(Current, 12, 0xF80003C8, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5656, "algorithm_file_name", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5782, "parse_txt_file", loc11))(loc11, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	RTDBGAL(Current, 10, 0xF80003C5, 0, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5658, "path_planner_file_name", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5782, "parse_txt_file", loc9))(loc9, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	RTDBGAL(Current, 3, 0xF80003CF, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(975, 0x05).id);
	RTS_PA (tr1);
	ur1 = RTCCL(loc8);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5786, Dtype(tr1), tp1);
	RTNHOOK(18,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(19);
	RTDBGAL(Current, 14, 0xF80003AF, 0, 0); /* loc14 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(19,1);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	RTDBGAL(Current, 15, 0xF80003AF, 0, 0); /* loc15 */
	tr1 = RTLN(eif_new_type(943, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(20,1);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(21);
	RTDBGAL(Current, 16, 0xF80003AD, 0, 0); /* loc16 */
	tr1 = RTLN(eif_new_type(941, 0x01).id);
	ur1 = RTCCL(loc14);
	ur2 = RTCCL(loc15);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5472, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(21,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(22);
	RTDBGAL(Current, 17, 0xF80003B9, 0, 0); /* loc17 */
	tr1 = RTLN(eif_new_type(953, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5808, "get_connectivity_strategy", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ur2 = RTCCL(loc16);
	ur3 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5523, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(22,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	RTDBGAL(Current, 18, 0xF80003C3, 0, 0); /* loc18 */
	tr1 = RTLN(eif_new_type(963, 0x01).id);
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc17);
	ur3 = RTCCL(loc12);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5612, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(23,1);
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	RTDBGAL(Current, 19, 0xF80003C2, 0, 0); /* loc19 */
	tr1 = RTLN(eif_new_type(962, 0x01).id);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5606, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(24,1);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(25);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", loc18))(loc18);
	RTHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", loc19))(loc19);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
}

void EIF_Minit977 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
