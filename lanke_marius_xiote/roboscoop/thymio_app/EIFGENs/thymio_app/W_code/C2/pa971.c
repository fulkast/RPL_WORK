/*
 * Code for class PATH_PLANNER_PARAMETERS_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F971_8165(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit971(void);

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

/* {PATH_PLANNER_PARAMETERS_PARSER}.parse_txt_file */
EIF_TYPED_VALUE F971_8165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_txt_file";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr3);
	RTLR(9,loc2);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,Result);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 970, Current, 6, 1, 13705);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(970, Current, 13705);
	RTCC(arg1, 970, l_feature_name, 1, eif_new_type(287, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000E4, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(228, 0x01).id);
	tr2 = RTLN(eif_new_type(287, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4925, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3534, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF8000072, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(114, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF80003C5, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(965, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5803, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3554, "access_exists", loc1))(loc1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = RTMS_EX_H("ERROR: Cannot open file ",24,744245024);
		tr3 = RTLN(eif_new_type(287, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4925, Dtype(tr3)))(tr3, ur1x);
		RTNHOOK(5,2);
		ur1 = RTCCL(tr3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr2 = RTMS_EX_H("\012",1,10);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(432, "putstring", tr1))(tr1, ur1x);
	}
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3367, "read_line", loc1))(loc1);
	for (;;) {
		RTHOOK(7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2234, "exhausted", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3298, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4842, "is_empty", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0xF8000152, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3298, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			uw1 = tw1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4903, "split", tr1))(tr1, uw1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(10);
			RTDBGAL(Current, 5, 0xF800011F, 0, 0); /* loc5 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4963, "adjust", loc5))(loc5);
			RTHOOK(12);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4963, "adjust", tr1))(tr1);
			RTHOOK(13);
			RTDBGAL(Current, 6, 0xF800011F, 0, 0); /* loc6 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(14);
			tr1 = RTMS_EX_H("GRID_CONNECTIVITY_STRATEGY",26,1866885209);
			ur1 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
			if (tb2) {
				RTHOOK(15);
				tr1 = RTMS_EX_H("FOUR_CONNECTIVITY_STRATEGY",26,89797465);
				ur1 = tr1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc6))(loc6, ur1x)).it_b);
				if (tb2) {
					RTHOOK(16);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5806, "set_four_connect", loc4))(loc4);
				} else {
					RTHOOK(17);
					tr1 = RTMS_EX_H("EIGHT_CONNECTIVITY_STRATEGY",27,2089432153);
					ur1 = tr1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc6))(loc6, ur1x)).it_b);
					if (tb2) {
						RTHOOK(18);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5807, "set_eight_connect", loc4))(loc4);
					}
				}
			} else {
				RTHOOK(19);
				tr1 = RTMS_EX_H("cur_wait_point_index",20,308949880);
				ur1 = tr1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
				if (tb2) {
					RTHOOK(20);
					ur1 = RTCCL(loc6);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5784, dtype))(Current, ur1x)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5856, "set_cur_wait_point_index", loc4))(loc4, ui4_1x);
				} else {
					RTHOOK(21);
					tr1 = RTMS_EX_H("goal_theta",10,1062350689);
					ur1 = tr1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
					if (tb2) {
						RTHOOK(22);
						ur1 = RTCCL(loc6);
						tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
						ur8_1 = tr8_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5826, "set_goal_theta", loc4))(loc4, ur8_1x);
					} else {
						RTHOOK(23);
						tr1 = RTMS_EX_H("goal_x",6,1837851000);
						ur1 = tr1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
						if (tb2) {
							RTHOOK(24);
							ur1 = RTCCL(loc6);
							tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
							ur8_1 = tr8_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5820, "set_goal_x", loc4))(loc4, ur8_1x);
						} else {
							RTHOOK(25);
							tr1 = RTMS_EX_H("goal_y",6,1837851001);
							ur1 = tr1;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
							if (tb2) {
								RTHOOK(26);
								ur1 = RTCCL(loc6);
								tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
								ur8_1 = tr8_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5822, "set_goal_y", loc4))(loc4, ur8_1x);
							} else {
								RTHOOK(27);
								tr1 = RTMS_EX_H("goal_z",6,1837851002);
								ur1 = tr1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
								if (tb2) {
									RTHOOK(28);
									ur1 = RTCCL(loc6);
									tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
									ur8_1 = tr8_1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5824, "set_goal_z", loc4))(loc4, ur8_1x);
								} else {
									RTHOOK(29);
									tr1 = RTMS_EX_H("inflate_radius",14,177451379);
									ur1 = tr1;
									tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
									if (tb2) {
										RTHOOK(30);
										ur1 = RTCCL(loc6);
										tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
										ur8_1 = tr8_1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5810, "set_inflate_radius", loc4))(loc4, ur8_1x);
									} else {
										RTHOOK(31);
										tr1 = RTMS_EX_H("jump_in_number_of_nodes",23,689670259);
										ur1 = tr1;
										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
										if (tb2) {
											RTHOOK(32);
											ur1 = RTCCL(loc6);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5784, dtype))(Current, ur1x)).it_i4);
											ui4_1 = ti4_1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5854, "set_jump_in_number_of_nodes", loc4))(loc4, ui4_1x);
										} else {
											RTHOOK(33);
											tr1 = RTMS_EX_H("number_of_destinations",22,1224489331);
											ur1 = tr1;
											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
											if (tb2) {
												RTHOOK(34);
												ur1 = RTCCL(loc6);
												ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5784, dtype))(Current, ur1x)).it_i4);
												ui4_1 = ti4_1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5828, "set_number_of_destinations", loc4))(loc4, ui4_1x);
											} else {
												RTHOOK(35);
												tr1 = RTMS_EX_H("start_theta",11,1639730785);
												ur1 = tr1;
												tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
												if (tb2) {
													RTHOOK(36);
													ur1 = RTCCL(loc6);
													tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
													ur8_1 = tr8_1;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5818, "set_start_theta", loc4))(loc4, ur8_1x);
												} else {
													RTHOOK(37);
													tr1 = RTMS_EX_H("start_x",7,2048479864);
													ur1 = tr1;
													tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
													if (tb2) {
														RTHOOK(38);
														ur1 = RTCCL(loc6);
														tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
														ur8_1 = tr8_1;
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5812, "set_start_x", loc4))(loc4, ur8_1x);
													} else {
														RTHOOK(39);
														tr1 = RTMS_EX_H("start_y",7,2048479865);
														ur1 = tr1;
														tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
														if (tb2) {
															RTHOOK(40);
															ur1 = RTCCL(loc6);
															tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
															ur8_1 = tr8_1;
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5814, "set_start_y", loc4))(loc4, ur8_1x);
														} else {
															RTHOOK(41);
															tr1 = RTMS_EX_H("viapoint1_theta",15,718170721);
															ur1 = tr1;
															tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
															if (tb2) {
																RTHOOK(42);
																ur1 = RTCCL(loc6);
																tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																ur8_1 = tr8_1;
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5816, "set_start_z", loc4))(loc4, ur8_1x);
															} else {
																RTHOOK(43);
																tr1 = RTMS_EX_H("viapoint1_theta",15,718170721);
																ur1 = tr1;
																tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																if (tb2) {
																	RTHOOK(44);
																	ur1 = RTCCL(loc6);
																	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																	ur8_1 = tr8_1;
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5836, "set_viapoint1_theta", loc4))(loc4, ur8_1x);
																} else {
																	RTHOOK(45);
																	tr1 = RTMS_EX_H("viapoint1_y",11,769938297);
																	ur1 = tr1;
																	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																	if (tb2) {
																		RTHOOK(46);
																		ur1 = RTCCL(loc6);
																		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																		ur8_1 = tr8_1;
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5832, "set_viapoint1_y", loc4))(loc4, ur8_1x);
																	} else {
																		RTHOOK(47);
																		tr1 = RTMS_EX_H("viapoint1_x",11,769938296);
																		ur1 = tr1;
																		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																		if (tb2) {
																			RTHOOK(48);
																			ur1 = RTCCL(loc6);
																			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																			ur8_1 = tr8_1;
																			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5830, "set_viapoint1_x", loc4))(loc4, ur8_1x);
																		} else {
																			RTHOOK(49);
																			tr1 = RTMS_EX_H("viapoint1_z",11,769938298);
																			ur1 = tr1;
																			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																			if (tb2) {
																				RTHOOK(50);
																				ur1 = RTCCL(loc6);
																				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																				ur8_1 = tr8_1;
																				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5834, "set_viapoint1_z", loc4))(loc4, ur8_1x);
																			} else {
																				RTHOOK(51);
																				tr1 = RTMS_EX_H("viapoint2_theta",15,1221487201);
																				ur1 = tr1;
																				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																				if (tb2) {
																					RTHOOK(52);
																					ur1 = RTCCL(loc6);
																					tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																					ur8_1 = tr8_1;
																					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5844, "set_viapoint2_theta", loc4))(loc4, ur8_1x);
																				} else {
																					RTHOOK(53);
																					tr1 = RTMS_EX_H("viapoint2_x",11,770003832);
																					ur1 = tr1;
																					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																					if (tb2) {
																						RTHOOK(54);
																						ur1 = RTCCL(loc6);
																						tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																						ur8_1 = tr8_1;
																						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5838, "set_viapoint2_x", loc4))(loc4, ur8_1x);
																					} else {
																						RTHOOK(55);
																						tr1 = RTMS_EX_H("viapoint2_y",11,770003833);
																						ur1 = tr1;
																						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																						if (tb2) {
																							RTHOOK(56);
																							ur1 = RTCCL(loc6);
																							tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																							ur8_1 = tr8_1;
																							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5840, "set_viapoint2_y", loc4))(loc4, ur8_1x);
																						} else {
																							RTHOOK(57);
																							tr1 = RTMS_EX_H("viapoint2_z",11,770003834);
																							ur1 = tr1;
																							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																							if (tb2) {
																								RTHOOK(58);
																								ur1 = RTCCL(loc6);
																								tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																								ur8_1 = tr8_1;
																								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5842, "set_viapoint2_z", loc4))(loc4, ur8_1x);
																							} else {
																								RTHOOK(59);
																								tr1 = RTMS_EX_H("viapoint3_theta",15,1724803681);
																								ur1 = tr1;
																								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																								if (tb2) {
																									RTHOOK(60);
																									ur1 = RTCCL(loc6);
																									tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																									ur8_1 = tr8_1;
																									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5852, "set_viapoint3_theta", loc4))(loc4, ur8_1x);
																								} else {
																									RTHOOK(61);
																									tr1 = RTMS_EX_H("viapoint3_x",11,770069368);
																									ur1 = tr1;
																									tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																									if (tb2) {
																										RTHOOK(62);
																										ur1 = RTCCL(loc6);
																										tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																										ur8_1 = tr8_1;
																										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5846, "set_viapoint3_x", loc4))(loc4, ur8_1x);
																									} else {
																										RTHOOK(63);
																										tr1 = RTMS_EX_H("viapoint3_y",11,770069369);
																										ur1 = tr1;
																										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																										if (tb2) {
																											RTHOOK(64);
																											ur1 = RTCCL(loc6);
																											tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																											ur8_1 = tr8_1;
																											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5848, "set_viapoint3_y", loc4))(loc4, ur8_1x);
																										} else {
																											RTHOOK(65);
																											tr1 = RTMS_EX_H("viapoint3_z",11,770069370);
																											ur1 = tr1;
																											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc5))(loc5, ur1x)).it_b);
																											if (tb2) {
																												RTHOOK(66);
																												ur1 = RTCCL(loc6);
																												tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5783, dtype))(Current, ur1x)).it_r8);
																												ur8_1 = tr8_1;
																												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5850, "set_viapoint3_z", loc4))(loc4, ur8_1x);
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		RTHOOK(67);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3367, "read_line", loc1))(loc1);
	}
	RTHOOK(68);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3322, "close", loc1))(loc1);
	RTHOOK(69);
	RTDBGAL(Current, 0, 0xF80003C5, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(70);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ui4_1
#undef uw1
#undef arg1
}

void EIF_Minit971 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
