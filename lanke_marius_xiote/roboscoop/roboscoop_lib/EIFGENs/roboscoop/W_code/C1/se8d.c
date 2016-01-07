/*
 * Class SED_META_MODEL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_8 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_8 [] = {0xFF01,304,7,0xFFFF};
static const EIF_TYPE_INDEX egt_2_8 [] = {0xFF01,7,0xFFFF};
static const EIF_TYPE_INDEX egt_3_8 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_8 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_8 [] = {0xFF01,7,0xFFFF};
static const EIF_TYPE_INDEX egt_6_8 [] = {0xFF01,7,0xFFFF};
static const EIF_TYPE_INDEX egt_7_8 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_8 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_8 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_8 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_8 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_8 [] = {0xFF01,7,0xFFFF};


static const struct desc_info desc_8[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_8), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_8), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_8), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_8), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_8), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_8), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_8), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_8), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_8), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_8), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_8), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_8), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0F /*7*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_8), 31, 0xFFFFFFFF},
};
void Init8(void)
{
	IDSC(desc_8, 0, 7);
	IDSC(desc_8 + 1, 1, 7);
}


#ifdef __cplusplus
}
#endif
