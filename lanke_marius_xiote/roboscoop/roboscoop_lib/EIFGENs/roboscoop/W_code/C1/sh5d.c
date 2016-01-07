/*
 * Class SHARED_EXECUTION_ENVIRONMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_5 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_5 [] = {0xFF01,304,4,0xFFFF};
static const EIF_TYPE_INDEX egt_2_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_3_5 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_5 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_6_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_7_5 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_5 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_5 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_5 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_5 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_13_5 [] = {0xFF01,229,0xFFFF};


static const struct desc_info desc_5[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_5), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_5), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_5), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_5), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_5), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_5), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_5), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_5), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_5), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_5), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_5), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_5), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09 /*4*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_5), 31, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_5), 37, 0xFFFFFFFF},
};
void Init5(void)
{
	IDSC(desc_5, 0, 4);
	IDSC(desc_5 + 1, 1, 4);
	IDSC(desc_5 + 32, 358, 4);
}


#ifdef __cplusplus
}
#endif
