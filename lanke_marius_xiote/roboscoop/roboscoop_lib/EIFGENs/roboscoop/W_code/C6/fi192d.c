/*
 * Class FIBONACCI
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_192 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_192 [] = {0xFF01,304,191,0xFFFF};
static const EIF_TYPE_INDEX egt_2_192 [] = {0xFF01,191,0xFFFF};
static const EIF_TYPE_INDEX egt_3_192 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_192 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_192 [] = {0xFF01,191,0xFFFF};
static const EIF_TYPE_INDEX egt_6_192 [] = {0xFF01,191,0xFFFF};
static const EIF_TYPE_INDEX egt_7_192 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_192 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_192 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_192 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_192 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_192 [] = {0xFF01,191,0xFFFF};
static const EIF_TYPE_INDEX egt_13_192 [] = {0xFF01,354,273,0xFFFF};
static const EIF_TYPE_INDEX egt_14_192 [] = {273,0xFFFF};
static const EIF_TYPE_INDEX egt_15_192 [] = {0xFF01,572,255,0xFFFF};


static const struct desc_info desc_192[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_192), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_192), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_192), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_192), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_192), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_192), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_192), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_192), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_192), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_192), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_192), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_192), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_192), 31, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3225, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2583, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2421, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2422, 0},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2418, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2419, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2420, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_192), 3185, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_192), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2584, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3174, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2847, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3182, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2848, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2849, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2850, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2851, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 2842, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2843, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3173, 4},
	{EIF_NON_GENERIC(0x0223 /*273*/), 2844, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 2845, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2846, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3175, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3184, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3181, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3173, 4},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3176, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3177, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2491, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3187, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3183, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2492, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3186, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2493, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3190, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3174, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3178, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3179, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3180, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3189, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3188, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 2844, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3227, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3228, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3229, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3223, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_192), 3224, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 3226, 0xFFFFFFFF},
};
void Init192(void)
{
	IDSC(desc_192, 0, 191);
	IDSC(desc_192 + 1, 1, 191);
	IDSC(desc_192 + 32, 89, 191);
	IDSC(desc_192 + 41, 36, 191);
	IDSC(desc_192 + 42, 30, 191);
	IDSC(desc_192 + 49, 185, 191);
	IDSC(desc_192 + 58, 204, 191);
	IDSC(desc_192 + 59, 342, 191);
	IDSC(desc_192 + 68, 300, 191);
	IDSC(desc_192 + 74, 281, 191);
	IDSC(desc_192 + 75, 242, 191);
	IDSC(desc_192 + 80, 261, 191);
}


#ifdef __cplusplus
}
#endif
