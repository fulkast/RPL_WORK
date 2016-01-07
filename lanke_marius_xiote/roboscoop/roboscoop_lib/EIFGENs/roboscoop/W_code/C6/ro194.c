/*
 * Code for class ROS_NODE_STARTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F194_3218(EIF_REFERENCE);
extern void EIF_Minit194(void);

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

/* {ROS_NODE_STARTER}.roboscoop_node */
RTOID (F194_3218)
EIF_TYPED_VALUE F194_3218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "roboscoop_node";
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOQRR
	RTOQDR(F194_3218);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 193, Current, 0, 0, 3257);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(193, Current, 3257);
	RTIV(Current, RTAL);
	RTOQP;
	RTOC_GLOBAL(Result);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800001D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(29, 0x05).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(574, Dtype(tr1), tp1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOQE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit194 (void)
{
	GTCX
	RTOQS (3218,F194_3218)
}


#ifdef __cplusplus
}
#endif
