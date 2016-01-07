/*
 * Class POSE_2D_LISTENER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_4 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_4 [] = {0xFF01,304,3,0xFFFF};
static const EIF_TYPE_INDEX egt_2_4 [] = {0xFF01,3,0xFFFF};
static const EIF_TYPE_INDEX egt_3_4 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_4 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_4 [] = {0xFF01,3,0xFFFF};
static const EIF_TYPE_INDEX egt_6_4 [] = {0xFF01,3,0xFFFF};
static const EIF_TYPE_INDEX egt_7_4 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_4 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_4 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_4 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_4 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_4 [] = {0xFF01,3,0xFFFF};


static const struct desc_info desc_4[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_4), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_4), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_4), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_4), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_4), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_4), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_4), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_4), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_4), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_4), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_4), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_4), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07 /*3*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_4), 31, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), -1, 0xFFFFFFFF},
};
void Init4(void)
{
	IDSC(desc_4, 0, 3);
	IDSC(desc_4 + 1, 1, 3);
	IDSC(desc_4 + 32, 362, 3);
}


#ifdef __cplusplus
}
#endif
