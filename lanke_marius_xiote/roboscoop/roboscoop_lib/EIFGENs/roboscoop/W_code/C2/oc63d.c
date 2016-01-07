/*
 * Class OCCUPANCY_GRID_MSG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_63 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_63 [] = {0xFF01,304,62,0xFFFF};
static const EIF_TYPE_INDEX egt_2_63 [] = {0xFF01,62,0xFFFF};
static const EIF_TYPE_INDEX egt_3_63 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_63 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_63 [] = {0xFF01,62,0xFFFF};
static const EIF_TYPE_INDEX egt_6_63 [] = {0xFF01,62,0xFFFF};
static const EIF_TYPE_INDEX egt_7_63 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_63 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_63 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_63 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_63 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_63 [] = {0xFF01,62,0xFFFF};
static const EIF_TYPE_INDEX egt_13_63 [] = {0xFF01,51,0xFFFF};
static const EIF_TYPE_INDEX egt_14_63 [] = {0xFF01,44,0xFFFF};
static const EIF_TYPE_INDEX egt_15_63 [] = {0xFF01,581,243,0xFFFF};


static const struct desc_info desc_63[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_63), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_63), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_63), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_63), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_63), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_63), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_63), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_63), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_63), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_63), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_63), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_63), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x7D /*62*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_63), 31, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1162, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 879, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 880, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 881, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1177, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1167, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 1168, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1169, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1175, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1176, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 878, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_63), 1116, 0},
	{EIF_GENERIC(NULL), 1163, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1164, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_63), 1165, 8},
	{EIF_GENERIC(egt_15_63), 1166, 16},
	{EIF_GENERIC(NULL), 1170, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 1171, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 1172, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1173, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 1174, 0xFFFFFFFF},
};
void Init63(void)
{
	IDSC(desc_63, 0, 62);
	IDSC(desc_63 + 1, 1, 62);
	IDSC(desc_63 + 32, 31, 62);
	IDSC(desc_63 + 43, 400, 62);
	IDSC(desc_63 + 44, 316, 62);
	IDSC(desc_63 + 45, 154, 62);
}


#ifdef __cplusplus
}
#endif
