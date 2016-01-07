/*
 * Class ODOMETRY_LISTENER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_78 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_78 [] = {0xFF01,304,77,0xFFFF};
static const EIF_TYPE_INDEX egt_2_78 [] = {0xFF01,77,0xFFFF};
static const EIF_TYPE_INDEX egt_3_78 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_78 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_78 [] = {0xFF01,77,0xFFFF};
static const EIF_TYPE_INDEX egt_6_78 [] = {0xFF01,77,0xFFFF};
static const EIF_TYPE_INDEX egt_7_78 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_78 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_78 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_78 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_78 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_78 [] = {0xFF01,77,0xFFFF};


static const struct desc_info desc_78[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_78), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_78), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_78), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_78), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_78), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_78), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_78), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_78), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_78), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_78), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_78), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_78), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x9B /*77*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_78), 31, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), -1, 0xFFFFFFFF},
};
void Init78(void)
{
	IDSC(desc_78, 0, 77);
	IDSC(desc_78 + 1, 1, 77);
	IDSC(desc_78 + 32, 188, 77);
}


#ifdef __cplusplus
}
#endif
