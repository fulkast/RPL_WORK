/*
 * Class BOX [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_563 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_563 [] = {0xFF01,304,562,255,0xFFFF};
static const EIF_TYPE_INDEX egt_2_563 [] = {0xFF01,562,255,0xFFFF};
static const EIF_TYPE_INDEX egt_3_563 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_563 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_563 [] = {0xFF01,562,255,0xFFFF};
static const EIF_TYPE_INDEX egt_6_563 [] = {0xFF01,562,255,0xFFFF};
static const EIF_TYPE_INDEX egt_7_563 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_563 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_563 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_563 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_563 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_563 [] = {562,255,0xFFFF};
static const EIF_TYPE_INDEX egt_13_563 [] = {0xFF01,562,255,0xFFFF};
static const EIF_TYPE_INDEX egt_14_563 [] = {0xFF01,552,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_563 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_563[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_563), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_563), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_563), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_563), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_563), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_563), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_563), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_563), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_563), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_563), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_563), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_563), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_563), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_563), 31, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2446, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2447, 0},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2443, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2444, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2445, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_563), -1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_563), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), -1, 0xFFFFFFFF},
};
void Init563(void)
{
	IDSC(desc_563, 0, 562);
	IDSC(desc_563 + 1, 1, 562);
	IDSC(desc_563 + 32, 89, 562);
	IDSC(desc_563 + 41, 36, 562);
}


#ifdef __cplusplus
}
#endif
