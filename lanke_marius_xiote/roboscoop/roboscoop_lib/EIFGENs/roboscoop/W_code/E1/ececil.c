#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A70_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1151, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* POSE_LISTENER update_pose */
void _A73_32_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1159, "update_pose", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ODOMETRY_LISTENER update_odometry */
void _A78_32_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1260, "update_odometry", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WANDER_CONTROLLER go */
void _A77_36 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1177, "go", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7], closed [8]);
}

	/* WANDER_CONTROLLER turn_when_obstacle_aside */
void _A77_38 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1179, "turn_when_obstacle_aside", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7], closed [8]);
}

	/* WANDER_CONTROLLER stop_when_lifted */
void _A77_39 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1180, "stop_when_lifted", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7]);
}

	/* WANDER_CONTROLLER stop_when_obstacle_huge */
void _A77_37 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1178, "stop_when_obstacle_huge", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6], closed [7], closed [8]);
}

	/* PATH_LISTENER update_path */
void _A93_32_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1407, "update_path", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* OCCUPANCY_GRID_LISTENER update_occupancy_grid */
void _A42_32_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(804, "update_occupancy_grid", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ROS_SUBSCRIBER [G#1] callback */
void A432_44 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2530, "callback", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]));
}

	/* ROS_SUBSCRIBER [G#1] fake_action */
void _A432_49_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2535, "fake_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A344_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3796, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A379_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3796, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A383_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3796, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_TYPED_VALUE _A659_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3796, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A923_47_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3796, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION clear_all */
void A236_91 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3827, "clear_all", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A236_157 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3891, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A236_158 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3892, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A302_159_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F302_7632)(closed [1].it_r, open [1]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A70_36,
(fnptr)A432_44,
(fnptr)A236_91,
(fnptr)A236_157,
(fnptr)A236_158,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
