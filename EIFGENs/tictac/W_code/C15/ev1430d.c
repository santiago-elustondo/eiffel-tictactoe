/*
 * Class EV_DIALOG_I
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1430 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1430 [] = {0xFF01,244,1429,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1430 [] = {0xFF01,1429,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1430 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1430 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1430 [] = {0xFF01,1429,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1430 [] = {0xFF01,1429,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1430 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1430 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1430 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1430 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1430 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1430 [] = {0xFF01,1429,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1430 [] = {0xFF01,0xFF01,1283,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1430 [] = {0xFF01,1235,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1430 [] = {0xFF01,1235,0xFFFF};
static const EIF_TYPE_INDEX egt_16_1430 [] = {0xFF01,306,217,217,0xFFFF};
static const EIF_TYPE_INDEX egt_17_1430 [] = {0xFF01,971,0xFFFF};
static const EIF_TYPE_INDEX egt_18_1430 [] = {0xFF01,315,217,0xFFFF};
static const EIF_TYPE_INDEX egt_19_1430 [] = {0xFF01,1274,0xFFFF};
static const EIF_TYPE_INDEX egt_20_1430 [] = {0xFF01,1418,0xFFFF};
static const EIF_TYPE_INDEX egt_21_1430 [] = {0xFF01,1305,0xFFFF};
static const EIF_TYPE_INDEX egt_22_1430 [] = {0xFF01,1471,0xFFFF};
static const EIF_TYPE_INDEX egt_23_1430 [] = {0xFF01,1262,0xFFFF};
static const EIF_TYPE_INDEX egt_24_1430 [] = {0xFF01,1143,0xFFFF};
static const EIF_TYPE_INDEX egt_25_1430 [] = {0xFF01,1137,0xFFFF};
static const EIF_TYPE_INDEX egt_26_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_27_1430 [] = {0xFF01,1130,0xFFFF};
static const EIF_TYPE_INDEX egt_28_1430 [] = {365,0xFF01,0xFFF9,0,185,0,0xFFFF};
static const EIF_TYPE_INDEX egt_29_1430 [] = {251,0xFF01,0xFFF9,4,185,0xFF01,1328,0xFF01,246,0xFF01,972,0xFF01,1263,0,0xFFFF};
static const EIF_TYPE_INDEX egt_30_1430 [] = {0xFF01,1353,0xFFFF};
static const EIF_TYPE_INDEX egt_31_1430 [] = {0xFF01,1239,0xFFFF};
static const EIF_TYPE_INDEX egt_32_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_33_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_34_1430 [] = {0xFF01,1235,0xFFFF};
static const EIF_TYPE_INDEX egt_35_1430 [] = {0xFF01,1237,0xFFFF};
static const EIF_TYPE_INDEX egt_36_1430 [] = {0xFF01,1237,0xFFFF};
static const EIF_TYPE_INDEX egt_37_1430 [] = {0xFF01,1555,0xFF01,0xFFF9,1,185,0xFF01,284,0xFF01,237,0xFFFF};
static const EIF_TYPE_INDEX egt_38_1430 [] = {1555,0xFF01,0xFFF9,1,185,0xFF01,284,0xFF01,237,0xFFFF};
static const EIF_TYPE_INDEX egt_39_1430 [] = {0xFF01,1142,0xFFFF};
static const EIF_TYPE_INDEX egt_40_1430 [] = {0xFF01,1145,0xFFFF};
static const EIF_TYPE_INDEX egt_41_1430 [] = {0xFF01,1145,0xFFFF};
static const EIF_TYPE_INDEX egt_42_1430 [] = {0xFF01,1145,0xFFFF};
static const EIF_TYPE_INDEX egt_43_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_44_1430 [] = {0xFF01,1140,0xFFFF};
static const EIF_TYPE_INDEX egt_45_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_46_1430 [] = {0xFF01,1139,0xFFFF};
static const EIF_TYPE_INDEX egt_47_1430 [] = {0xFF01,1138,0xFFFF};
static const EIF_TYPE_INDEX egt_48_1430 [] = {0xFF01,1139,0xFFFF};
static const EIF_TYPE_INDEX egt_49_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_50_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_51_1430 [] = {0xFF01,1141,0xFFFF};
static const EIF_TYPE_INDEX egt_52_1430 [] = {365,0xFF01,0xFFF9,0,185,0xFF01,1027,0xFFFF};
static const EIF_TYPE_INDEX egt_53_1430 [] = {365,0xFF01,0xFFF9,0,185,0xFF01,1027,0xFFFF};
static const EIF_TYPE_INDEX egt_54_1430 [] = {0xFF01,1160,0xFFFF};
static const EIF_TYPE_INDEX egt_55_1430 [] = {0xFF01,1235,0xFFFF};
static const EIF_TYPE_INDEX egt_56_1430 [] = {365,0xFF01,0xFFF9,2,185,217,217,1197,0xFFFF};
static const EIF_TYPE_INDEX egt_57_1430 [] = {345,0xFF01,0xFFF9,1,185,0xFF01,1508,0xFFFF};
static const EIF_TYPE_INDEX egt_58_1430 [] = {0xFF01,1134,0xFFFF};
static const EIF_TYPE_INDEX egt_59_1430 [] = {0xFF01,1266,0xFFFF};
static const EIF_TYPE_INDEX egt_60_1430 [] = {246,0xFF01,1267,0xFFFF};
static const EIF_TYPE_INDEX egt_61_1430 [] = {246,0xFF01,1267,0xFFFF};
static const EIF_TYPE_INDEX egt_62_1430 [] = {0xFF01,1136,0xFFFF};
static const EIF_TYPE_INDEX egt_63_1430 [] = {262,0xFF01,0xFFF9,1,185,0xFF01,1247,202,0xFFFF};
static const EIF_TYPE_INDEX egt_64_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_65_1430 [] = {0xFF01,1141,0xFFFF};
static const EIF_TYPE_INDEX egt_66_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_67_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_68_1430 [] = {0xFF01,1272,0xFFFF};
static const EIF_TYPE_INDEX egt_69_1430 [] = {0xFF01,1272,0xFFFF};
static const EIF_TYPE_INDEX egt_70_1430 [] = {0xFF01,237,0xFFFF};
static const EIF_TYPE_INDEX egt_71_1430 [] = {0xFF01,1129,0xFFFF};
static const EIF_TYPE_INDEX egt_72_1430 [] = {0xFF01,366,0xFF01,1238,217,0xFFFF};
static const EIF_TYPE_INDEX egt_73_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_74_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_75_1430 [] = {0xFF01,1146,0xFFFF};
static const EIF_TYPE_INDEX egt_76_1430 [] = {0xFF01,237,0xFFFF};
static const EIF_TYPE_INDEX egt_77_1430 [] = {0xFF01,1293,0xFFFF};
static const EIF_TYPE_INDEX egt_78_1430 [] = {0xFF01,1244,0xFFFF};
static const EIF_TYPE_INDEX egt_79_1430 [] = {0xFF05,1244,0xFFFF};
static const EIF_TYPE_INDEX egt_80_1430 [] = {0xFF01,1239,0xFFFF};


static const struct desc_info desc_1430[] = {
	{EIF_GENERIC(NULL), 20070, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1430), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1430), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1430), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1430), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1430), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1430), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1430), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1430), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1430), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1430), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1430), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1430), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0B2B /*1429*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1430), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18820, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18821, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 18823, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1430), 18824, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A07 /*1283*/), 20069, 256},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18826, 427},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18827, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18828, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18829, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18830, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18831, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 18832, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18833, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 18834, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 18810, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 18811, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 18812, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18813, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18814, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18815, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18816, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18817, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18818, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 18819, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1430), 15325, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1430), 15326, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 15327, 416},
	{EIF_GENERIC(egt_16_1430), 15328, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_1430), 15329, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0AA9 /*1364*/), 15330, 232},
	{EIF_NON_GENERIC(0x0AA9 /*1364*/), 15331, 240},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 15332, 430},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 15333, 432},
	{EIF_GENERIC(egt_18_1430), 15334, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_1430), 15335, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_1430), 15336, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15337, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_1430), 15338, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_1430), 15319, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15320, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A09 /*1284*/), 15321, 248},
	{EIF_GENERIC(egt_23_1430), 15322, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 15323, 434},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 15324, 436},
	{EIF_GENERIC(egt_24_1430), 15002, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08EF /*1143*/), 15003, 88},
	{EIF_GENERIC(egt_25_1430), 15004, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08E3 /*1137*/), 15005, 96},
	{EIF_GENERIC(egt_26_1430), 15006, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 15007, 104},
	{EIF_GENERIC(egt_27_1430), 15000, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08D5 /*1130*/), 15001, 112},
	{EIF_NON_GENERIC(0x01 /*0*/), 19738, 288},
	{EIF_GENERIC(egt_28_1430), 19739, 296},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19740, 0xFFFFFFFF},
	{EIF_GENERIC(egt_29_1430), 19741, 304},
	{EIF_NON_GENERIC(0x09A7 /*1235*/), 19742, 312},
	{EIF_NON_GENERIC(0x09A7 /*1235*/), 19743, 320},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19744, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19745, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19746, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19747, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19748, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19749, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19750, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19751, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19752, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19708, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19709, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19710, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19711, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19712, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19713, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19714, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19715, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19716, 422},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19717, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19718, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19719, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19720, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 19721, 438},
	{EIF_NON_GENERIC(0x01B9 /*220*/), 19722, 440},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19723, 423},
	{EIF_NON_GENERIC(0x0177 /*187*/), 19724, 428},
	{EIF_NON_GENERIC(0x0177 /*187*/), 19725, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 19726, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 19727, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0177 /*187*/), 19728, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19730, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19731, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x095B /*1197*/), 19732, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09DF /*1263*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19733, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19734, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_30_1430), 19735, 0xFFFFFFFF},
	{EIF_GENERIC(egt_31_1430), 19736, 0xFFFFFFFF},
	{EIF_GENERIC(egt_32_1430), 14863, 0xFFFFFFFF},
	{EIF_GENERIC(egt_33_1430), 14864, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14865, 0},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14866, 8},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19523, 444},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19524, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09BF /*1247*/), 19525, 272},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19526, 417},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19527, 418},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19528, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19529, 419},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19530, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09C7 /*1251*/), 19531, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09C7 /*1251*/), 19532, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19533, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19534, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19535, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19536, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19505, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19506, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19507, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19508, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19509, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19510, 0xFFFFFFFF},
	{EIF_GENERIC(egt_34_1430), 19511, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0AF7 /*1403*/), 19512, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0B79 /*1468*/), 19513, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0AF7 /*1403*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 19515, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19516, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19517, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19518, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19519, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19520, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19521, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19589, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19590, 421},
	{EIF_GENERIC(NULL), 19591, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19592, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_35_1430), 19488, 0xFFFFFFFF},
	{EIF_GENERIC(egt_36_1430), 19489, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09AB /*1237*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09AB /*1237*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_37_1430), 15291, 0xFFFFFFFF},
	{EIF_GENERIC(egt_38_1430), 15292, 120},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_39_1430), 15293, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08ED /*1142*/), 15294, 128},
	{EIF_GENERIC(egt_40_1430), 15295, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F3 /*1145*/), 15296, 136},
	{EIF_GENERIC(egt_41_1430), 15297, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F3 /*1145*/), 15298, 144},
	{EIF_GENERIC(egt_42_1430), 15299, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F3 /*1145*/), 15300, 152},
	{EIF_GENERIC(egt_43_1430), 15301, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 15302, 160},
	{EIF_GENERIC(egt_44_1430), 15303, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08E9 /*1140*/), 15304, 168},
	{EIF_GENERIC(egt_45_1430), 15305, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 15306, 176},
	{EIF_GENERIC(egt_46_1430), 15307, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08E7 /*1139*/), 15308, 184},
	{EIF_GENERIC(egt_47_1430), 15309, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08E5 /*1138*/), 15310, 192},
	{EIF_GENERIC(egt_48_1430), 15311, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08E7 /*1139*/), 15312, 200},
	{EIF_GENERIC(egt_49_1430), 15313, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 15314, 208},
	{EIF_GENERIC(egt_50_1430), 15315, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 15316, 216},
	{EIF_GENERIC(egt_51_1430), 15317, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08EB /*1141*/), 15318, 224},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_52_1430), 18969, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18970, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18971, 0xFFFFFFFF},
	{EIF_GENERIC(egt_53_1430), 18973, 264},
	{EIF_GENERIC(NULL), 19776, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18975, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09E7 /*1267*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_54_1430), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09A7 /*1235*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_55_1430), 19777, 0xFFFFFFFF},
	{EIF_GENERIC(egt_56_1430), 19778, 328},
	{EIF_NON_GENERIC(0x09C7 /*1251*/), 19779, 336},
	{EIF_GENERIC(egt_57_1430), 19780, 344},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19781, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19782, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19783, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19784, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19785, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19788, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19789, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19790, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20040, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A1B /*1293*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19610, 0xFFFFFFFF},
	{EIF_GENERIC(egt_58_1430), 14871, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08DD /*1134*/), 14872, 24},
	{EIF_GENERIC(egt_59_1430), 19836, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 20044, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09E5 /*1266*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_60_1430), 19819, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19949, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19820, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19821, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19822, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19823, 0xFFFFFFFF},
	{EIF_GENERIC(egt_61_1430), 19825, 352},
	{EIF_GENERIC(NULL), 19826, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19827, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19828, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19829, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19830, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19831, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19832, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19833, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19834, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19835, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_62_1430), 14867, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08E1 /*1136*/), 14868, 16},
	{EIF_GENERIC(egt_63_1430), 19585, 280},
	{EIF_NON_GENERIC(0x0195 /*202*/), 19586, 420},
	{EIF_GENERIC(NULL), 19587, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19588, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19583, 0xFFFFFFFF},
	{EIF_GENERIC(egt_64_1430), 14992, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14993, 56},
	{EIF_GENERIC(egt_65_1430), 14994, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08EB /*1141*/), 14995, 64},
	{EIF_GENERIC(egt_66_1430), 14996, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14997, 72},
	{EIF_GENERIC(egt_67_1430), 14998, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14999, 80},
	{EIF_GENERIC(egt_68_1430), 20031, 360},
	{EIF_GENERIC(egt_69_1430), 20037, 368},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 20047, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 20042, 0xFFFFFFFF},
	{EIF_GENERIC(egt_70_1430), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 20043, 424},
	{EIF_NON_GENERIC(0x0A5F /*1327*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 20045, 0xFFFFFFFF},
	{EIF_GENERIC(egt_71_1430), 20046, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20048, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20032, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20033, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20034, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20035, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_72_1430), 20036, 376},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 20038, 425},
	{EIF_NON_GENERIC(0x08D3 /*1129*/), 20039, 384},
	{EIF_GENERIC(egt_73_1430), 14890, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14891, 32},
	{EIF_GENERIC(egt_74_1430), 14892, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14893, 40},
	{EIF_GENERIC(egt_75_1430), 14894, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08F5 /*1146*/), 14895, 48},
	{EIF_GENERIC(egt_76_1430), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_77_1430), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 20054, 426},
	{EIF_GENERIC(NULL), 20055, 0xFFFFFFFF},
	{EIF_GENERIC(egt_78_1430), 15591, 0xFFFFFFFF},
	{EIF_GENERIC(egt_79_1430), 15588, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15589, 0xFFFFFFFF},
	{EIF_GENERIC(egt_80_1430), 15590, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09FD /*1278*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A1F /*1295*/), 20057, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A1F /*1295*/), 20058, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A1F /*1295*/), 20059, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20060, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20061, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20062, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20063, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20064, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A1F /*1295*/), 20065, 392},
	{EIF_NON_GENERIC(0x0A1F /*1295*/), 20066, 400},
	{EIF_NON_GENERIC(0x0A1F /*1295*/), 20067, 408},
	{EIF_GENERIC(NULL), 20068, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
};
void Init1430(void)
{
	IDSC(desc_1430, 0, 1429);
	IDSC(desc_1430 + 1, 1, 1429);
	IDSC(desc_1430 + 32, 516, 1429);
	IDSC(desc_1430 + 59, 621, 1429);
	IDSC(desc_1430 + 79, 622, 1429);
	IDSC(desc_1430 + 87, 503, 1429);
	IDSC(desc_1430 + 141, 770, 1429);
	IDSC(desc_1430 + 145, 655, 1429);
	IDSC(desc_1430 + 179, 636, 1429);
	IDSC(desc_1430 + 188, 656, 1429);
	IDSC(desc_1430 + 195, 657, 1429);
	IDSC(desc_1430 + 225, 658, 1429);
	IDSC(desc_1430 + 231, 528, 1429);
	IDSC(desc_1430 + 258, 702, 1429);
	IDSC(desc_1430 + 262, 750, 1429);
	IDSC(desc_1430 + 264, 625, 1429);
	IDSC(desc_1430 + 290, 764, 1429);
	IDSC(desc_1430 + 292, 653, 1429);
	IDSC(desc_1430 + 297, 647, 1429);
	IDSC(desc_1430 + 305, 518, 1429);
	IDSC(desc_1430 + 338, 727, 1429);
	IDSC(desc_1430 + 344, 599, 1429);
	IDSC(desc_1430 + 357, 524, 1429);
	IDSC(desc_1430 + 361, 615, 1429);
	IDSC(desc_1430 + 380, 620, 1429);
	IDSC(desc_1430 + 388, 646, 1429);
}


#ifdef __cplusplus
}
#endif
