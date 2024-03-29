/* This file was generated automatically by the Snowball to ISO C compiler */
/* http://snowballstem.org/ */

#include "../runtime/header.h"

static int r_step7(struct SN_env * z);
static int r_step6(struct SN_env * z);
static int r_step5m(struct SN_env * z);
static int r_step5l(struct SN_env * z);
static int r_step5k(struct SN_env * z);
static int r_step5j(struct SN_env * z);
static int r_step5i(struct SN_env * z);
static int r_step5h(struct SN_env * z);
static int r_step5g(struct SN_env * z);
static int r_step5f(struct SN_env * z);
static int r_step5e(struct SN_env * z);
static int r_step5d(struct SN_env * z);
static int r_step5c(struct SN_env * z);
static int r_step5b(struct SN_env * z);
static int r_step5a(struct SN_env * z);
static int r_step4(struct SN_env * z);
static int r_step3(struct SN_env * z);
static int r_step2d(struct SN_env * z);
static int r_step2c(struct SN_env * z);
static int r_step2b(struct SN_env * z);
static int r_step2a(struct SN_env * z);
static int r_step1(struct SN_env * z);
static int r_steps10(struct SN_env * z);
static int r_steps9(struct SN_env * z);
static int r_steps8(struct SN_env * z);
static int r_steps7(struct SN_env * z);
static int r_steps6(struct SN_env * z);
static int r_steps5(struct SN_env * z);
static int r_steps4(struct SN_env * z);
static int r_steps3(struct SN_env * z);
static int r_steps2(struct SN_env * z);
static int r_steps1(struct SN_env * z);
static int r_has_min_length(struct SN_env * z);
static int r_tolower(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif
extern int greek_UTF_8_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * greek_UTF_8_create_env(void);
extern void greek_UTF_8_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_1[2] = { 0xCF, 0x82 };
static const symbol s_0_2[2] = { 0xCE, 0x86 };
static const symbol s_0_3[2] = { 0xCE, 0x88 };
static const symbol s_0_4[2] = { 0xCE, 0x89 };
static const symbol s_0_5[2] = { 0xCE, 0x8A };
static const symbol s_0_6[2] = { 0xCF, 0x8A };
static const symbol s_0_7[2] = { 0xCF, 0x8B };
static const symbol s_0_8[2] = { 0xCE, 0x8C };
static const symbol s_0_9[2] = { 0xCF, 0x8C };
static const symbol s_0_10[2] = { 0xCF, 0x8D };
static const symbol s_0_11[2] = { 0xCE, 0x8E };
static const symbol s_0_12[2] = { 0xCF, 0x8E };
static const symbol s_0_13[2] = { 0xCE, 0x8F };
static const symbol s_0_14[2] = { 0xCE, 0x90 };
static const symbol s_0_15[2] = { 0xCE, 0x91 };
static const symbol s_0_16[2] = { 0xCE, 0x92 };
static const symbol s_0_17[2] = { 0xCE, 0x93 };
static const symbol s_0_18[2] = { 0xCE, 0x94 };
static const symbol s_0_19[2] = { 0xCE, 0x95 };
static const symbol s_0_20[2] = { 0xCE, 0x96 };
static const symbol s_0_21[2] = { 0xCE, 0x97 };
static const symbol s_0_22[2] = { 0xCE, 0x98 };
static const symbol s_0_23[2] = { 0xCE, 0x99 };
static const symbol s_0_24[2] = { 0xCE, 0x9A };
static const symbol s_0_25[2] = { 0xCE, 0x9B };
static const symbol s_0_26[2] = { 0xCE, 0x9C };
static const symbol s_0_27[2] = { 0xCE, 0x9D };
static const symbol s_0_28[2] = { 0xCE, 0x9E };
static const symbol s_0_29[2] = { 0xCE, 0x9F };
static const symbol s_0_30[2] = { 0xCE, 0xA0 };
static const symbol s_0_31[2] = { 0xCE, 0xA1 };
static const symbol s_0_32[2] = { 0xCE, 0xA3 };
static const symbol s_0_33[2] = { 0xCE, 0xA4 };
static const symbol s_0_34[2] = { 0xCE, 0xA5 };
static const symbol s_0_35[2] = { 0xCE, 0xA6 };
static const symbol s_0_36[2] = { 0xCE, 0xA7 };
static const symbol s_0_37[2] = { 0xCE, 0xA8 };
static const symbol s_0_38[2] = { 0xCE, 0xA9 };
static const symbol s_0_39[2] = { 0xCE, 0xAA };
static const symbol s_0_40[2] = { 0xCE, 0xAB };
static const symbol s_0_41[2] = { 0xCE, 0xAC };
static const symbol s_0_42[2] = { 0xCE, 0xAD };
static const symbol s_0_43[2] = { 0xCE, 0xAE };
static const symbol s_0_44[2] = { 0xCE, 0xAF };
static const symbol s_0_45[2] = { 0xCE, 0xB0 };

static const struct among a_0[46] =
{
/*  0 */ { 0, 0, -1, 25, 0},
/*  1 */ { 2, s_0_1, 0, 18, 0},
/*  2 */ { 2, s_0_2, 0, 1, 0},
/*  3 */ { 2, s_0_3, 0, 5, 0},
/*  4 */ { 2, s_0_4, 0, 7, 0},
/*  5 */ { 2, s_0_5, 0, 9, 0},
/*  6 */ { 2, s_0_6, 0, 7, 0},
/*  7 */ { 2, s_0_7, 0, 20, 0},
/*  8 */ { 2, s_0_8, 0, 15, 0},
/*  9 */ { 2, s_0_9, 0, 15, 0},
/* 10 */ { 2, s_0_10, 0, 20, 0},
/* 11 */ { 2, s_0_11, 0, 20, 0},
/* 12 */ { 2, s_0_12, 0, 24, 0},
/* 13 */ { 2, s_0_13, 0, 24, 0},
/* 14 */ { 2, s_0_14, 0, 7, 0},
/* 15 */ { 2, s_0_15, 0, 1, 0},
/* 16 */ { 2, s_0_16, 0, 2, 0},
/* 17 */ { 2, s_0_17, 0, 3, 0},
/* 18 */ { 2, s_0_18, 0, 4, 0},
/* 19 */ { 2, s_0_19, 0, 5, 0},
/* 20 */ { 2, s_0_20, 0, 6, 0},
/* 21 */ { 2, s_0_21, 0, 7, 0},
/* 22 */ { 2, s_0_22, 0, 8, 0},
/* 23 */ { 2, s_0_23, 0, 9, 0},
/* 24 */ { 2, s_0_24, 0, 10, 0},
/* 25 */ { 2, s_0_25, 0, 11, 0},
/* 26 */ { 2, s_0_26, 0, 12, 0},
/* 27 */ { 2, s_0_27, 0, 13, 0},
/* 28 */ { 2, s_0_28, 0, 14, 0},
/* 29 */ { 2, s_0_29, 0, 15, 0},
/* 30 */ { 2, s_0_30, 0, 16, 0},
/* 31 */ { 2, s_0_31, 0, 17, 0},
/* 32 */ { 2, s_0_32, 0, 18, 0},
/* 33 */ { 2, s_0_33, 0, 19, 0},
/* 34 */ { 2, s_0_34, 0, 20, 0},
/* 35 */ { 2, s_0_35, 0, 21, 0},
/* 36 */ { 2, s_0_36, 0, 22, 0},
/* 37 */ { 2, s_0_37, 0, 23, 0},
/* 38 */ { 2, s_0_38, 0, 24, 0},
/* 39 */ { 2, s_0_39, 0, 9, 0},
/* 40 */ { 2, s_0_40, 0, 20, 0},
/* 41 */ { 2, s_0_41, 0, 1, 0},
/* 42 */ { 2, s_0_42, 0, 5, 0},
/* 43 */ { 2, s_0_43, 0, 7, 0},
/* 44 */ { 2, s_0_44, 0, 9, 0},
/* 45 */ { 2, s_0_45, 0, 20, 0}
};

static const symbol s_1_0[16] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCF, 0x89, 0xCF, 0x83 };
static const symbol s_1_1[6] = { 0xCF, 0x86, 0xCF, 0x89, 0xCF, 0x83 };
static const symbol s_1_2[10] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_1_3[10] = { 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_1_4[10] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB5, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_1_5[20] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_6[10] = { 0xCF, 0x86, 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_7[14] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_8[14] = { 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_9[14] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB5, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_10[18] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBF, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_11[14] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBF, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_1_12[12] = { 0xCF, 0x86, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_1_13[14] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_1_14[12] = { 0xCF, 0x83, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_1_15[16] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_1_16[14] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_1_17[18] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_1_18[8] = { 0xCF, 0x86, 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_1_19[12] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_1_20[12] = { 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_1_21[12] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB5, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_1_22[16] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBF, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_1_23[10] = { 0xCF, 0x86, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_1_24[12] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_1_25[10] = { 0xCF, 0x83, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_1_26[14] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_1_27[12] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_1_28[12] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB7 };
static const symbol s_1_29[20] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCF, 0x89, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_30[10] = { 0xCF, 0x86, 0xCF, 0x89, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_31[14] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_32[14] = { 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_33[14] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB5, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_34[18] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBF, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_35[12] = { 0xCF, 0x86, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_36[14] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_37[12] = { 0xCF, 0x83, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_38[16] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_1_39[14] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_1[40] =
{
/*  0 */ { 16, s_1_0, -1, 10, 0},
/*  1 */ { 6, s_1_1, -1, 9, 0},
/*  2 */ { 10, s_1_2, -1, 7, 0},
/*  3 */ { 10, s_1_3, -1, 8, 0},
/*  4 */ { 10, s_1_4, -1, 6, 0},
/*  5 */ { 20, s_1_5, -1, 10, 0},
/*  6 */ { 10, s_1_6, -1, 9, 0},
/*  7 */ { 14, s_1_7, -1, 7, 0},
/*  8 */ { 14, s_1_8, -1, 8, 0},
/*  9 */ { 14, s_1_9, -1, 6, 0},
/* 10 */ { 18, s_1_10, -1, 11, 0},
/* 11 */ { 14, s_1_11, -1, 11, 0},
/* 12 */ { 12, s_1_12, -1, 1, 0},
/* 13 */ { 14, s_1_13, -1, 2, 0},
/* 14 */ { 12, s_1_14, -1, 4, 0},
/* 15 */ { 16, s_1_15, -1, 5, 0},
/* 16 */ { 14, s_1_16, -1, 3, 0},
/* 17 */ { 18, s_1_17, -1, 10, 0},
/* 18 */ { 8, s_1_18, -1, 9, 0},
/* 19 */ { 12, s_1_19, -1, 7, 0},
/* 20 */ { 12, s_1_20, -1, 8, 0},
/* 21 */ { 12, s_1_21, -1, 6, 0},
/* 22 */ { 16, s_1_22, -1, 11, 0},
/* 23 */ { 10, s_1_23, -1, 1, 0},
/* 24 */ { 12, s_1_24, -1, 2, 0},
/* 25 */ { 10, s_1_25, -1, 4, 0},
/* 26 */ { 14, s_1_26, -1, 5, 0},
/* 27 */ { 12, s_1_27, -1, 3, 0},
/* 28 */ { 12, s_1_28, -1, 7, 0},
/* 29 */ { 20, s_1_29, -1, 10, 0},
/* 30 */ { 10, s_1_30, -1, 9, 0},
/* 31 */ { 14, s_1_31, -1, 7, 0},
/* 32 */ { 14, s_1_32, -1, 8, 0},
/* 33 */ { 14, s_1_33, -1, 6, 0},
/* 34 */ { 18, s_1_34, -1, 11, 0},
/* 35 */ { 12, s_1_35, -1, 1, 0},
/* 36 */ { 14, s_1_36, -1, 2, 0},
/* 37 */ { 12, s_1_37, -1, 4, 0},
/* 38 */ { 16, s_1_38, -1, 5, 0},
/* 39 */ { 14, s_1_39, -1, 3, 0}
};

static const symbol s_2_0[4] = { 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_2_1[12] = { 0xCE, 0xBE, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_2_2[6] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_2_3[12] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB9, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_2_4[12] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_2_5[8] = { 0xCE, 0xB5, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_2_6[8] = { 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_2_7[8] = { 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };
static const symbol s_2_8[14] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };

static const struct among a_2[9] =
{
/*  0 */ { 4, s_2_0, -1, 1, 0},
/*  1 */ { 12, s_2_1, 0, 1, 0},
/*  2 */ { 6, s_2_2, 0, 1, 0},
/*  3 */ { 12, s_2_3, 0, 1, 0},
/*  4 */ { 12, s_2_4, 0, 1, 0},
/*  5 */ { 8, s_2_5, 0, 1, 0},
/*  6 */ { 8, s_2_6, -1, 1, 0},
/*  7 */ { 8, s_2_7, -1, 1, 0},
/*  8 */ { 14, s_2_8, 7, 1, 0}
};

static const symbol s_3_0[2] = { 0xCF, 0x80 };
static const symbol s_3_1[6] = { 0xCE, 0xB9, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_3_2[2] = { 0xCF, 0x81 };
static const symbol s_3_3[4] = { 0xCF, 0x80, 0xCF, 0x81 };
static const symbol s_3_4[6] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCF, 0x81 };
static const symbol s_3_5[6] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x81 };
static const symbol s_3_6[12] = { 0xCE, 0xB3, 0xCE, 0xBB, 0xCF, 0x85, 0xCE, 0xBA, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_3_7[10] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_3_8[10] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_3_9[6] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_3_10[6] = { 0xCE, 0xB3, 0xCE, 0xBA, 0xCF, 0x81 };
static const symbol s_3_11[14] = { 0xCF, 0x80, 0xCE, 0xB9, 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_3_12[12] = { 0xCE, 0xB2, 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xB2, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_3_13[12] = { 0xCE, 0xB3, 0xCE, 0xBB, 0xCF, 0x85, 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_3_14[6] = { 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_3_15[2] = { 0xCE, 0xB2 };
static const symbol s_3_16[12] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x85, 0xCF, 0x81, 0xCE, 0xB9 };
static const symbol s_3_17[8] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBA };
static const symbol s_3_18[8] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBA };
static const symbol s_3_19[2] = { 0xCE, 0xBB };
static const symbol s_3_20[2] = { 0xCE, 0xBC };
static const symbol s_3_21[8] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x81, 0xCE, 0xBD };

static const struct among a_3[22] =
{
/*  0 */ { 2, s_3_0, -1, 1, 0},
/*  1 */ { 6, s_3_1, 0, 1, 0},
/*  2 */ { 2, s_3_2, -1, 1, 0},
/*  3 */ { 4, s_3_3, 2, 1, 0},
/*  4 */ { 6, s_3_4, 3, 1, 0},
/*  5 */ { 6, s_3_5, 2, 1, 0},
/*  6 */ { 12, s_3_6, 2, 1, 0},
/*  7 */ { 10, s_3_7, 2, 1, 0},
/*  8 */ { 10, s_3_8, 2, 1, 0},
/*  9 */ { 6, s_3_9, 2, 1, 0},
/* 10 */ { 6, s_3_10, 2, 1, 0},
/* 11 */ { 14, s_3_11, 2, 1, 0},
/* 12 */ { 12, s_3_12, 2, 1, 0},
/* 13 */ { 12, s_3_13, 2, 1, 0},
/* 14 */ { 6, s_3_14, -1, 1, 0},
/* 15 */ { 2, s_3_15, -1, 1, 0},
/* 16 */ { 12, s_3_16, -1, 1, 0},
/* 17 */ { 8, s_3_17, -1, 1, 0},
/* 18 */ { 8, s_3_18, -1, 1, 0},
/* 19 */ { 2, s_3_19, -1, 1, 0},
/* 20 */ { 2, s_3_20, -1, 1, 0},
/* 21 */ { 8, s_3_21, -1, 1, 0}
};

static const symbol s_4_0[8] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_4_1[10] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_4_2[6] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCF, 0x89 };
static const symbol s_4_3[6] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB1 };
static const symbol s_4_4[10] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_4_5[10] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_4_6[6] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB5 };
static const symbol s_4_7[12] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_4_8[10] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_4_9[12] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_4_10[10] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_4_11[8] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_4_12[10] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_4_13[8] = { 0xCE, 0xB9, 0xCE, 0xB6, 0xCE, 0xB1, 0xCE, 0xBD };

static const struct among a_4[14] =
{
/*  0 */ { 8, s_4_0, -1, 1, 0},
/*  1 */ { 10, s_4_1, -1, 1, 0},
/*  2 */ { 6, s_4_2, -1, 1, 0},
/*  3 */ { 6, s_4_3, -1, 1, 0},
/*  4 */ { 10, s_4_4, -1, 1, 0},
/*  5 */ { 10, s_4_5, -1, 1, 0},
/*  6 */ { 6, s_4_6, -1, 1, 0},
/*  7 */ { 12, s_4_7, -1, 1, 0},
/*  8 */ { 10, s_4_8, -1, 1, 0},
/*  9 */ { 12, s_4_9, -1, 1, 0},
/* 10 */ { 10, s_4_10, -1, 1, 0},
/* 11 */ { 8, s_4_11, -1, 1, 0},
/* 12 */ { 10, s_4_12, -1, 1, 0},
/* 13 */ { 8, s_4_13, -1, 1, 0}
};

static const symbol s_5_0[2] = { 0xCF, 0x83 };
static const symbol s_5_1[2] = { 0xCF, 0x87 };
static const symbol s_5_2[4] = { 0xCF, 0x85, 0xCF, 0x88 };
static const symbol s_5_3[4] = { 0xCE, 0xB6, 0xCF, 0x89 };
static const symbol s_5_4[4] = { 0xCE, 0xB2, 0xCE, 0xB9 };
static const symbol s_5_5[4] = { 0xCE, 0xBB, 0xCE, 0xB9 };
static const symbol s_5_6[4] = { 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_5_7[4] = { 0xCE, 0xB5, 0xCE, 0xBD };

static const struct among a_5[8] =
{
/*  0 */ { 2, s_5_0, -1, 1, 0},
/*  1 */ { 2, s_5_1, -1, 1, 0},
/*  2 */ { 4, s_5_2, -1, 1, 0},
/*  3 */ { 4, s_5_3, -1, 1, 0},
/*  4 */ { 4, s_5_4, -1, 1, 0},
/*  5 */ { 4, s_5_5, -1, 1, 0},
/*  6 */ { 4, s_5_6, -1, 1, 0},
/*  7 */ { 4, s_5_7, -1, 1, 0}
};

static const symbol s_6_0[12] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_6_1[10] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1 };
static const symbol s_6_2[14] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_6_3[10] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB5 };
static const symbol s_6_4[14] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_6_5[14] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_6_6[12] = { 0xCF, 0x89, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD };

static const struct among a_6[7] =
{
/*  0 */ { 12, s_6_0, -1, 1, 0},
/*  1 */ { 10, s_6_1, -1, 1, 0},
/*  2 */ { 14, s_6_2, -1, 1, 0},
/*  3 */ { 10, s_6_3, -1, 1, 0},
/*  4 */ { 14, s_6_4, -1, 1, 0},
/*  5 */ { 14, s_6_5, -1, 1, 0},
/*  6 */ { 12, s_6_6, -1, 1, 0}
};

static const symbol s_7_0[12] = { 0xCE, 0xBE, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_7_1[6] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_7_2[12] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB9, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_7_3[12] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_7_4[8] = { 0xCE, 0xB5, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_7_5[14] = { 0xCF, 0x87, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_7_6[12] = { 0xCE, 0xB5, 0xCE, 0xBE, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x87, 0xCE, 0xB1 };
static const symbol s_7_7[4] = { 0xCF, 0x80, 0xCE, 0xB5 };
static const symbol s_7_8[6] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB5 };
static const symbol s_7_9[12] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB5 };
static const symbol s_7_10[6] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_7_11[6] = { 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_7_12[12] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x89, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_7_13[8] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_7_14[12] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_7_15[12] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_7_16[8] = { 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_7_17[8] = { 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };
static const symbol s_7_18[14] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };

static const struct among a_7[19] =
{
/*  0 */ { 12, s_7_0, -1, 1, 0},
/*  1 */ { 6, s_7_1, -1, 1, 0},
/*  2 */ { 12, s_7_2, -1, 1, 0},
/*  3 */ { 12, s_7_3, -1, 1, 0},
/*  4 */ { 8, s_7_4, -1, 1, 0},
/*  5 */ { 14, s_7_5, -1, 1, 0},
/*  6 */ { 12, s_7_6, -1, 1, 0},
/*  7 */ { 4, s_7_7, -1, 1, 0},
/*  8 */ { 6, s_7_8, 7, 1, 0},
/*  9 */ { 12, s_7_9, 8, 1, 0},
/* 10 */ { 6, s_7_10, -1, 1, 0},
/* 11 */ { 6, s_7_11, -1, 1, 0},
/* 12 */ { 12, s_7_12, 11, 1, 0},
/* 13 */ { 8, s_7_13, 11, 1, 0},
/* 14 */ { 12, s_7_14, 13, 1, 0},
/* 15 */ { 12, s_7_15, 11, 1, 0},
/* 16 */ { 8, s_7_16, -1, 1, 0},
/* 17 */ { 8, s_7_17, -1, 1, 0},
/* 18 */ { 14, s_7_18, 17, 1, 0}
};

static const symbol s_8_0[2] = { 0xCF, 0x80 };
static const symbol s_8_1[6] = { 0xCE, 0xBB, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_8_2[16] = { 0xCE, 0xB4, 0xCE, 0xB7, 0xCE, 0xBC, 0xCE, 0xBF, 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_8_3[4] = { 0xCE, 0xB1, 0xCF, 0x86 };
static const symbol s_8_4[18] = { 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xB1, 0xCF, 0x86 };
static const symbol s_8_5[4] = { 0xCE, 0xB3, 0xCE, 0xB5 };
static const symbol s_8_6[6] = { 0xCE, 0xB3, 0xCE, 0xBA, 0xCE, 0xB5 };
static const symbol s_8_7[4] = { 0xCE, 0xB3, 0xCE, 0xBA };
static const symbol s_8_8[2] = { 0xCE, 0xBC };
static const symbol s_8_9[12] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_8_10[6] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xBC };
static const symbol s_8_11[4] = { 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_8_12[6] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF };

static const struct among a_8[13] =
{
/*  0 */ { 2, s_8_0, -1, 1, 0},
/*  1 */ { 6, s_8_1, -1, 1, 0},
/*  2 */ { 16, s_8_2, -1, 1, 0},
/*  3 */ { 4, s_8_3, -1, 1, 0},
/*  4 */ { 18, s_8_4, 3, 1, 0},
/*  5 */ { 4, s_8_5, -1, 1, 0},
/*  6 */ { 6, s_8_6, -1, 1, 0},
/*  7 */ { 4, s_8_7, -1, 1, 0},
/*  8 */ { 2, s_8_8, -1, 1, 0},
/*  9 */ { 12, s_8_9, 8, 1, 0},
/* 10 */ { 6, s_8_10, 8, 1, 0},
/* 11 */ { 4, s_8_11, -1, 1, 0},
/* 12 */ { 6, s_8_12, -1, 1, 0}
};

static const symbol s_9_0[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_9_1[6] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB1 };
static const symbol s_9_2[6] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_9_3[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_9_4[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_9_5[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_9_6[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD };

static const struct among a_9[7] =
{
/*  0 */ { 8, s_9_0, -1, 1, 0},
/*  1 */ { 6, s_9_1, -1, 1, 0},
/*  2 */ { 6, s_9_2, -1, 1, 0},
/*  3 */ { 10, s_9_3, -1, 1, 0},
/*  4 */ { 10, s_9_4, -1, 1, 0},
/*  5 */ { 10, s_9_5, -1, 1, 0},
/*  6 */ { 8, s_9_6, -1, 1, 0}
};

static const symbol s_10_0[12] = { 0xCE, 0xBE, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_10_1[6] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_10_2[12] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB9, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_10_3[12] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_10_4[8] = { 0xCE, 0xB5, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_10_5[14] = { 0xCF, 0x87, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x80, 0xCE, 0xB1 };
static const symbol s_10_6[12] = { 0xCE, 0xB5, 0xCE, 0xBE, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x87, 0xCE, 0xB1 };
static const symbol s_10_7[4] = { 0xCF, 0x80, 0xCE, 0xB5 };
static const symbol s_10_8[6] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB5 };
static const symbol s_10_9[12] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB5 };
static const symbol s_10_10[6] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_10_11[6] = { 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_10_12[12] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x89, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_10_13[8] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_10_14[12] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_10_15[12] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_10_16[8] = { 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_10_17[8] = { 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };
static const symbol s_10_18[14] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };

static const struct among a_10[19] =
{
/*  0 */ { 12, s_10_0, -1, 1, 0},
/*  1 */ { 6, s_10_1, -1, 1, 0},
/*  2 */ { 12, s_10_2, -1, 1, 0},
/*  3 */ { 12, s_10_3, -1, 1, 0},
/*  4 */ { 8, s_10_4, -1, 1, 0},
/*  5 */ { 14, s_10_5, -1, 1, 0},
/*  6 */ { 12, s_10_6, -1, 1, 0},
/*  7 */ { 4, s_10_7, -1, 1, 0},
/*  8 */ { 6, s_10_8, 7, 1, 0},
/*  9 */ { 12, s_10_9, 8, 1, 0},
/* 10 */ { 6, s_10_10, -1, 1, 0},
/* 11 */ { 6, s_10_11, -1, 1, 0},
/* 12 */ { 12, s_10_12, 11, 1, 0},
/* 13 */ { 8, s_10_13, 11, 1, 0},
/* 14 */ { 12, s_10_14, 13, 1, 0},
/* 15 */ { 12, s_10_15, 11, 1, 0},
/* 16 */ { 8, s_10_16, -1, 1, 0},
/* 17 */ { 8, s_10_17, -1, 1, 0},
/* 18 */ { 14, s_10_18, 17, 1, 0}
};

static const symbol s_11_0[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_11_1[6] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x89 };
static const symbol s_11_2[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_11_3[12] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_11_4[12] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_11_5[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_11_6[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };

static const struct among a_11[7] =
{
/*  0 */ { 10, s_11_0, -1, 1, 0},
/*  1 */ { 6, s_11_1, -1, 1, 0},
/*  2 */ { 10, s_11_2, -1, 1, 0},
/*  3 */ { 12, s_11_3, -1, 1, 0},
/*  4 */ { 12, s_11_4, -1, 1, 0},
/*  5 */ { 8, s_11_5, -1, 1, 0},
/*  6 */ { 10, s_11_6, -1, 1, 0}
};

static const symbol s_12_0[4] = { 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_12_1[6] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_12_2[6] = { 0xCF, 0x80, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_12_3[6] = { 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_12_4[12] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x89, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_12_5[8] = { 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_12_6[14] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x81, 0xCE, 0xBF };

static const struct among a_12[7] =
{
/*  0 */ { 4, s_12_0, -1, 1, 0},
/*  1 */ { 6, s_12_1, 0, 1, 0},
/*  2 */ { 6, s_12_2, -1, 1, 0},
/*  3 */ { 6, s_12_3, -1, 1, 0},
/*  4 */ { 12, s_12_4, 3, 1, 0},
/*  5 */ { 8, s_12_5, -1, 1, 0},
/*  6 */ { 14, s_12_6, -1, 1, 0}
};

static const symbol s_13_0[2] = { 0xCF, 0x80 };
static const symbol s_13_1[6] = { 0xCE, 0xB5, 0xCF, 0x85, 0xCF, 0x80 };
static const symbol s_13_2[4] = { 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_13_3[6] = { 0xCE, 0xB5, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_13_4[6] = { 0xCE, 0xB3, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_13_5[4] = { 0xCF, 0x87, 0xCF, 0x81 };
static const symbol s_13_6[6] = { 0xCF, 0x87, 0xCF, 0x89, 0xCF, 0x81 };
static const symbol s_13_7[4] = { 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_13_8[6] = { 0xCE, 0xB1, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_13_9[4] = { 0xCF, 0x87, 0xCF, 0x84 };
static const symbol s_13_10[6] = { 0xCE, 0xB1, 0xCF, 0x87, 0xCF, 0x84 };
static const symbol s_13_11[4] = { 0xCE, 0xBA, 0xCF, 0x84 };
static const symbol s_13_12[6] = { 0xCE, 0xB1, 0xCE, 0xBA, 0xCF, 0x84 };
static const symbol s_13_13[4] = { 0xCF, 0x83, 0xCF, 0x87 };
static const symbol s_13_14[6] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x87 };
static const symbol s_13_15[6] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x87 };
static const symbol s_13_16[4] = { 0xCF, 0x85, 0xCF, 0x88 };
static const symbol s_13_17[6] = { 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_13_18[4] = { 0xCF, 0x86, 0xCE, 0xB1 };
static const symbol s_13_19[6] = { 0xCE, 0xB7, 0xCF, 0x86, 0xCE, 0xB1 };
static const symbol s_13_20[6] = { 0xCE, 0xBB, 0xCF, 0x85, 0xCE, 0xB3 };
static const symbol s_13_21[6] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xB3 };
static const symbol s_13_22[4] = { 0xCE, 0xB7, 0xCE, 0xB4 };
static const symbol s_13_23[6] = { 0xCE, 0xB5, 0xCF, 0x87, 0xCE, 0xB8 };
static const symbol s_13_24[6] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_13_25[4] = { 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_13_26[6] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_13_27[6] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_13_28[6] = { 0xCE, 0xBA, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_13_29[6] = { 0xCF, 0x86, 0xCE, 0xB9, 0xCE, 0xBB };
static const symbol s_13_30[2] = { 0xCE, 0xBC };
static const symbol s_13_31[6] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCE, 0xBC };
static const symbol s_13_32[6] = { 0xCE, 0xB1, 0xCF, 0x87, 0xCE, 0xBD };

static const struct among a_13[33] =
{
/*  0 */ { 2, s_13_0, -1, 1, 0},
/*  1 */ { 6, s_13_1, 0, 1, 0},
/*  2 */ { 4, s_13_2, 0, 1, 0},
/*  3 */ { 6, s_13_3, 0, 1, 0},
/*  4 */ { 6, s_13_4, -1, 1, 0},
/*  5 */ { 4, s_13_5, -1, 1, 0},
/*  6 */ { 6, s_13_6, -1, 1, 0},
/*  7 */ { 4, s_13_7, -1, 1, 0},
/*  8 */ { 6, s_13_8, -1, 1, 0},
/*  9 */ { 4, s_13_9, -1, 1, 0},
/* 10 */ { 6, s_13_10, 9, 1, 0},
/* 11 */ { 4, s_13_11, -1, 1, 0},
/* 12 */ { 6, s_13_12, 11, 1, 0},
/* 13 */ { 4, s_13_13, -1, 1, 0},
/* 14 */ { 6, s_13_14, 13, 1, 0},
/* 15 */ { 6, s_13_15, -1, 1, 0},
/* 16 */ { 4, s_13_16, -1, 1, 0},
/* 17 */ { 6, s_13_17, -1, 1, 0},
/* 18 */ { 4, s_13_18, -1, 1, 0},
/* 19 */ { 6, s_13_19, 18, 1, 0},
/* 20 */ { 6, s_13_20, -1, 1, 0},
/* 21 */ { 6, s_13_21, -1, 1, 0},
/* 22 */ { 4, s_13_22, -1, 1, 0},
/* 23 */ { 6, s_13_23, -1, 1, 0},
/* 24 */ { 6, s_13_24, -1, 1, 0},
/* 25 */ { 4, s_13_25, -1, 1, 0},
/* 26 */ { 6, s_13_26, -1, 1, 0},
/* 27 */ { 6, s_13_27, -1, 1, 0},
/* 28 */ { 6, s_13_28, -1, 1, 0},
/* 29 */ { 6, s_13_29, -1, 1, 0},
/* 30 */ { 2, s_13_30, -1, 1, 0},
/* 31 */ { 6, s_13_31, 30, 1, 0},
/* 32 */ { 6, s_13_32, -1, 1, 0}
};

static const symbol s_14_0[12] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_14_1[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_14_2[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB7, 0xCF, 0x83 };
static const symbol s_14_3[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_14_4[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_14_5[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_14_6[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_14_7[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB7 };
static const symbol s_14_8[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xB9 };
static const symbol s_14_9[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_14_10[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xBF };

static const struct among a_14[11] =
{
/*  0 */ { 12, s_14_0, -1, 1, 0},
/*  1 */ { 10, s_14_1, -1, 1, 0},
/*  2 */ { 10, s_14_2, -1, 1, 0},
/*  3 */ { 10, s_14_3, -1, 1, 0},
/*  4 */ { 10, s_14_4, -1, 1, 0},
/*  5 */ { 8, s_14_5, -1, 1, 0},
/*  6 */ { 8, s_14_6, -1, 1, 0},
/*  7 */ { 8, s_14_7, -1, 1, 0},
/*  8 */ { 10, s_14_8, -1, 1, 0},
/*  9 */ { 10, s_14_9, -1, 1, 0},
/* 10 */ { 8, s_14_10, -1, 1, 0}
};

static const symbol s_15_0[4] = { 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_15_1[12] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_15_2[14] = { 0xCE, 0xBC, 0xCE, 0xB9, 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xB5 };
static const symbol s_15_3[10] = { 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_15_4[12] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5 };

static const struct among a_15[5] =
{
/*  0 */ { 4, s_15_0, -1, 1, 0},
/*  1 */ { 12, s_15_1, 0, 1, 0},
/*  2 */ { 14, s_15_2, 0, 1, 0},
/*  3 */ { 10, s_15_3, -1, 1, 0},
/*  4 */ { 12, s_15_4, -1, 1, 0}
};

static const symbol s_16_0[8] = { 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_16_1[16] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };

static const struct among a_16[2] =
{
/*  0 */ { 8, s_16_0, -1, 1, 0},
/*  1 */ { 16, s_16_1, 0, 1, 0}
};

static const symbol s_17_0[10] = { 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_1[14] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB5, 0xCF, 0x80, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_2[14] = { 0xCE, 0xB3, 0xCE, 0xBD, 0xCF, 0x89, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_3[16] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xBD, 0xCF, 0x89, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_4[16] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5, 0xCE, 0xBA, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_5[12] = { 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_6[10] = { 0xCE, 0xB5, 0xCE, 0xB8, 0xCE, 0xBD, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_17_7[14] = { 0xCE, 0xB8, 0xCE, 0xB5, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x81, 0xCE, 0xB9, 0xCE, 0xBD };
static const symbol s_17_8[20] = { 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xB5, 0xCE, 0xBE, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB4, 0xCF, 0x81, 0xCE, 0xB9, 0xCE, 0xBD };
static const symbol s_17_9[16] = { 0xCE, 0xB2, 0xCF, 0x85, 0xCE, 0xB6, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xBD };

static const struct among a_17[10] =
{
/*  0 */ { 10, s_17_0, -1, 7, 0},
/*  1 */ { 14, s_17_1, -1, 6, 0},
/*  2 */ { 14, s_17_2, -1, 3, 0},
/*  3 */ { 16, s_17_3, 2, 1, 0},
/*  4 */ { 16, s_17_4, -1, 5, 0},
/*  5 */ { 12, s_17_5, -1, 2, 0},
/*  6 */ { 10, s_17_6, -1, 4, 0},
/*  7 */ { 14, s_17_7, -1, 10, 0},
/*  8 */ { 20, s_17_8, -1, 8, 0},
/*  9 */ { 16, s_17_9, -1, 9, 0}
};

static const symbol s_18_0[12] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_18_1[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_18_2[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_18_3[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC, 0xCE, 0xBF, 0xCE, 0xB9 };
static const symbol s_18_4[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_18_5[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC, 0xCE, 0xBF };

static const struct among a_18[6] =
{
/*  0 */ { 12, s_18_0, -1, 1, 0},
/*  1 */ { 10, s_18_1, -1, 1, 0},
/*  2 */ { 10, s_18_2, -1, 1, 0},
/*  3 */ { 10, s_18_3, -1, 1, 0},
/*  4 */ { 10, s_18_4, -1, 1, 0},
/*  5 */ { 8, s_18_5, -1, 1, 0}
};

static const symbol s_19_0[2] = { 0xCF, 0x83 };
static const symbol s_19_1[2] = { 0xCF, 0x87 };

static const struct among a_19[2] =
{
/*  0 */ { 2, s_19_0, -1, 1, 0},
/*  1 */ { 2, s_19_1, -1, 1, 0}
};

static const symbol s_20_0[12] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_20_1[14] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_20_2[10] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9 };
static const symbol s_20_3[12] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9 };

static const struct among a_20[4] =
{
/*  0 */ { 12, s_20_0, -1, 1, 0},
/*  1 */ { 14, s_20_1, -1, 1, 0},
/*  2 */ { 10, s_20_2, -1, 1, 0},
/*  3 */ { 12, s_20_3, -1, 1, 0}
};

static const symbol s_21_0[12] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_21_1[2] = { 0xCF, 0x81 };
static const symbol s_21_2[4] = { 0xCE, 0xB2, 0xCF, 0x81 };
static const symbol s_21_3[8] = { 0xCE, 0xBB, 0xCE, 0xB1, 0xCE, 0xB2, 0xCF, 0x81 };
static const symbol s_21_4[8] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB2, 0xCF, 0x81 };
static const symbol s_21_5[6] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_21_6[8] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB8, 0xCF, 0x81 };
static const symbol s_21_7[6] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_21_8[2] = { 0xCF, 0x83 };
static const symbol s_21_9[12] = { 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_21_10[10] = { 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_21_11[4] = { 0xCF, 0x81, 0xCF, 0x85 };
static const symbol s_21_12[2] = { 0xCF, 0x86 };
static const symbol s_21_13[4] = { 0xCF, 0x83, 0xCF, 0x86 };
static const symbol s_21_14[10] = { 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x86 };
static const symbol s_21_15[2] = { 0xCF, 0x87 };
static const symbol s_21_16[8] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB2 };
static const symbol s_21_17[8] = { 0xCF, 0x83, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB2 };
static const symbol s_21_18[18] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x87, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB2 };
static const symbol s_21_19[4] = { 0xCF, 0x84, 0xCE, 0xB6 };
static const symbol s_21_20[2] = { 0xCE, 0xBA };
static const symbol s_21_21[4] = { 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_21_22[10] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_21_23[6] = { 0xCF, 0x83, 0xCE, 0xBF, 0xCE, 0xBA };
static const symbol s_21_24[4] = { 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_21_25[6] = { 0xCF, 0x86, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_21_26[8] = { 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_21_27[6] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_21_28[8] = { 0xCF, 0x86, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBC };
static const symbol s_21_29[8] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB9, 0xCE, 0xBC };
static const symbol s_21_30[8] = { 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xBC };
static const symbol s_21_31[8] = { 0xCF, 0x83, 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_21_32[6] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xBD };

static const struct among a_21[33] =
{
/*  0 */ { 12, s_21_0, -1, 1, 0},
/*  1 */ { 2, s_21_1, -1, 1, 0},
/*  2 */ { 4, s_21_2, 1, 1, 0},
/*  3 */ { 8, s_21_3, 2, 1, 0},
/*  4 */ { 8, s_21_4, 2, 1, 0},
/*  5 */ { 6, s_21_5, 1, 1, 0},
/*  6 */ { 8, s_21_6, 1, 1, 0},
/*  7 */ { 6, s_21_7, 1, 1, 0},
/*  8 */ { 2, s_21_8, -1, 1, 0},
/*  9 */ { 12, s_21_9, 8, 1, 0},
/* 10 */ { 10, s_21_10, -1, 1, 0},
/* 11 */ { 4, s_21_11, -1, 1, 0},
/* 12 */ { 2, s_21_12, -1, 1, 0},
/* 13 */ { 4, s_21_13, 12, 1, 0},
/* 14 */ { 10, s_21_14, 13, 1, 0},
/* 15 */ { 2, s_21_15, -1, 1, 0},
/* 16 */ { 8, s_21_16, -1, 1, 0},
/* 17 */ { 8, s_21_17, -1, 1, 0},
/* 18 */ { 18, s_21_18, 17, 1, 0},
/* 19 */ { 4, s_21_19, -1, 1, 0},
/* 20 */ { 2, s_21_20, -1, 1, 0},
/* 21 */ { 4, s_21_21, 20, 1, 0},
/* 22 */ { 10, s_21_22, 20, 1, 0},
/* 23 */ { 6, s_21_23, 20, 1, 0},
/* 24 */ { 4, s_21_24, -1, 1, 0},
/* 25 */ { 6, s_21_25, -1, 1, 0},
/* 26 */ { 8, s_21_26, -1, 1, 0},
/* 27 */ { 6, s_21_27, -1, 1, 0},
/* 28 */ { 8, s_21_28, -1, 1, 0},
/* 29 */ { 8, s_21_29, -1, 1, 0},
/* 30 */ { 8, s_21_30, -1, 1, 0},
/* 31 */ { 8, s_21_31, -1, 1, 0},
/* 32 */ { 6, s_21_32, -1, 1, 0}
};

static const symbol s_22_0[2] = { 0xCF, 0x80 };
static const symbol s_22_1[10] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_22_2[6] = { 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_22_3[6] = { 0xCE, 0xBD, 0xCF, 0x85, 0xCF, 0x86 };
static const symbol s_22_4[2] = { 0xCE, 0xB2 };
static const symbol s_22_5[8] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB4 };
static const symbol s_22_6[2] = { 0xCE, 0xB6 };
static const symbol s_22_7[4] = { 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_22_8[6] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_22_9[4] = { 0xCE, 0xB3, 0xCE, 0xBB };
static const symbol s_22_10[12] = { 0xCF, 0x84, 0xCF, 0x81, 0xCE, 0xB9, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB };
static const symbol s_22_11[12] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBA, 0xCF, 0x81, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_22_12[8] = { 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_22_13[14] = { 0xCE, 0xB7, 0xCE, 0xB3, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xBD };
static const symbol s_22_14[6] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xBD };

static const struct among a_22[15] =
{
/*  0 */ { 2, s_22_0, -1, 1, 0},
/*  1 */ { 10, s_22_1, -1, 1, 0},
/*  2 */ { 6, s_22_2, -1, 1, 0},
/*  3 */ { 6, s_22_3, -1, 1, 0},
/*  4 */ { 2, s_22_4, -1, 1, 0},
/*  5 */ { 8, s_22_5, -1, 1, 0},
/*  6 */ { 2, s_22_6, -1, 1, 0},
/*  7 */ { 4, s_22_7, -1, 1, 0},
/*  8 */ { 6, s_22_8, -1, 1, 0},
/*  9 */ { 4, s_22_9, -1, 1, 0},
/* 10 */ { 12, s_22_10, -1, 1, 0},
/* 11 */ { 12, s_22_11, -1, 1, 0},
/* 12 */ { 8, s_22_12, -1, 1, 0},
/* 13 */ { 14, s_22_13, -1, 1, 0},
/* 14 */ { 6, s_22_14, -1, 1, 0}
};

static const symbol s_23_0[10] = { 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_23_1[10] = { 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_23_2[8] = { 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB1 };
static const symbol s_23_3[8] = { 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_23_4[12] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_23_5[6] = { 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9 };
static const symbol s_23_6[10] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB9 };
static const symbol s_23_7[10] = { 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_23[8] =
{
/*  0 */ { 10, s_23_0, -1, 1, 0},
/*  1 */ { 10, s_23_1, -1, 1, 0},
/*  2 */ { 8, s_23_2, -1, 1, 0},
/*  3 */ { 8, s_23_3, -1, 1, 0},
/*  4 */ { 12, s_23_4, 3, 1, 0},
/*  5 */ { 6, s_23_5, -1, 1, 0},
/*  6 */ { 10, s_23_6, 5, 1, 0},
/*  7 */ { 10, s_23_7, -1, 1, 0}
};

static const symbol s_24_0[4] = { 0xCE, 0xB9, 0xCF, 0x81 };
static const symbol s_24_1[6] = { 0xCF, 0x88, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_24_2[8] = { 0xCE, 0xB1, 0xCE, 0xB9, 0xCF, 0x86, 0xCE, 0xBD };
static const symbol s_24_3[6] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF };

static const struct among a_24[4] =
{
/*  0 */ { 4, s_24_0, -1, 1, 0},
/*  1 */ { 6, s_24_1, -1, 1, 0},
/*  2 */ { 8, s_24_2, -1, 1, 0},
/*  3 */ { 6, s_24_3, -1, 1, 0}
};

static const symbol s_25_0[2] = { 0xCE, 0xB5 };
static const symbol s_25_1[10] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xB9, 0xCF, 0x87, 0xCE, 0xBD };

static const struct among a_25[2] =
{
/*  0 */ { 2, s_25_0, -1, 1, 0},
/*  1 */ { 10, s_25_1, -1, 1, 0}
};

static const symbol s_26_0[8] = { 0xCE, 0xB9, 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_26_1[10] = { 0xCE, 0xB9, 0xCE, 0xB4, 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_26_2[8] = { 0xCE, 0xB9, 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xBF };

static const struct among a_26[3] =
{
/*  0 */ { 8, s_26_0, -1, 1, 0},
/*  1 */ { 10, s_26_1, -1, 1, 0},
/*  2 */ { 8, s_26_2, -1, 1, 0}
};

static const symbol s_27_0[2] = { 0xCF, 0x81 };
static const symbol s_27_1[4] = { 0xCE, 0xB9, 0xCE, 0xB2 };
static const symbol s_27_2[2] = { 0xCE, 0xB4 };
static const symbol s_27_3[6] = { 0xCE, 0xBB, 0xCF, 0x85, 0xCE, 0xBA };
static const symbol s_27_4[10] = { 0xCF, 0x86, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xBA };
static const symbol s_27_5[8] = { 0xCE, 0xBF, 0xCE, 0xB2, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_27_6[6] = { 0xCE, 0xBC, 0xCE, 0xB7, 0xCE, 0xBD };

static const struct among a_27[7] =
{
/*  0 */ { 2, s_27_0, -1, 1, 0},
/*  1 */ { 4, s_27_1, -1, 1, 0},
/*  2 */ { 2, s_27_2, -1, 1, 0},
/*  3 */ { 6, s_27_3, -1, 1, 0},
/*  4 */ { 10, s_27_4, -1, 1, 0},
/*  5 */ { 8, s_27_5, -1, 1, 0},
/*  6 */ { 6, s_27_6, -1, 1, 0}
};

static const symbol s_28_0[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_28_1[10] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_28_2[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB5 };
static const symbol s_28_3[8] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xBF };

static const struct among a_28[4] =
{
/*  0 */ { 10, s_28_0, -1, 1, 0},
/*  1 */ { 10, s_28_1, -1, 1, 0},
/*  2 */ { 8, s_28_2, -1, 1, 0},
/*  3 */ { 8, s_28_3, -1, 1, 0}
};

static const symbol s_29_0[8] = { 0xCE, 0xB1, 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_29_1[8] = { 0xCE, 0xB1, 0xCE, 0xB4, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_29[2] =
{
/*  0 */ { 8, s_29_0, -1, 1, 0},
/*  1 */ { 8, s_29_1, -1, 1, 0}
};

static const symbol s_30_0[10] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_30_1[6] = { 0xCE, 0xBA, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_30_2[10] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_30_3[10] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xB8, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_30_4[10] = { 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_30_5[10] = { 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9 };
static const symbol s_30_6[6] = { 0xCE, 0xB8, 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_30_7[4] = { 0xCE, 0xBF, 0xCE, 0xBA };
static const symbol s_30_8[6] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_30_9[6] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBD };

static const struct among a_30[10] =
{
/*  0 */ { 10, s_30_0, -1, -1, 0},
/*  1 */ { 6, s_30_1, -1, -1, 0},
/*  2 */ { 10, s_30_2, -1, -1, 0},
/*  3 */ { 10, s_30_3, -1, -1, 0},
/*  4 */ { 10, s_30_4, -1, -1, 0},
/*  5 */ { 10, s_30_5, -1, -1, 0},
/*  6 */ { 6, s_30_6, -1, -1, 0},
/*  7 */ { 4, s_30_7, -1, -1, 0},
/*  8 */ { 6, s_30_8, -1, -1, 0},
/*  9 */ { 6, s_30_9, -1, -1, 0}
};

static const symbol s_31_0[8] = { 0xCE, 0xB5, 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_31_1[8] = { 0xCE, 0xB5, 0xCE, 0xB4, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_31[2] =
{
/*  0 */ { 8, s_31_0, -1, 1, 0},
/*  1 */ { 8, s_31_1, -1, 1, 0}
};

static const symbol s_32_0[10] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x80 };
static const symbol s_32_1[4] = { 0xCF, 0x85, 0xCF, 0x80 };
static const symbol s_32_2[6] = { 0xCE, 0xB4, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_32_3[6] = { 0xCE, 0xB3, 0xCE, 0xB7, 0xCF, 0x80 };
static const symbol s_32_4[4] = { 0xCE, 0xB9, 0xCF, 0x80 };
static const symbol s_32_5[6] = { 0xCE, 0xB5, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_32_6[4] = { 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_32_7[6] = { 0xCE, 0xBC, 0xCE, 0xB9, 0xCE, 0xBB };

static const struct among a_32[8] =
{
/*  0 */ { 10, s_32_0, -1, 1, 0},
/*  1 */ { 4, s_32_1, -1, 1, 0},
/*  2 */ { 6, s_32_2, -1, 1, 0},
/*  3 */ { 6, s_32_3, -1, 1, 0},
/*  4 */ { 4, s_32_4, -1, 1, 0},
/*  5 */ { 6, s_32_5, -1, 1, 0},
/*  6 */ { 4, s_32_6, -1, 1, 0},
/*  7 */ { 6, s_32_7, -1, 1, 0}
};

static const symbol s_33_0[10] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_33_1[10] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB4, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_33[2] =
{
/*  0 */ { 10, s_33_0, -1, 1, 0},
/*  1 */ { 10, s_33_1, -1, 1, 0}
};

static const symbol s_34_0[4] = { 0xCF, 0x83, 0xCF, 0x80 };
static const symbol s_34_1[4] = { 0xCF, 0x86, 0xCF, 0x81 };
static const symbol s_34_2[2] = { 0xCF, 0x83 };
static const symbol s_34_3[6] = { 0xCE, 0xBB, 0xCE, 0xB9, 0xCF, 0x87 };
static const symbol s_34_4[8] = { 0xCF, 0x84, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_34_5[4] = { 0xCF, 0x86, 0xCE, 0xB5 };
static const symbol s_34_6[6] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBA };
static const symbol s_34_7[4] = { 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_34_8[12] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_34_9[8] = { 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_34_10[4] = { 0xCF, 0x86, 0xCE, 0xBB };
static const symbol s_34_11[10] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_34_12[6] = { 0xCE, 0xB2, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_34_13[4] = { 0xCF, 0x87, 0xCE, 0xBD };
static const symbol s_34_14[8] = { 0xCF, 0x80, 0xCE, 0xBB, 0xCE, 0xB5, 0xCE, 0xBE };

static const struct among a_34[15] =
{
/*  0 */ { 4, s_34_0, -1, 1, 0},
/*  1 */ { 4, s_34_1, -1, 1, 0},
/*  2 */ { 2, s_34_2, -1, 1, 0},
/*  3 */ { 6, s_34_3, -1, 1, 0},
/*  4 */ { 8, s_34_4, -1, 1, 0},
/*  5 */ { 4, s_34_5, -1, 1, 0},
/*  6 */ { 6, s_34_6, -1, 1, 0},
/*  7 */ { 4, s_34_7, -1, 1, 0},
/*  8 */ { 12, s_34_8, -1, 1, 0},
/*  9 */ { 8, s_34_9, -1, 1, 0},
/* 10 */ { 4, s_34_10, -1, 1, 0},
/* 11 */ { 10, s_34_11, -1, 1, 0},
/* 12 */ { 6, s_34_12, -1, 1, 0},
/* 13 */ { 4, s_34_13, -1, 1, 0},
/* 14 */ { 8, s_34_14, -1, 1, 0}
};

static const symbol s_35_0[6] = { 0xCE, 0xB5, 0xCF, 0x89, 0xCF, 0x83 };
static const symbol s_35_1[6] = { 0xCE, 0xB5, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_35[2] =
{
/*  0 */ { 6, s_35_0, -1, 1, 0},
/*  1 */ { 6, s_35_1, -1, 1, 0}
};

static const symbol s_36_0[2] = { 0xCF, 0x80 };
static const symbol s_36_1[6] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_36_2[2] = { 0xCE, 0xB4 };
static const symbol s_36_3[4] = { 0xCE, 0xB9, 0xCE, 0xB4 };
static const symbol s_36_4[2] = { 0xCE, 0xB8 };
static const symbol s_36_5[6] = { 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_36_6[4] = { 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_36_7[2] = { 0xCE, 0xBD };

static const struct among a_36[8] =
{
/*  0 */ { 2, s_36_0, -1, 1, 0},
/*  1 */ { 6, s_36_1, -1, 1, 0},
/*  2 */ { 2, s_36_2, -1, 1, 0},
/*  3 */ { 4, s_36_3, 2, 1, 0},
/*  4 */ { 2, s_36_4, -1, 1, 0},
/*  5 */ { 6, s_36_5, -1, 1, 0},
/*  6 */ { 4, s_36_6, -1, 1, 0},
/*  7 */ { 2, s_36_7, -1, 1, 0}
};

static const symbol s_37_0[6] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_37_1[4] = { 0xCE, 0xB9, 0xCE, 0xB1 };
static const symbol s_37_2[6] = { 0xCE, 0xB9, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_37[3] =
{
/*  0 */ { 6, s_37_0, -1, 1, 0},
/*  1 */ { 4, s_37_1, -1, 1, 0},
/*  2 */ { 6, s_37_2, -1, 1, 0}
};

static const symbol s_38_0[8] = { 0xCE, 0xB9, 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_38_1[6] = { 0xCE, 0xB9, 0xCE, 0xBA, 0xCE, 0xB1 };
static const symbol s_38_2[8] = { 0xCE, 0xB9, 0xCE, 0xBA, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_38_3[6] = { 0xCE, 0xB9, 0xCE, 0xBA, 0xCE, 0xBF };

static const struct among a_38[4] =
{
/*  0 */ { 8, s_38_0, -1, 1, 0},
/*  1 */ { 6, s_38_1, -1, 1, 0},
/*  2 */ { 8, s_38_2, -1, 1, 0},
/*  3 */ { 6, s_38_3, -1, 1, 0}
};

static const symbol s_39_0[8] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB, 0xCF, 0x80 };
static const symbol s_39_1[6] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_39_2[12] = { 0xCF, 0x80, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_39_3[8] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_39_4[8] = { 0xCF, 0x80, 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_39_5[6] = { 0xCF, 0x86, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_39_6[6] = { 0xCF, 0x87, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_39_7[8] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_39_8[8] = { 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x81, 0xCF, 0x84 };
static const symbol s_39_9[14] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB9, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_39_10[6] = { 0xCE, 0xBD, 0xCE, 0xB9, 0xCF, 0x84 };
static const symbol s_39_11[12] = { 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_39_12[8] = { 0xCE, 0xB5, 0xCE, 0xBE, 0xCF, 0x89, 0xCE, 0xB4 };
static const symbol s_39_13[4] = { 0xCE, 0xB1, 0xCE, 0xB4 };
static const symbol s_39_14[10] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB4 };
static const symbol s_39_15[10] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1, 0xCE, 0xB4 };
static const symbol s_39_16[10] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xB4 };
static const symbol s_39_17[6] = { 0xCE, 0xB5, 0xCE, 0xBD, 0xCE, 0xB4 };
static const symbol s_39_18[8] = { 0xCF, 0x85, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xB4 };
static const symbol s_39_19[12] = { 0xCF, 0x80, 0xCF, 0x81, 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xB4 };
static const symbol s_39_20[10] = { 0xCF, 0x86, 0xCF, 0x85, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB4 };
static const symbol s_39_21[4] = { 0xCE, 0xB7, 0xCE, 0xB8 };
static const symbol s_39_22[8] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB7, 0xCE, 0xB8 };
static const symbol s_39_23[6] = { 0xCE, 0xBE, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_39_24[8] = { 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_39_25[4] = { 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_39_26[14] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x87, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_39_27[14] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB7, 0xCE, 0xBB };
static const symbol s_39_28[8] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB };
static const symbol s_39_29[8] = { 0xCE, 0xB2, 0xCF, 0x81, 0xCF, 0x89, 0xCE, 0xBC };
static const symbol s_39_30[8] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_39_31[8] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_39_32[8] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_39_33[12] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xBD };
static const symbol s_39_34[14] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCE, 0xBB, 0xCE, 0xBD };
static const symbol s_39_35[10] = { 0xCF, 0x86, 0xCE, 0xB9, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xBD };

static const struct among a_39[36] =
{
/*  0 */ { 8, s_39_0, -1, 1, 0},
/*  1 */ { 6, s_39_1, -1, 1, 0},
/*  2 */ { 12, s_39_2, -1, 1, 0},
/*  3 */ { 8, s_39_3, -1, 1, 0},
/*  4 */ { 8, s_39_4, -1, 1, 0},
/*  5 */ { 6, s_39_5, -1, 1, 0},
/*  6 */ { 6, s_39_6, -1, 1, 0},
/*  7 */ { 8, s_39_7, -1, 1, 0},
/*  8 */ { 8, s_39_8, -1, 1, 0},
/*  9 */ { 14, s_39_9, -1, 1, 0},
/* 10 */ { 6, s_39_10, -1, 1, 0},
/* 11 */ { 12, s_39_11, -1, 1, 0},
/* 12 */ { 8, s_39_12, -1, 1, 0},
/* 13 */ { 4, s_39_13, -1, 1, 0},
/* 14 */ { 10, s_39_14, 13, 1, 0},
/* 15 */ { 10, s_39_15, 13, 1, 0},
/* 16 */ { 10, s_39_16, -1, 1, 0},
/* 17 */ { 6, s_39_17, -1, 1, 0},
/* 18 */ { 8, s_39_18, -1, 1, 0},
/* 19 */ { 12, s_39_19, -1, 1, 0},
/* 20 */ { 10, s_39_20, -1, 1, 0},
/* 21 */ { 4, s_39_21, -1, 1, 0},
/* 22 */ { 8, s_39_22, 21, 1, 0},
/* 23 */ { 6, s_39_23, -1, 1, 0},
/* 24 */ { 8, s_39_24, -1, 1, 0},
/* 25 */ { 4, s_39_25, -1, 1, 0},
/* 26 */ { 14, s_39_26, 25, 1, 0},
/* 27 */ { 14, s_39_27, -1, 1, 0},
/* 28 */ { 8, s_39_28, -1, 1, 0},
/* 29 */ { 8, s_39_29, -1, 1, 0},
/* 30 */ { 8, s_39_30, -1, 1, 0},
/* 31 */ { 8, s_39_31, -1, 1, 0},
/* 32 */ { 8, s_39_32, -1, 1, 0},
/* 33 */ { 12, s_39_33, -1, 1, 0},
/* 34 */ { 14, s_39_34, -1, 1, 0},
/* 35 */ { 10, s_39_35, -1, 1, 0}
};

static const symbol s_40_0[12] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_40_1[10] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_40_2[10] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_40_3[10] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_40_4[14] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };

static const struct among a_40[5] =
{
/*  0 */ { 12, s_40_0, -1, 1, 0},
/*  1 */ { 10, s_40_1, -1, 1, 0},
/*  2 */ { 10, s_40_2, -1, 1, 0},
/*  3 */ { 10, s_40_3, -1, 1, 0},
/*  4 */ { 14, s_40_4, 3, 1, 0}
};

static const symbol s_41_0[8] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_41_1[8] = { 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xBA, 0xCF, 0x81 };
static const symbol s_41_2[10] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_41_3[6] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x84 };
static const symbol s_41_4[2] = { 0xCF, 0x87 };
static const symbol s_41_5[6] = { 0xCF, 0x83, 0xCE, 0xB9, 0xCF, 0x87 };
static const symbol s_41_6[8] = { 0xCE, 0xB2, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB2 };
static const symbol s_41_7[6] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xB8 };
static const symbol s_41_8[6] = { 0xCE, 0xBE, 0xCE, 0xB5, 0xCE, 0xB8 };
static const symbol s_41_9[8] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xB8 };
static const symbol s_41_10[8] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBA };
static const symbol s_41_11[6] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB };

static const struct among a_41[12] =
{
/*  0 */ { 8, s_41_0, -1, 1, 0},
/*  1 */ { 8, s_41_1, -1, 1, 0},
/*  2 */ { 10, s_41_2, -1, 1, 0},
/*  3 */ { 6, s_41_3, -1, 1, 0},
/*  4 */ { 2, s_41_4, -1, 1, 0},
/*  5 */ { 6, s_41_5, 4, 1, 0},
/*  6 */ { 8, s_41_6, -1, 1, 0},
/*  7 */ { 6, s_41_7, -1, 1, 0},
/*  8 */ { 6, s_41_8, -1, 1, 0},
/*  9 */ { 8, s_41_9, -1, 1, 0},
/* 10 */ { 8, s_41_10, -1, 1, 0},
/* 11 */ { 6, s_41_11, -1, 1, 0}
};

static const symbol s_42_0[4] = { 0xCF, 0x84, 0xCF, 0x81 };
static const symbol s_42_1[4] = { 0xCF, 0x84, 0xCF, 0x83 };

static const struct among a_42[2] =
{
/*  0 */ { 4, s_42_0, -1, 1, 0},
/*  1 */ { 4, s_42_1, -1, 1, 0}
};

static const symbol s_43_0[12] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_1[10] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_2[14] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_3[16] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_4[12] = { 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_5[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_6[10] = { 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_7[12] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_8[10] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_9[10] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_43_10[14] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };

static const struct among a_43[11] =
{
/*  0 */ { 12, s_43_0, -1, 1, 0},
/*  1 */ { 10, s_43_1, -1, 1, 0},
/*  2 */ { 14, s_43_2, -1, 1, 0},
/*  3 */ { 16, s_43_3, 2, 1, 0},
/*  4 */ { 12, s_43_4, -1, 1, 0},
/*  5 */ { 14, s_43_5, 4, 1, 0},
/*  6 */ { 10, s_43_6, -1, 1, 0},
/*  7 */ { 12, s_43_7, 6, 1, 0},
/*  8 */ { 10, s_43_8, -1, 1, 0},
/*  9 */ { 10, s_43_9, -1, 1, 0},
/* 10 */ { 14, s_43_10, 9, 1, 0}
};

static const symbol s_44_0[2] = { 0xCF, 0x80 };
static const symbol s_44_1[4] = { 0xCF, 0x83, 0xCF, 0x80 };
static const symbol s_44_2[14] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB, 0xCF, 0x85, 0xCE, 0xB4, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_44_3[8] = { 0xCE, 0xB1, 0xCE, 0xB4, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_44_4[18] = { 0xCF, 0x87, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB7, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB4, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_44_5[8] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_44_6[6] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_44_7[12] = { 0xCF, 0x85, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_44_8[12] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x81 };
static const symbol s_44_9[6] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_44_10[4] = { 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_44_11[10] = { 0xCE, 0xB2, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_44_12[6] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_44_13[12] = { 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB8, 0xCE, 0xB7, 0xCF, 0x81 };
static const symbol s_44_14[12] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x81, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_44_15[2] = { 0xCF, 0x83 };
static const symbol s_44_16[16] = { 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_44_17[6] = { 0xCE, 0xB8, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_44_18[6] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_44_19[10] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_44_20[8] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_44_21[8] = { 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_44_22[8] = { 0xCF, 0x80, 0xCE, 0xBB, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_44_23[14] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBB, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_44_24[6] = { 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x84 };
static const symbol s_44_25[12] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x81, 0xCE, 0xB9, 0xCF, 0x84 };
static const symbol s_44_26[10] = { 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB, 0xCF, 0x84 };
static const symbol s_44_27[8] = { 0xCE, 0xB6, 0xCF, 0x89, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_44_28[10] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xB9, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_44_29[2] = { 0xCF, 0x86 };
static const symbol s_44_30[14] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x86 };
static const symbol s_44_31[14] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xB9, 0xCE, 0xBB, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x86 };
static const symbol s_44_32[6] = { 0xCE, 0xBF, 0xCF, 0x81, 0xCF, 0x86 };
static const symbol s_44_33[8] = { 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1, 0xCF, 0x86 };
static const symbol s_44_34[8] = { 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x86 };
static const symbol s_44_35[16] = { 0xCF, 0x86, 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x86 };
static const symbol s_44_36[10] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB7, 0xCF, 0x86 };
static const symbol s_44_37[12] = { 0xCF, 0x85, 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB7, 0xCF, 0x86 };
static const symbol s_44_38[2] = { 0xCF, 0x87 };
static const symbol s_44_39[14] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB7, 0xCF, 0x87 };
static const symbol s_44_40[8] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB7, 0xCF, 0x87 };
static const symbol s_44_41[12] = { 0xCE, 0xB2, 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB7, 0xCF, 0x87 };
static const symbol s_44_42[22] = { 0xCE, 0xBC, 0xCE, 0xB9, 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xB2, 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB7, 0xCF, 0x87 };
static const symbol s_44_43[22] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB2, 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB7, 0xCF, 0x87 };
static const symbol s_44_44[22] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBD, 0xCE, 0xBF, 0xCE, 0xB2, 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB7, 0xCF, 0x87 };
static const symbol s_44_45[6] = { 0xCE, 0xBB, 0xCE, 0xB9, 0xCF, 0x87 };
static const symbol s_44_46[6] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB2 };
static const symbol s_44_47[8] = { 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB2 };
static const symbol s_44_48[14] = { 0xCF, 0x88, 0xCE, 0xB7, 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB2 };
static const symbol s_44_49[6] = { 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xB2 };
static const symbol s_44_50[8] = { 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xB2 };
static const symbol s_44_51[16] = { 0xCE, 0xBE, 0xCE, 0xB7, 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xB2 };
static const symbol s_44_52[2] = { 0xCE, 0xB3 };
static const symbol s_44_53[10] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x81, 0xCE, 0xB3 };
static const symbol s_44_54[10] = { 0xCE, 0xB5, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x81, 0xCE, 0xB3 };
static const symbol s_44_55[4] = { 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_44_56[8] = { 0xCF, 0x84, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_44_57[8] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_44_58[10] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB9, 0xCE, 0xB3, 0xCE, 0xB3 };
static const symbol s_44_59[12] = { 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB9, 0xCE, 0xB3, 0xCE, 0xB3 };
static const symbol s_44_60[10] = { 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB9, 0xCE, 0xB3, 0xCE, 0xB3 };
static const symbol s_44_61[8] = { 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCE, 0xB3 };
static const symbol s_44_62[8] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB7, 0xCE, 0xB3 };
static const symbol s_44_63[6] = { 0xCF, 0x83, 0xCE, 0xB9, 0xCE, 0xB3 };
static const symbol s_44_64[14] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB6 };
static const symbol s_44_65[2] = { 0xCE, 0xB8 };
static const symbol s_44_66[12] = { 0xCE, 0xBC, 0xCF, 0x89, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xB8 };
static const symbol s_44_67[6] = { 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xB8 };
static const symbol s_44_68[8] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xB8 };
static const symbol s_44_69[8] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_44_70[12] = { 0xCE, 0xB2, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x87, 0xCF, 0x85, 0xCE, 0xBA };
static const symbol s_44_71[6] = { 0xCE, 0xB4, 0xCE, 0xB5, 0xCE, 0xBA };
static const symbol s_44_72[10] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xBB, 0xCE, 0xB5, 0xCE, 0xBA };
static const symbol s_44_73[4] = { 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_44_74[8] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_44_75[10] = { 0xCE, 0xB2, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB, 0xCE, 0xBA };
static const symbol s_44_76[4] = { 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_44_77[8] = { 0xCE, 0xB4, 0xCE, 0xB9, 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_44_78[12] = { 0xCF, 0x88, 0xCF, 0x85, 0xCF, 0x87, 0xCE, 0xBF, 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_44_79[10] = { 0xCE, 0xBB, 0xCE, 0xB1, 0xCE, 0xBF, 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_44_80[6] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_44_81[6] = { 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_44_82[14] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCE, 0xB8, 0xCF, 0x85, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_44_83[14] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_44_84[12] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_44_85[12] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_44_86[6] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_44_87[12] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x81, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xBB };
static const symbol s_44_88[2] = { 0xCE, 0xBC };
static const symbol s_44_89[14] = { 0xCE, 0xB4, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xB4, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC };
static const symbol s_44_90[10] = { 0xCE, 0xB2, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x87, 0xCE, 0xBC };
static const symbol s_44_91[16] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xB3, 0xCE, 0xBF, 0xCE, 0xB4, 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_44_92[16] = { 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB, 0xCE, 0xBC };
static const symbol s_44_93[2] = { 0xCE, 0xBD };
static const symbol s_44_94[16] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB9, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD };

static const struct among a_44[95] =
{
/*  0 */ { 2, s_44_0, -1, 1, 0},
/*  1 */ { 4, s_44_1, 0, 1, 0},
/*  2 */ { 14, s_44_2, 0, 1, 0},
/*  3 */ { 8, s_44_3, 0, 1, 0},
/*  4 */ { 18, s_44_4, 0, 1, 0},
/*  5 */ { 8, s_44_5, 0, 1, 0},
/*  6 */ { 6, s_44_6, 0, 1, 0},
/*  7 */ { 12, s_44_7, 6, 1, 0},
/*  8 */ { 12, s_44_8, -1, 1, 0},
/*  9 */ { 6, s_44_9, -1, 1, 0},
/* 10 */ { 4, s_44_10, -1, 1, 0},
/* 11 */ { 10, s_44_11, 10, 1, 0},
/* 12 */ { 6, s_44_12, 10, 1, 0},
/* 13 */ { 12, s_44_13, -1, 1, 0},
/* 14 */ { 12, s_44_14, -1, 1, 0},
/* 15 */ { 2, s_44_15, -1, 1, 0},
/* 16 */ { 16, s_44_16, 15, 1, 0},
/* 17 */ { 6, s_44_17, 15, 1, 0},
/* 18 */ { 6, s_44_18, 15, 1, 0},
/* 19 */ { 10, s_44_19, 15, 1, 0},
/* 20 */ { 8, s_44_20, -1, 1, 0},
/* 21 */ { 8, s_44_21, -1, 1, 0},
/* 22 */ { 8, s_44_22, -1, 1, 0},
/* 23 */ { 14, s_44_23, -1, 1, 0},
/* 24 */ { 6, s_44_24, -1, 1, 0},
/* 25 */ { 12, s_44_25, -1, 1, 0},
/* 26 */ { 10, s_44_26, -1, 1, 0},
/* 27 */ { 8, s_44_27, -1, 1, 0},
/* 28 */ { 10, s_44_28, -1, 1, 0},
/* 29 */ { 2, s_44_29, -1, 1, 0},
/* 30 */ { 14, s_44_30, 29, 1, 0},
/* 31 */ { 14, s_44_31, 29, 1, 0},
/* 32 */ { 6, s_44_32, 29, 1, 0},
/* 33 */ { 8, s_44_33, 29, 1, 0},
/* 34 */ { 8, s_44_34, 29, 1, 0},
/* 35 */ { 16, s_44_35, 34, 1, 0},
/* 36 */ { 10, s_44_36, 29, 1, 0},
/* 37 */ { 12, s_44_37, 36, 1, 0},
/* 38 */ { 2, s_44_38, -1, 1, 0},
/* 39 */ { 14, s_44_39, 38, 1, 0},
/* 40 */ { 8, s_44_40, 38, 1, 0},
/* 41 */ { 12, s_44_41, 38, 1, 0},
/* 42 */ { 22, s_44_42, 41, 1, 0},
/* 43 */ { 22, s_44_43, 41, 1, 0},
/* 44 */ { 22, s_44_44, 41, 1, 0},
/* 45 */ { 6, s_44_45, 38, 1, 0},
/* 46 */ { 6, s_44_46, -1, 1, 0},
/* 47 */ { 8, s_44_47, 46, 1, 0},
/* 48 */ { 14, s_44_48, 46, 1, 0},
/* 49 */ { 6, s_44_49, -1, 1, 0},
/* 50 */ { 8, s_44_50, 49, 1, 0},
/* 51 */ { 16, s_44_51, 50, 1, 0},
/* 52 */ { 2, s_44_52, -1, 1, 0},
/* 53 */ { 10, s_44_53, 52, 1, 0},
/* 54 */ { 10, s_44_54, 52, 1, 0},
/* 55 */ { 4, s_44_55, 52, 1, 0},
/* 56 */ { 8, s_44_56, 55, 1, 0},
/* 57 */ { 8, s_44_57, 55, 1, 0},
/* 58 */ { 10, s_44_58, 52, 1, 0},
/* 59 */ { 12, s_44_59, 58, 1, 0},
/* 60 */ { 10, s_44_60, 52, 1, 0},
/* 61 */ { 8, s_44_61, 52, 1, 0},
/* 62 */ { 8, s_44_62, 52, 1, 0},
/* 63 */ { 6, s_44_63, 52, 1, 0},
/* 64 */ { 14, s_44_64, -1, 1, 0},
/* 65 */ { 2, s_44_65, -1, 1, 0},
/* 66 */ { 12, s_44_66, 65, 1, 0},
/* 67 */ { 6, s_44_67, 65, 1, 0},
/* 68 */ { 8, s_44_68, 67, 1, 0},
/* 69 */ { 8, s_44_69, -1, 1, 0},
/* 70 */ { 12, s_44_70, -1, 1, 0},
/* 71 */ { 6, s_44_71, -1, 1, 0},
/* 72 */ { 10, s_44_72, -1, 1, 0},
/* 73 */ { 4, s_44_73, -1, 1, 0},
/* 74 */ { 8, s_44_74, 73, 1, 0},
/* 75 */ { 10, s_44_75, -1, 1, 0},
/* 76 */ { 4, s_44_76, -1, 1, 0},
/* 77 */ { 8, s_44_77, 76, 1, 0},
/* 78 */ { 12, s_44_78, 76, 1, 0},
/* 79 */ { 10, s_44_79, 76, 1, 0},
/* 80 */ { 6, s_44_80, -1, 1, 0},
/* 81 */ { 6, s_44_81, -1, 1, 0},
/* 82 */ { 14, s_44_82, 81, 1, 0},
/* 83 */ { 14, s_44_83, 81, 1, 0},
/* 84 */ { 12, s_44_84, 81, 1, 0},
/* 85 */ { 12, s_44_85, -1, 1, 0},
/* 86 */ { 6, s_44_86, -1, 1, 0},
/* 87 */ { 12, s_44_87, -1, 1, 0},
/* 88 */ { 2, s_44_88, -1, 1, 0},
/* 89 */ { 14, s_44_89, 88, 1, 0},
/* 90 */ { 10, s_44_90, 88, 1, 0},
/* 91 */ { 16, s_44_91, 88, 1, 0},
/* 92 */ { 16, s_44_92, 88, 1, 0},
/* 93 */ { 2, s_44_93, -1, 1, 0},
/* 94 */ { 16, s_44_94, 93, 1, 0}
};

static const symbol s_45_0[10] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5 };

static const struct among a_45[1] =
{
/*  0 */ { 10, s_45_0, -1, 1, 0}
};

static const symbol s_46_0[6] = { 0xCF, 0x80, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_46_1[6] = { 0xCE, 0xB5, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_46_2[6] = { 0xCF, 0x87, 0xCF, 0x89, 0xCF, 0x81 };
static const symbol s_46_3[6] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_46_4[4] = { 0xCE, 0xB2, 0xCF, 0x81 };
static const symbol s_46_5[6] = { 0xCE, 0xB1, 0xCE, 0xB9, 0xCF, 0x81 };
static const symbol s_46_6[6] = { 0xCF, 0x86, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_46_7[6] = { 0xCE, 0xBD, 0xCE, 0xB5, 0xCF, 0x84 };
static const symbol s_46_8[4] = { 0xCF, 0x83, 0xCF, 0x87 };
static const symbol s_46_9[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB4 };
static const symbol s_46_10[6] = { 0xCE, 0xB5, 0xCE, 0xBD, 0xCE, 0xB4 };
static const symbol s_46_11[4] = { 0xCE, 0xBF, 0xCE, 0xB4 };
static const symbol s_46_12[10] = { 0xCF, 0x85, 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB8 };
static const symbol s_46_13[4] = { 0xCF, 0x83, 0xCE, 0xB8 };
static const symbol s_46_14[6] = { 0xCE, 0xB5, 0xCF, 0x85, 0xCE, 0xB8 };
static const symbol s_46_15[6] = { 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_46_16[6] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_46_17[8] = { 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_46_18[6] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_46_19[6] = { 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xB8 };
static const symbol s_46_20[6] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xB8 };
static const symbol s_46_21[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB8 };
static const symbol s_46_22[6] = { 0xCE, 0xB5, 0xCE, 0xBD, 0xCE, 0xB8 };
static const symbol s_46_23[6] = { 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xB8 };
static const symbol s_46_24[6] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBA };
static const symbol s_46_25[8] = { 0xCF, 0x89, 0xCF, 0x86, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_46_26[6] = { 0xCE, 0xB2, 0xCE, 0xBF, 0xCE, 0xBB };
static const symbol s_46_27[6] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_46_28[6] = { 0xCE, 0xB1, 0xCE, 0xB9, 0xCE, 0xBD };
static const symbol s_46_29[6] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBD };
static const symbol s_46_30[6] = { 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xBD };

static const struct among a_46[31] =
{
/*  0 */ { 6, s_46_0, -1, 1, 0},
/*  1 */ { 6, s_46_1, -1, 1, 0},
/*  2 */ { 6, s_46_2, -1, 1, 0},
/*  3 */ { 6, s_46_3, -1, 1, 0},
/*  4 */ { 4, s_46_4, -1, 1, 0},
/*  5 */ { 6, s_46_5, -1, 1, 0},
/*  6 */ { 6, s_46_6, -1, 1, 0},
/*  7 */ { 6, s_46_7, -1, 1, 0},
/*  8 */ { 4, s_46_8, -1, 1, 0},
/*  9 */ { 8, s_46_9, -1, 1, 0},
/* 10 */ { 6, s_46_10, -1, 1, 0},
/* 11 */ { 4, s_46_11, -1, 1, 0},
/* 12 */ { 10, s_46_12, -1, 1, 0},
/* 13 */ { 4, s_46_13, -1, 1, 0},
/* 14 */ { 6, s_46_14, -1, 1, 0},
/* 15 */ { 6, s_46_15, -1, 1, 0},
/* 16 */ { 6, s_46_16, -1, 1, 0},
/* 17 */ { 8, s_46_17, -1, 1, 0},
/* 18 */ { 6, s_46_18, -1, 1, 0},
/* 19 */ { 6, s_46_19, -1, 1, 0},
/* 20 */ { 6, s_46_20, -1, 1, 0},
/* 21 */ { 8, s_46_21, -1, 1, 0},
/* 22 */ { 6, s_46_22, -1, 1, 0},
/* 23 */ { 6, s_46_23, -1, 1, 0},
/* 24 */ { 6, s_46_24, -1, 1, 0},
/* 25 */ { 8, s_46_25, -1, 1, 0},
/* 26 */ { 6, s_46_26, -1, 1, 0},
/* 27 */ { 6, s_46_27, -1, 1, 0},
/* 28 */ { 6, s_46_28, -1, 1, 0},
/* 29 */ { 6, s_46_29, -1, 1, 0},
/* 30 */ { 6, s_46_30, -1, 1, 0}
};

static const symbol s_47_0[8] = { 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x81, 0xCF, 0x80 };
static const symbol s_47_1[6] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_47_2[8] = { 0xCE, 0xB8, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x81 };
static const symbol s_47_3[6] = { 0xCE, 0xBD, 0xCF, 0x84, 0xCF, 0x81 };
static const symbol s_47_4[8] = { 0xCE, 0xB1, 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_47_5[8] = { 0xCE, 0xB5, 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_47_6[6] = { 0xCE, 0xB1, 0xCE, 0xB2, 0xCF, 0x81 };
static const symbol s_47_7[8] = { 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_47_8[2] = { 0xCF, 0x85 };
static const symbol s_47_9[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCF, 0x81, 0xCF, 0x86 };
static const symbol s_47_10[6] = { 0xCE, 0xBD, 0xCE, 0xB9, 0xCF, 0x86 };
static const symbol s_47_11[6] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_47_12[2] = { 0xCE, 0xB4 };
static const symbol s_47_13[4] = { 0xCE, 0xB1, 0xCE, 0xB4 };
static const symbol s_47_14[2] = { 0xCE, 0xB8 };
static const symbol s_47_15[4] = { 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_47_16[4] = { 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_47_17[6] = { 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xBA };
static const symbol s_47_18[6] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_47_19[14] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_47_20[8] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_47_21[4] = { 0xCE, 0xB5, 0xCE, 0xBC };
static const symbol s_47_22[4] = { 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_47_23[6] = { 0xCE, 0xB2, 0xCE, 0xB5, 0xCE, 0xBD };
static const symbol s_47_24[10] = { 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xBD };

static const struct among a_47[25] =
{
/*  0 */ { 8, s_47_0, -1, 1, 0},
/*  1 */ { 6, s_47_1, -1, 1, 0},
/*  2 */ { 8, s_47_2, -1, 1, 0},
/*  3 */ { 6, s_47_3, -1, 1, 0},
/*  4 */ { 8, s_47_4, -1, 1, 0},
/*  5 */ { 8, s_47_5, -1, 1, 0},
/*  6 */ { 6, s_47_6, -1, 1, 0},
/*  7 */ { 8, s_47_7, -1, 1, 0},
/*  8 */ { 2, s_47_8, -1, 1, 0},
/*  9 */ { 8, s_47_9, -1, 1, 0},
/* 10 */ { 6, s_47_10, -1, 1, 0},
/* 11 */ { 6, s_47_11, -1, 1, 0},
/* 12 */ { 2, s_47_12, -1, 1, 0},
/* 13 */ { 4, s_47_13, 12, 1, 0},
/* 14 */ { 2, s_47_14, -1, 1, 0},
/* 15 */ { 4, s_47_15, 14, 1, 0},
/* 16 */ { 4, s_47_16, -1, 1, 0},
/* 17 */ { 6, s_47_17, -1, 1, 0},
/* 18 */ { 6, s_47_18, -1, 1, 0},
/* 19 */ { 14, s_47_19, -1, 1, 0},
/* 20 */ { 8, s_47_20, -1, 1, 0},
/* 21 */ { 4, s_47_21, -1, 1, 0},
/* 22 */ { 4, s_47_22, -1, 1, 0},
/* 23 */ { 6, s_47_23, -1, 1, 0},
/* 24 */ { 10, s_47_24, -1, 1, 0}
};

static const symbol s_48_0[10] = { 0xCF, 0x89, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_48_1[10] = { 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x83 };

static const struct among a_48[2] =
{
/*  0 */ { 10, s_48_0, -1, 1, 0},
/*  1 */ { 10, s_48_1, -1, 1, 0}
};

static const symbol s_49_0[12] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_49_1[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };

static const struct among a_49[2] =
{
/*  0 */ { 12, s_49_0, -1, 1, 0},
/*  1 */ { 14, s_49_1, 0, 1, 0}
};

static const symbol s_50_0[2] = { 0xCF, 0x80 };
static const symbol s_50_1[4] = { 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_50_2[12] = { 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x80 };
static const symbol s_50_3[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_50_4[10] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_50_5[14] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x86 };

static const struct among a_50[6] =
{
/*  0 */ { 2, s_50_0, -1, 1, 0},
/*  1 */ { 4, s_50_1, 0, 1, 0},
/*  2 */ { 12, s_50_2, 1, 1, 0},
/*  3 */ { 8, s_50_3, 0, 1, 0},
/*  4 */ { 10, s_50_4, 3, 1, 0},
/*  5 */ { 14, s_50_5, -1, 1, 0}
};

static const symbol s_51_0[4] = { 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_51_1[6] = { 0xCE, 0xBD, 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_51_2[2] = { 0xCE, 0xB6 };
static const symbol s_51_3[4] = { 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_51_4[14] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_51_5[10] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCF, 0x84, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_51_6[2] = { 0xCE, 0xBC };
static const symbol s_51_7[2] = { 0xCE, 0xBE };
static const symbol s_51_8[6] = { 0xCF, 0x80, 0xCF, 0x81, 0xCE, 0xBF };

static const struct among a_51[9] =
{
/*  0 */ { 4, s_51_0, -1, 1, 0},
/*  1 */ { 6, s_51_1, -1, 1, 0},
/*  2 */ { 2, s_51_2, -1, 1, 0},
/*  3 */ { 4, s_51_3, -1, 1, 0},
/*  4 */ { 14, s_51_4, 3, 1, 0},
/*  5 */ { 10, s_51_5, -1, 1, 0},
/*  6 */ { 2, s_51_6, -1, 1, 0},
/*  7 */ { 2, s_51_7, -1, 1, 0},
/*  8 */ { 6, s_51_8, -1, 1, 0}
};

static const symbol s_52_0[12] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_52_1[10] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1 };
static const symbol s_52_2[10] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB5 };

static const struct among a_52[3] =
{
/*  0 */ { 12, s_52_0, -1, 1, 0},
/*  1 */ { 10, s_52_1, -1, 1, 0},
/*  2 */ { 10, s_52_2, -1, 1, 0}
};

static const symbol s_53_0[4] = { 0xCF, 0x83, 0xCF, 0x86 };
static const symbol s_53_1[8] = { 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB8 };
static const symbol s_53_2[6] = { 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xB8 };
static const symbol s_53_3[4] = { 0xCE, 0xBF, 0xCE, 0xB8 };
static const symbol s_53_4[10] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB };
static const symbol s_53_5[8] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCF, 0x89, 0xCE, 0xBB };

static const struct among a_53[6] =
{
/*  0 */ { 4, s_53_0, -1, 1, 0},
/*  1 */ { 8, s_53_1, -1, 1, 0},
/*  2 */ { 6, s_53_2, -1, 1, 0},
/*  3 */ { 4, s_53_3, -1, 1, 0},
/*  4 */ { 10, s_53_4, -1, 1, 0},
/*  5 */ { 8, s_53_5, -1, 1, 0}
};

static const symbol s_54_0[2] = { 0xCE, 0xB8 };
static const symbol s_54_1[10] = { 0xCF, 0x80, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xB8 };
static const symbol s_54_2[18] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_54_3[8] = { 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1, 0xCE, 0xB8 };
static const symbol s_54_4[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB8 };

static const struct among a_54[5] =
{
/*  0 */ { 2, s_54_0, -1, 1, 0},
/*  1 */ { 10, s_54_1, 0, 1, 0},
/*  2 */ { 18, s_54_2, 0, 1, 0},
/*  3 */ { 8, s_54_3, 0, 1, 0},
/*  4 */ { 8, s_54_4, 0, 1, 0}
};

static const symbol s_55_0[8] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_55_1[6] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1 };
static const symbol s_55_2[6] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB5 };

static const struct among a_55[3] =
{
/*  0 */ { 8, s_55_0, -1, 1, 0},
/*  1 */ { 6, s_55_1, -1, 1, 0},
/*  2 */ { 6, s_55_2, -1, 1, 0}
};

static const symbol s_56_0[8] = { 0xCE, 0xB2, 0xCE, 0xBB, 0xCE, 0xB5, 0xCF, 0x80 };
static const symbol s_56_1[10] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xB4, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_56_2[8] = { 0xCF, 0x80, 0xCF, 0x81, 0xCF, 0x89, 0xCF, 0x84 };
static const symbol s_56_3[10] = { 0xCE, 0xBA, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_56_4[12] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x87 };
static const symbol s_56_5[6] = { 0xCE, 0xBB, 0xCE, 0xB1, 0xCF, 0x87 };
static const symbol s_56_6[6] = { 0xCF, 0x86, 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_56_7[6] = { 0xCE, 0xBB, 0xCE, 0xB7, 0xCE, 0xB3 };
static const symbol s_56_8[8] = { 0xCF, 0x86, 0xCF, 0x81, 0xCF, 0x85, 0xCE, 0xB4 };
static const symbol s_56_9[12] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB9, 0xCE, 0xBB };
static const symbol s_56_10[8] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xBB };
static const symbol s_56_11[4] = { 0xCE, 0xBF, 0xCE, 0xBC };

static const struct among a_56[12] =
{
/*  0 */ { 8, s_56_0, -1, 1, 0},
/*  1 */ { 10, s_56_1, -1, 1, 0},
/*  2 */ { 8, s_56_2, -1, 1, 0},
/*  3 */ { 10, s_56_3, -1, 1, 0},
/*  4 */ { 12, s_56_4, -1, 1, 0},
/*  5 */ { 6, s_56_5, -1, 1, 0},
/*  6 */ { 6, s_56_6, -1, 1, 0},
/*  7 */ { 6, s_56_7, -1, 1, 0},
/*  8 */ { 8, s_56_8, -1, 1, 0},
/*  9 */ { 12, s_56_9, -1, 1, 0},
/* 10 */ { 8, s_56_10, -1, 1, 0},
/* 11 */ { 4, s_56_11, -1, 1, 0}
};

static const symbol s_57_0[10] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB9, 0xCF, 0x80 };
static const symbol s_57_1[2] = { 0xCF, 0x81 };
static const symbol s_57_2[10] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x81 };
static const symbol s_57_3[16] = { 0xCE, 0xB5, 0xCE, 0xBD, 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1, 0xCF, 0x86, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_57_4[6] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_57_5[14] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB5, 0xCF, 0x85 };
static const symbol s_57_6[16] = { 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x85, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB5, 0xCF, 0x85 };
static const symbol s_57_7[6] = { 0xCE, 0xBB, 0xCE, 0xB5, 0xCF, 0x87 };
static const symbol s_57_8[6] = { 0xCF, 0x84, 0xCF, 0x83, 0xCE, 0xB1 };
static const symbol s_57_9[6] = { 0xCF, 0x87, 0xCE, 0xB1, 0xCE, 0xB4 };
static const symbol s_57_10[6] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xB4 };
static const symbol s_57_11[12] = { 0xCE, 0xBB, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x80, 0xCE, 0xB9, 0xCE, 0xB4 };
static const symbol s_57_12[4] = { 0xCE, 0xB4, 0xCE, 0xB5 };
static const symbol s_57_13[6] = { 0xCF, 0x80, 0xCE, 0xBB, 0xCE, 0xB5 };
static const symbol s_57_14[10] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xB6 };
static const symbol s_57_15[12] = { 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xB6 };
static const symbol s_57_16[6] = { 0xCE, 0xB1, 0xCE, 0xB9, 0xCE, 0xB8 };
static const symbol s_57_17[12] = { 0xCF, 0x86, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_57_18[6] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xBA };
static const symbol s_57_19[8] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB7, 0xCE, 0xBA };
static const symbol s_57_20[2] = { 0xCE, 0xBB };
static const symbol s_57_21[2] = { 0xCE, 0xBC };
static const symbol s_57_22[4] = { 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_57_23[8] = { 0xCE, 0xB2, 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xBC };
static const symbol s_57_24[14] = { 0xCF, 0x85, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB5, 0xCE, 0xB9, 0xCE, 0xBD };

static const struct among a_57[25] =
{
/*  0 */ { 10, s_57_0, -1, 1, 0},
/*  1 */ { 2, s_57_1, -1, 1, 0},
/*  2 */ { 10, s_57_2, 1, 1, 0},
/*  3 */ { 16, s_57_3, 1, 1, 0},
/*  4 */ { 6, s_57_4, -1, 1, 0},
/*  5 */ { 14, s_57_5, -1, 1, 0},
/*  6 */ { 16, s_57_6, -1, 1, 0},
/*  7 */ { 6, s_57_7, -1, 1, 0},
/*  8 */ { 6, s_57_8, -1, 1, 0},
/*  9 */ { 6, s_57_9, -1, 1, 0},
/* 10 */ { 6, s_57_10, -1, 1, 0},
/* 11 */ { 12, s_57_11, -1, 1, 0},
/* 12 */ { 4, s_57_12, -1, 1, 0},
/* 13 */ { 6, s_57_13, -1, 1, 0},
/* 14 */ { 10, s_57_14, -1, 1, 0},
/* 15 */ { 12, s_57_15, -1, 1, 0},
/* 16 */ { 6, s_57_16, -1, 1, 0},
/* 17 */ { 12, s_57_17, -1, 1, 0},
/* 18 */ { 6, s_57_18, -1, 1, 0},
/* 19 */ { 8, s_57_19, -1, 1, 0},
/* 20 */ { 2, s_57_20, -1, 1, 0},
/* 21 */ { 2, s_57_21, -1, 1, 0},
/* 22 */ { 4, s_57_22, 21, 1, 0},
/* 23 */ { 8, s_57_23, 21, 1, 0},
/* 24 */ { 14, s_57_24, -1, 1, 0}
};

static const symbol s_58_0[10] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_58_1[8] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1 };
static const symbol s_58_2[8] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB5 };

static const struct among a_58[3] =
{
/*  0 */ { 10, s_58_0, -1, 1, 0},
/*  1 */ { 8, s_58_1, -1, 1, 0},
/*  2 */ { 8, s_58_2, -1, 1, 0}
};

static const symbol s_59_0[6] = { 0xCF, 0x88, 0xCE, 0xBF, 0xCF, 0x86 };
static const symbol s_59_1[12] = { 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x85, 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x87 };

static const struct among a_59[2] =
{
/*  0 */ { 6, s_59_0, -1, -1, 0},
/*  1 */ { 12, s_59_1, -1, -1, 0}
};

static const symbol s_60_0[4] = { 0xCF, 0x81, 0xCF, 0x80 };
static const symbol s_60_1[4] = { 0xCF, 0x80, 0xCF, 0x81 };
static const symbol s_60_2[4] = { 0xCF, 0x86, 0xCF, 0x81 };
static const symbol s_60_3[8] = { 0xCF, 0x87, 0xCE, 0xBF, 0xCF, 0x81, 0xCF, 0x84 };
static const symbol s_60_4[4] = { 0xCF, 0x83, 0xCF, 0x86 };
static const symbol s_60_5[4] = { 0xCE, 0xBF, 0xCF, 0x86 };
static const symbol s_60_6[6] = { 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x87 };
static const symbol s_60_7[6] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCE, 0xBB };
static const symbol s_60_8[4] = { 0xCE, 0xBB, 0xCE, 0xBB };
static const symbol s_60_9[8] = { 0xCF, 0x83, 0xCE, 0xBC, 0xCE, 0xB7, 0xCE, 0xBD };

static const struct among a_60[10] =
{
/*  0 */ { 4, s_60_0, -1, 1, 0},
/*  1 */ { 4, s_60_1, -1, 1, 0},
/*  2 */ { 4, s_60_2, -1, 1, 0},
/*  3 */ { 8, s_60_3, -1, 1, 0},
/*  4 */ { 4, s_60_4, -1, 1, 0},
/*  5 */ { 4, s_60_5, -1, 1, 0},
/*  6 */ { 6, s_60_6, -1, 1, 0},
/*  7 */ { 6, s_60_7, -1, 1, 0},
/*  8 */ { 4, s_60_8, -1, 1, 0},
/*  9 */ { 8, s_60_9, -1, 1, 0}
};

static const symbol s_61_0[2] = { 0xCF, 0x80 };
static const symbol s_61_1[6] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x80 };
static const symbol s_61_2[8] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x85, 0xCF, 0x80 };
static const symbol s_61_3[10] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x84, 0xCE, 0xB9, 0xCF, 0x80 };
static const symbol s_61_4[8] = { 0xCE, 0xB1, 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x80 };
static const symbol s_61_5[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBC, 0xCF, 0x80 };
static const symbol s_61_6[16] = { 0xCF, 0x80, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x83, 0xCF, 0x89, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_61_7[14] = { 0xCF, 0x83, 0xCE, 0xB9, 0xCE, 0xB4, 0xCE, 0xB7, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_61_8[12] = { 0xCE, 0xB4, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_61_9[8] = { 0xCE, 0xBD, 0xCE, 0xB5, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_61_10[16] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xBF, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_61_11[8] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_61_12[2] = { 0xCF, 0x81 };
static const symbol s_61_13[4] = { 0xCF, 0x84, 0xCF, 0x81 };
static const symbol s_61_14[6] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x81 };
static const symbol s_61_15[10] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_61_16[6] = { 0xCF, 0x87, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_61_17[8] = { 0xCE, 0xB1, 0xCF, 0x87, 0xCE, 0xB1, 0xCF, 0x81 };
static const symbol s_61_18[8] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_61_19[2] = { 0xCF, 0x84 };
static const symbol s_61_20[10] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x85, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_61_21[10] = { 0xCE, 0xB1, 0xCE, 0xB2, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_61_22[10] = { 0xCF, 0x80, 0xCF, 0x81, 0xCE, 0xBF, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_61_23[12] = { 0xCE, 0xB1, 0xCE, 0xB9, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_61_24[8] = { 0xCE, 0xB4, 0xCE, 0xB9, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_61_25[8] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCE, 0xB9, 0xCF, 0x84 };
static const symbol s_61_26[8] = { 0xCF, 0x83, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_61_27[8] = { 0xCF, 0x85, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x84 };
static const symbol s_61_28[8] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBF, 0xCF, 0x84 };
static const symbol s_61_29[8] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x84 };
static const symbol s_61_30[10] = { 0xCE, 0xBD, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x84 };
static const symbol s_61_31[6] = { 0xCE, 0xBD, 0xCE, 0xB1, 0xCF, 0x85 };
static const symbol s_61_32[10] = { 0xCF, 0x80, 0xCE, 0xBF, 0xCE, 0xBB, 0xCF, 0x85, 0xCF, 0x86 };
static const symbol s_61_33[4] = { 0xCE, 0xB1, 0xCF, 0x86 };
static const symbol s_61_34[6] = { 0xCE, 0xBE, 0xCE, 0xB5, 0xCF, 0x86 };
static const symbol s_61_35[8] = { 0xCE, 0xB1, 0xCE, 0xB4, 0xCE, 0xB7, 0xCF, 0x86 };
static const symbol s_61_36[8] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBC, 0xCF, 0x86 };
static const symbol s_61_37[12] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xBB, 0xCE, 0xB9 };
static const symbol s_61_38[2] = { 0xCE, 0xBB };
static const symbol s_61_39[8] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xBB };
static const symbol s_61_40[2] = { 0xCE, 0xBC };
static const symbol s_61_41[10] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBB, 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_61_42[4] = { 0xCE, 0xB5, 0xCE, 0xBD };
static const symbol s_61_43[12] = { 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB2, 0xCE, 0xB5, 0xCE, 0xBD };

static const struct among a_61[44] =
{
/*  0 */ { 2, s_61_0, -1, 1, 0},
/*  1 */ { 6, s_61_1, 0, 1, 0},
/*  2 */ { 8, s_61_2, 0, 1, 0},
/*  3 */ { 10, s_61_3, 0, 1, 0},
/*  4 */ { 8, s_61_4, 0, 1, 0},
/*  5 */ { 8, s_61_5, 0, 1, 0},
/*  6 */ { 16, s_61_6, 0, 1, 0},
/*  7 */ { 14, s_61_7, 0, 1, 0},
/*  8 */ { 12, s_61_8, 0, 1, 0},
/*  9 */ { 8, s_61_9, 0, 1, 0},
/* 10 */ { 16, s_61_10, 0, 1, 0},
/* 11 */ { 8, s_61_11, 0, 1, 0},
/* 12 */ { 2, s_61_12, -1, 1, 0},
/* 13 */ { 4, s_61_13, 12, 1, 0},
/* 14 */ { 6, s_61_14, 12, 1, 0},
/* 15 */ { 10, s_61_15, 12, 1, 0},
/* 16 */ { 6, s_61_16, 12, 1, 0},
/* 17 */ { 8, s_61_17, 16, 1, 0},
/* 18 */ { 8, s_61_18, 12, 1, 0},
/* 19 */ { 2, s_61_19, -1, 1, 0},
/* 20 */ { 10, s_61_20, 19, 1, 0},
/* 21 */ { 10, s_61_21, 19, 1, 0},
/* 22 */ { 10, s_61_22, 19, 1, 0},
/* 23 */ { 12, s_61_23, 19, 1, 0},
/* 24 */ { 8, s_61_24, 19, 1, 0},
/* 25 */ { 8, s_61_25, 19, 1, 0},
/* 26 */ { 8, s_61_26, 19, 1, 0},
/* 27 */ { 8, s_61_27, 19, 1, 0},
/* 28 */ { 8, s_61_28, 19, 1, 0},
/* 29 */ { 8, s_61_29, 19, 1, 0},
/* 30 */ { 10, s_61_30, 29, 1, 0},
/* 31 */ { 6, s_61_31, -1, 1, 0},
/* 32 */ { 10, s_61_32, -1, 1, 0},
/* 33 */ { 4, s_61_33, -1, 1, 0},
/* 34 */ { 6, s_61_34, -1, 1, 0},
/* 35 */ { 8, s_61_35, -1, 1, 0},
/* 36 */ { 8, s_61_36, -1, 1, 0},
/* 37 */ { 12, s_61_37, -1, 1, 0},
/* 38 */ { 2, s_61_38, -1, 1, 0},
/* 39 */ { 8, s_61_39, 38, 1, 0},
/* 40 */ { 2, s_61_40, -1, 1, 0},
/* 41 */ { 10, s_61_41, 40, 1, 0},
/* 42 */ { 4, s_61_42, -1, 1, 0},
/* 43 */ { 12, s_61_43, 42, 1, 0}
};

static const symbol s_62_0[8] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_62_1[6] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1 };
static const symbol s_62_2[6] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB5 };

static const struct among a_62[3] =
{
/*  0 */ { 8, s_62_0, -1, 1, 0},
/*  1 */ { 6, s_62_1, -1, 1, 0},
/*  2 */ { 6, s_62_2, -1, 1, 0}
};

static const symbol s_63_0[8] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_63_1[6] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB1 };
static const symbol s_63_2[6] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB5 };

static const struct among a_63[3] =
{
/*  0 */ { 8, s_63_0, -1, 1, 0},
/*  1 */ { 6, s_63_1, -1, 1, 0},
/*  2 */ { 6, s_63_2, -1, 1, 0}
};

static const symbol s_64_0[2] = { 0xCE, 0xBD };
static const symbol s_64_1[10] = { 0xCE, 0xB5, 0xCF, 0x80, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_64_2[14] = { 0xCE, 0xB4, 0xCF, 0x89, 0xCE, 0xB4, 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_64_3[12] = { 0xCF, 0x87, 0xCE, 0xB5, 0xCF, 0x81, 0xCF, 0x83, 0xCE, 0xBF, 0xCE, 0xBD };
static const symbol s_64_4[14] = { 0xCE, 0xBC, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xBF, 0xCE, 0xBD };
static const symbol s_64_5[12] = { 0xCE, 0xB5, 0xCF, 0x81, 0xCE, 0xB7, 0xCE, 0xBC, 0xCE, 0xBF, 0xCE, 0xBD };

static const struct among a_64[6] =
{
/*  0 */ { 2, s_64_0, -1, 1, 0},
/*  1 */ { 10, s_64_1, 0, 1, 0},
/*  2 */ { 14, s_64_2, 0, 1, 0},
/*  3 */ { 12, s_64_3, 0, 1, 0},
/*  4 */ { 14, s_64_4, 0, 1, 0},
/*  5 */ { 12, s_64_5, 0, 1, 0}
};

static const symbol s_65_0[8] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };

static const struct among a_65[1] =
{
/*  0 */ { 8, s_65_0, -1, 1, 0}
};

static const symbol s_66_0[4] = { 0xCF, 0x87, 0xCF, 0x81 };
static const symbol s_66_1[10] = { 0xCE, 0xB4, 0xCF, 0x85, 0xCF, 0x83, 0xCF, 0x87, 0xCF, 0x81 };
static const symbol s_66_2[8] = { 0xCE, 0xB5, 0xCF, 0x85, 0xCF, 0x87, 0xCF, 0x81 };
static const symbol s_66_3[6] = { 0xCE, 0xB1, 0xCF, 0x87, 0xCF, 0x81 };
static const symbol s_66_4[14] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xB9, 0xCE, 0xBD, 0xCE, 0xBF, 0xCF, 0x87, 0xCF, 0x81 };
static const symbol s_66_5[12] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xB9, 0xCE, 0xBC, 0xCF, 0x88 };
static const symbol s_66_6[4] = { 0xCF, 0x83, 0xCE, 0xB2 };
static const symbol s_66_7[6] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xB2 };
static const symbol s_66_8[6] = { 0xCE, 0xB1, 0xCF, 0x80, 0xCE, 0xBB };
static const symbol s_66_9[10] = { 0xCE, 0xB1, 0xCE, 0xB5, 0xCE, 0xB9, 0xCE, 0xBC, 0xCE, 0xBD };

static const struct among a_66[10] =
{
/*  0 */ { 4, s_66_0, -1, 1, 0},
/*  1 */ { 10, s_66_1, 0, 1, 0},
/*  2 */ { 8, s_66_2, 0, 1, 0},
/*  3 */ { 6, s_66_3, 0, 1, 0},
/*  4 */ { 14, s_66_4, 0, 1, 0},
/*  5 */ { 12, s_66_5, -1, 1, 0},
/*  6 */ { 4, s_66_6, -1, 1, 0},
/*  7 */ { 6, s_66_7, 6, 1, 0},
/*  8 */ { 6, s_66_8, -1, 1, 0},
/*  9 */ { 10, s_66_9, -1, 1, 0}
};

static const symbol s_67_0[8] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_67_1[12] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_67_2[12] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB5 };

static const struct among a_67[3] =
{
/*  0 */ { 8, s_67_0, -1, 1, 0},
/*  1 */ { 12, s_67_1, 0, 1, 0},
/*  2 */ { 12, s_67_2, 0, 1, 0}
};

static const symbol s_68_0[2] = { 0xCF, 0x81 };
static const symbol s_68_1[22] = { 0xCF, 0x83, 0xCF, 0x84, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xB2, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_68_2[18] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_68_3[6] = { 0xCF, 0x83, 0xCF, 0x80, 0xCE, 0xB9 };
static const symbol s_68_4[2] = { 0xCE, 0xBD };
static const symbol s_68_5[8] = { 0xCE, 0xB5, 0xCE, 0xBE, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_68[6] =
{
/*  0 */ { 2, s_68_0, -1, 1, 0},
/*  1 */ { 22, s_68_1, -1, 1, 0},
/*  2 */ { 18, s_68_2, -1, 1, 0},
/*  3 */ { 6, s_68_3, -1, 1, 0},
/*  4 */ { 2, s_68_4, -1, 1, 0},
/*  5 */ { 8, s_68_5, 4, 1, 0}
};

static const symbol s_69_0[8] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_69_1[12] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_69_2[12] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB5 };

static const struct among a_69[3] =
{
/*  0 */ { 8, s_69_0, -1, 1, 0},
/*  1 */ { 12, s_69_1, 0, 1, 0},
/*  2 */ { 12, s_69_2, 0, 1, 0}
};

static const symbol s_70_0[10] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_70_1[16] = { 0xCF, 0x80, 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_70_2[16] = { 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xBB, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_70_3[2] = { 0xCF, 0x86 };
static const symbol s_70_4[2] = { 0xCF, 0x87 };
static const symbol s_70_5[4] = { 0xCE, 0xB1, 0xCE, 0xB6 };
static const symbol s_70_6[12] = { 0xCF, 0x89, 0xCF, 0x81, 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x80, 0xCE, 0xBB };

static const struct among a_70[7] =
{
/*  0 */ { 10, s_70_0, -1, 1, 0},
/*  1 */ { 16, s_70_1, 0, 1, 0},
/*  2 */ { 16, s_70_2, -1, 1, 0},
/*  3 */ { 2, s_70_3, -1, 1, 0},
/*  4 */ { 2, s_70_4, -1, 1, 0},
/*  5 */ { 4, s_70_5, -1, 1, 0},
/*  6 */ { 12, s_70_6, -1, 1, 0}
};

static const symbol s_71_0[10] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_71_1[8] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1 };
static const symbol s_71_2[10] = { 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x89, 0xCE, 0xBD };

static const struct among a_71[3] =
{
/*  0 */ { 10, s_71_0, -1, 1, 0},
/*  1 */ { 8, s_71_1, -1, 1, 0},
/*  2 */ { 10, s_71_2, -1, 1, 0}
};

static const symbol s_72_0[4] = { 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_72_1[6] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_72_2[4] = { 0xCE, 0xB1, 0xCF, 0x83 };
static const symbol s_72_3[4] = { 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_72_4[8] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_72_5[8] = { 0xCE, 0xB7, 0xCE, 0xB4, 0xCE, 0xB5, 0xCF, 0x83 };
static const symbol s_72_6[4] = { 0xCE, 0xB7, 0xCF, 0x83 };
static const symbol s_72_7[6] = { 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_72_8[10] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_72_9[4] = { 0xCE, 0xBF, 0xCF, 0x83 };
static const symbol s_72_10[2] = { 0xCF, 0x85 };
static const symbol s_72_11[4] = { 0xCE, 0xBF, 0xCF, 0x85 };
static const symbol s_72_12[2] = { 0xCF, 0x89 };
static const symbol s_72_13[6] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCF, 0x89 };
static const symbol s_72_14[4] = { 0xCE, 0xB1, 0xCF, 0x89 };
static const symbol s_72_15[6] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCF, 0x89 };
static const symbol s_72_16[2] = { 0xCE, 0xB1 };
static const symbol s_72_17[10] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB1 };
static const symbol s_72_18[12] = { 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1 };
static const symbol s_72_19[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1 };
static const symbol s_72_20[12] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1 };
static const symbol s_72_21[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCE, 0xB1 };
static const symbol s_72_22[2] = { 0xCE, 0xB5 };
static const symbol s_72_23[14] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_24[12] = { 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_25[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_26[14] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_27[16] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_28[14] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_29[12] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_30[10] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_31[10] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_32[10] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_33[14] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_34[8] = { 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_35[12] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB5, 0xCE, 0xB9, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_72_36[2] = { 0xCE, 0xB7 };
static const symbol s_72_37[2] = { 0xCE, 0xB9 };
static const symbol s_72_38[8] = { 0xCE, 0xB1, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_39[8] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_40[10] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_41[8] = { 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_42[8] = { 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_43[10] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_44[12] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_45[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_46[10] = { 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_47[10] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_48[8] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_49[10] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_50[8] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB1, 0xCE, 0xB9 };
static const symbol s_72_51[4] = { 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_72_52[8] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_72_53[6] = { 0xCE, 0xB1, 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_72_54[8] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB5, 0xCE, 0xB9 };
static const symbol s_72_55[4] = { 0xCE, 0xBF, 0xCE, 0xB9 };
static const symbol s_72_56[6] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_57[10] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_58[10] = { 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_59[12] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_60[10] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_61[10] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_62[12] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_72_63[4] = { 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_72_64[8] = { 0xCE, 0xB7, 0xCE, 0xB4, 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_72_65[4] = { 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_66[10] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_67[16] = { 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_68[18] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_69[8] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_70[14] = { 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_71[16] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x83, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_72[14] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_73[16] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_74[12] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_75[14] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_76[10] = { 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_77[12] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_78[8] = { 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_79[10] = { 0xCE, 0xB9, 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_80[8] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_81[8] = { 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_82[12] = { 0xCE, 0xB7, 0xCE, 0xB8, 0xCE, 0xB7, 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_72_83[2] = { 0xCE, 0xBF };

static const struct among a_72[84] =
{
/*  0 */ { 4, s_72_0, -1, 1, 0},
/*  1 */ { 6, s_72_1, 0, 1, 0},
/*  2 */ { 4, s_72_2, -1, 1, 0},
/*  3 */ { 4, s_72_3, -1, 1, 0},
/*  4 */ { 8, s_72_4, 3, 1, 0},
/*  5 */ { 8, s_72_5, 3, 1, 0},
/*  6 */ { 4, s_72_6, -1, 1, 0},
/*  7 */ { 6, s_72_7, -1, 1, 0},
/*  8 */ { 10, s_72_8, 7, 1, 0},
/*  9 */ { 4, s_72_9, -1, 1, 0},
/* 10 */ { 2, s_72_10, -1, 1, 0},
/* 11 */ { 4, s_72_11, 10, 1, 0},
/* 12 */ { 2, s_72_12, -1, 1, 0},
/* 13 */ { 6, s_72_13, 12, 1, 0},
/* 14 */ { 4, s_72_14, 12, 1, 0},
/* 15 */ { 6, s_72_15, 12, 1, 0},
/* 16 */ { 2, s_72_16, -1, 1, 0},
/* 17 */ { 10, s_72_17, 16, 1, 0},
/* 18 */ { 12, s_72_18, 16, 1, 0},
/* 19 */ { 14, s_72_19, 18, 1, 0},
/* 20 */ { 12, s_72_20, 16, 1, 0},
/* 21 */ { 14, s_72_21, 20, 1, 0},
/* 22 */ { 2, s_72_22, -1, 1, 0},
/* 23 */ { 14, s_72_23, 22, 1, 0},
/* 24 */ { 12, s_72_24, 22, 1, 0},
/* 25 */ { 14, s_72_25, 24, 1, 0},
/* 26 */ { 14, s_72_26, 22, 1, 0},
/* 27 */ { 16, s_72_27, 26, 1, 0},
/* 28 */ { 14, s_72_28, 22, 1, 0},
/* 29 */ { 12, s_72_29, 22, 1, 0},
/* 30 */ { 10, s_72_30, 22, 1, 0},
/* 31 */ { 10, s_72_31, 22, 1, 0},
/* 32 */ { 10, s_72_32, 22, 1, 0},
/* 33 */ { 14, s_72_33, 32, 1, 0},
/* 34 */ { 8, s_72_34, 22, 1, 0},
/* 35 */ { 12, s_72_35, 34, 1, 0},
/* 36 */ { 2, s_72_36, -1, 1, 0},
/* 37 */ { 2, s_72_37, -1, 1, 0},
/* 38 */ { 8, s_72_38, 37, 1, 0},
/* 39 */ { 8, s_72_39, 37, 1, 0},
/* 40 */ { 10, s_72_40, 39, 1, 0},
/* 41 */ { 8, s_72_41, 37, 1, 0},
/* 42 */ { 8, s_72_42, 37, 1, 0},
/* 43 */ { 10, s_72_43, 42, 1, 0},
/* 44 */ { 12, s_72_44, 37, 1, 0},
/* 45 */ { 14, s_72_45, 44, 1, 0},
/* 46 */ { 10, s_72_46, 37, 1, 0},
/* 47 */ { 10, s_72_47, 37, 1, 0},
/* 48 */ { 8, s_72_48, 37, 1, 0},
/* 49 */ { 10, s_72_49, 37, 1, 0},
/* 50 */ { 8, s_72_50, 37, 1, 0},
/* 51 */ { 4, s_72_51, 37, 1, 0},
/* 52 */ { 8, s_72_52, 51, 1, 0},
/* 53 */ { 6, s_72_53, 51, 1, 0},
/* 54 */ { 8, s_72_54, 51, 1, 0},
/* 55 */ { 4, s_72_55, 37, 1, 0},
/* 56 */ { 6, s_72_56, -1, 1, 0},
/* 57 */ { 10, s_72_57, 56, 1, 0},
/* 58 */ { 10, s_72_58, 56, 1, 0},
/* 59 */ { 12, s_72_59, 58, 1, 0},
/* 60 */ { 10, s_72_60, 56, 1, 0},
/* 61 */ { 10, s_72_61, 56, 1, 0},
/* 62 */ { 12, s_72_62, 61, 1, 0},
/* 63 */ { 4, s_72_63, -1, 1, 0},
/* 64 */ { 8, s_72_64, 63, 1, 0},
/* 65 */ { 4, s_72_65, -1, 1, 0},
/* 66 */ { 10, s_72_66, 65, 1, 0},
/* 67 */ { 16, s_72_67, 66, 1, 0},
/* 68 */ { 18, s_72_68, 67, 1, 0},
/* 69 */ { 8, s_72_69, 65, 1, 0},
/* 70 */ { 14, s_72_70, 65, 1, 0},
/* 71 */ { 16, s_72_71, 70, 1, 0},
/* 72 */ { 14, s_72_72, 65, 1, 0},
/* 73 */ { 16, s_72_73, 72, 1, 0},
/* 74 */ { 12, s_72_74, 65, 1, 0},
/* 75 */ { 14, s_72_75, 74, 1, 0},
/* 76 */ { 10, s_72_76, 65, 1, 0},
/* 77 */ { 12, s_72_77, 76, 1, 0},
/* 78 */ { 8, s_72_78, 65, 1, 0},
/* 79 */ { 10, s_72_79, 78, 1, 0},
/* 80 */ { 8, s_72_80, 65, 1, 0},
/* 81 */ { 8, s_72_81, 65, 1, 0},
/* 82 */ { 12, s_72_82, 81, 1, 0},
/* 83 */ { 2, s_72_83, -1, 1, 0}
};

static const symbol s_73_0[10] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_73_1[8] = { 0xCF, 0x85, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_73_2[8] = { 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_73_3[8] = { 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_73_4[10] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_73_5[8] = { 0xCF, 0x85, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_73_6[8] = { 0xCF, 0x89, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84 };
static const symbol s_73_7[8] = { 0xCE, 0xBF, 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84 };

static const struct among a_73[8] =
{
/*  0 */ { 10, s_73_0, -1, 1, 0},
/*  1 */ { 8, s_73_1, -1, 1, 0},
/*  2 */ { 8, s_73_2, -1, 1, 0},
/*  3 */ { 8, s_73_3, -1, 1, 0},
/*  4 */ { 10, s_73_4, -1, 1, 0},
/*  5 */ { 8, s_73_5, -1, 1, 0},
/*  6 */ { 8, s_73_6, -1, 1, 0},
/*  7 */ { 8, s_73_7, -1, 1, 0}
};

static const unsigned char g_v[] = { 81, 65, 16, 1 };

static const unsigned char g_v2[] = { 81, 65, 0, 1 };

static const symbol s_0[] = { 0xCE, 0xB1 };
static const symbol s_1[] = { 0xCE, 0xB2 };
static const symbol s_2[] = { 0xCE, 0xB3 };
static const symbol s_3[] = { 0xCE, 0xB4 };
static const symbol s_4[] = { 0xCE, 0xB5 };
static const symbol s_5[] = { 0xCE, 0xB6 };
static const symbol s_6[] = { 0xCE, 0xB7 };
static const symbol s_7[] = { 0xCE, 0xB8 };
static const symbol s_8[] = { 0xCE, 0xB9 };
static const symbol s_9[] = { 0xCE, 0xBA };
static const symbol s_10[] = { 0xCE, 0xBB };
static const symbol s_11[] = { 0xCE, 0xBC };
static const symbol s_12[] = { 0xCE, 0xBD };
static const symbol s_13[] = { 0xCE, 0xBE };
static const symbol s_14[] = { 0xCE, 0xBF };
static const symbol s_15[] = { 0xCF, 0x80 };
static const symbol s_16[] = { 0xCF, 0x81 };
static const symbol s_17[] = { 0xCF, 0x83 };
static const symbol s_18[] = { 0xCF, 0x84 };
static const symbol s_19[] = { 0xCF, 0x85 };
static const symbol s_20[] = { 0xCF, 0x86 };
static const symbol s_21[] = { 0xCF, 0x87 };
static const symbol s_22[] = { 0xCF, 0x88 };
static const symbol s_23[] = { 0xCF, 0x89 };
static const symbol s_24[] = { 0xCF, 0x86, 0xCE, 0xB1 };
static const symbol s_25[] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB1 };
static const symbol s_26[] = { 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBF };
static const symbol s_27[] = { 0xCF, 0x83, 0xCE, 0xBF };
static const symbol s_28[] = { 0xCF, 0x84, 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF };
static const symbol s_29[] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB5 };
static const symbol s_30[] = { 0xCF, 0x80, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_31[] = { 0xCF, 0x84, 0xCE, 0xB5, 0xCF, 0x81 };
static const symbol s_32[] = { 0xCF, 0x86, 0xCF, 0x89 };
static const symbol s_33[] = { 0xCE, 0xBA, 0xCE, 0xB1, 0xCE, 0xB8, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_34[] = { 0xCE, 0xB3, 0xCE, 0xB5, 0xCE, 0xB3, 0xCE, 0xBF, 0xCE, 0xBD };
static const symbol s_35[] = { 0xCE, 0xB9 };
static const symbol s_36[] = { 0xCE, 0xB9, 0xCE, 0xB6 };
static const symbol s_37[] = { 0xCF, 0x89, 0xCE, 0xBD };
static const symbol s_38[] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xB1 };
static const symbol s_39[] = { 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_40[] = { 0xCE, 0xB9 };
static const symbol s_41[] = { 0xCE, 0xB9, 0xCF, 0x83 };
static const symbol s_42[] = { 0xCE, 0xB9 };
static const symbol s_43[] = { 0xCE, 0xB9 };
static const symbol s_44[] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_45[] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBC };
static const symbol s_46[] = { 0xCE, 0xB9 };
static const symbol s_47[] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xBD, 0xCF, 0x89, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_48[] = { 0xCE, 0xB1, 0xCF, 0x84, 0xCE, 0xBF, 0xCE, 0xBC };
static const symbol s_49[] = { 0xCE, 0xB3, 0xCE, 0xBD, 0xCF, 0x89, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_50[] = { 0xCE, 0xB5, 0xCE, 0xB8, 0xCE, 0xBD };
static const symbol s_51[] = { 0xCE, 0xB5, 0xCE, 0xBA, 0xCE, 0xBB, 0xCE, 0xB5, 0xCE, 0xBA, 0xCF, 0x84 };
static const symbol s_52[] = { 0xCF, 0x83, 0xCE, 0xBA, 0xCE, 0xB5, 0xCF, 0x80, 0xCF, 0x84 };
static const symbol s_53[] = { 0xCF, 0x84, 0xCE, 0xBF, 0xCF, 0x80 };
static const symbol s_54[] = { 0xCE, 0xB1, 0xCE, 0xBB, 0xCE, 0xB5, 0xCE, 0xBE, 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB4, 0xCF, 0x81 };
static const symbol s_55[] = { 0xCE, 0xB2, 0xCF, 0x85, 0xCE, 0xB6, 0xCE, 0xB1, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_56[] = { 0xCE, 0xB8, 0xCE, 0xB5, 0xCE, 0xB1, 0xCF, 0x84, 0xCF, 0x81 };
static const symbol s_57[] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_58[] = { 0xCE, 0xB1, 0xCE, 0xBA };
static const symbol s_59[] = { 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_60[] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCF, 0x81 };
static const symbol s_61[] = { 0xCE, 0xB9, 0xCF, 0x84, 0xCF, 0x83 };
static const symbol s_62[] = { 0xCE, 0xB9, 0xCE, 0xB4 };
static const symbol s_63[] = { 0xCE, 0xB9, 0xCE, 0xB4 };
static const symbol s_64[] = { 0xCE, 0xB9, 0xCF, 0x83, 0xCE, 0xBA };
static const symbol s_65[] = { 0xCE, 0xB1, 0xCE, 0xB4 };
static const symbol s_66[] = { 0xCE, 0xB5, 0xCE, 0xB4 };
static const symbol s_67[] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xB4 };
static const symbol s_68[] = { 0xCE, 0xB5 };
static const symbol s_69[] = { 0xCE, 0xB9 };
static const symbol s_70[] = { 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_71[] = { 0xCE, 0xB9, 0xCE, 0xBA };
static const symbol s_72[] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_73[] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_74[] = { 0xCE, 0xB1, 0xCE, 0xBC, 0xCE, 0xB5 };
static const symbol s_75[] = { 0xCE, 0xB1, 0xCE, 0xBC };
static const symbol s_76[] = { 0xCE, 0xB1, 0xCE, 0xB3, 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_77[] = { 0xCE, 0xB1, 0xCE, 0xBD, 0xCE, 0xB5 };
static const symbol s_78[] = { 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_79[] = { 0xCE, 0xB1, 0xCE, 0xBD };
static const symbol s_80[] = { 0xCE, 0xB5, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_81[] = { 0xCE, 0xB5, 0xCF, 0x84 };
static const symbol s_82[] = { 0xCE, 0xB5, 0xCF, 0x84 };
static const symbol s_83[] = { 0xCE, 0xB5, 0xCF, 0x84 };
static const symbol s_84[] = { 0xCE, 0xB1, 0xCF, 0x81, 0xCF, 0x87 };
static const symbol s_85[] = { 0xCE, 0xBF, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_86[] = { 0xCE, 0xBA, 0xCF, 0x81, 0xCE, 0xB5 };
static const symbol s_87[] = { 0xCF, 0x89, 0xCE, 0xBD, 0xCF, 0x84 };
static const symbol s_88[] = { 0xCE, 0xBF, 0xCE, 0xBD };
static const symbol s_89[] = { 0xCE, 0xBF, 0xCE, 0xBC, 0xCE, 0xB1, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_90[] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_91[] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_92[] = { 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84, 0xCE, 0xB5 };
static const symbol s_93[] = { 0xCE, 0xB9, 0xCE, 0xB5, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_94[] = { 0xCE, 0xB7, 0xCE, 0xBA };
static const symbol s_95[] = { 0xCE, 0xB7, 0xCE, 0xBA };
static const symbol s_96[] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_97[] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCF, 0x83 };
static const symbol s_98[] = { 0xCE, 0xBA, 0xCE, 0xBF, 0xCE, 0xBB, 0xCE, 0xBB };
static const symbol s_99[] = { 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_100[] = { 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_101[] = { 0xCE, 0xB1, 0xCE, 0xB3 };
static const symbol s_102[] = { 0xCE, 0xB7, 0xCF, 0x83 };
static const symbol s_103[] = { 0xCE, 0xB7, 0xCF, 0x83, 0xCF, 0x84 };
static const symbol s_104[] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBD };
static const symbol s_105[] = { 0xCE, 0xBF, 0xCF, 0x85, 0xCE, 0xBC };
static const symbol s_106[] = { 0xCE, 0xBC, 0xCE, 0xB1 };

static int r_has_min_length(struct SN_env * z) { /* backwardmode */
    if (!(len_utf8(z->p) >= 3)) return 0; /* $(<integer expression> >= <integer expression>), line 109 */
    return 1;
}

static int r_tolower(struct SN_env * z) { /* backwardmode */
    int among_var;
    while(1) { /* repeat, line 113 */
        int m1 = z->l - z->c; (void)m1;
        z->ket = z->c; /* [, line 114 */
        among_var = find_among_b(z, a_0, 46); /* substring, line 114 */
        if (!(among_var)) goto lab0;
        z->bra = z->c; /* ], line 114 */
        switch (among_var) { /* among, line 114 */
            case 1:
                {   int ret = slice_from_s(z, 2, s_0); /* <-, line 115 */
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {   int ret = slice_from_s(z, 2, s_1); /* <-, line 116 */
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {   int ret = slice_from_s(z, 2, s_2); /* <-, line 117 */
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {   int ret = slice_from_s(z, 2, s_3); /* <-, line 118 */
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {   int ret = slice_from_s(z, 2, s_4); /* <-, line 119 */
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {   int ret = slice_from_s(z, 2, s_5); /* <-, line 120 */
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {   int ret = slice_from_s(z, 2, s_6); /* <-, line 121 */
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {   int ret = slice_from_s(z, 2, s_7); /* <-, line 122 */
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                {   int ret = slice_from_s(z, 2, s_8); /* <-, line 123 */
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {   int ret = slice_from_s(z, 2, s_9); /* <-, line 124 */
                    if (ret < 0) return ret;
                }
                break;
            case 11:
                {   int ret = slice_from_s(z, 2, s_10); /* <-, line 125 */
                    if (ret < 0) return ret;
                }
                break;
            case 12:
                {   int ret = slice_from_s(z, 2, s_11); /* <-, line 126 */
                    if (ret < 0) return ret;
                }
                break;
            case 13:
                {   int ret = slice_from_s(z, 2, s_12); /* <-, line 127 */
                    if (ret < 0) return ret;
                }
                break;
            case 14:
                {   int ret = slice_from_s(z, 2, s_13); /* <-, line 128 */
                    if (ret < 0) return ret;
                }
                break;
            case 15:
                {   int ret = slice_from_s(z, 2, s_14); /* <-, line 129 */
                    if (ret < 0) return ret;
                }
                break;
            case 16:
                {   int ret = slice_from_s(z, 2, s_15); /* <-, line 130 */
                    if (ret < 0) return ret;
                }
                break;
            case 17:
                {   int ret = slice_from_s(z, 2, s_16); /* <-, line 131 */
                    if (ret < 0) return ret;
                }
                break;
            case 18:
                {   int ret = slice_from_s(z, 2, s_17); /* <-, line 132 */
                    if (ret < 0) return ret;
                }
                break;
            case 19:
                {   int ret = slice_from_s(z, 2, s_18); /* <-, line 133 */
                    if (ret < 0) return ret;
                }
                break;
            case 20:
                {   int ret = slice_from_s(z, 2, s_19); /* <-, line 134 */
                    if (ret < 0) return ret;
                }
                break;
            case 21:
                {   int ret = slice_from_s(z, 2, s_20); /* <-, line 135 */
                    if (ret < 0) return ret;
                }
                break;
            case 22:
                {   int ret = slice_from_s(z, 2, s_21); /* <-, line 136 */
                    if (ret < 0) return ret;
                }
                break;
            case 23:
                {   int ret = slice_from_s(z, 2, s_22); /* <-, line 137 */
                    if (ret < 0) return ret;
                }
                break;
            case 24:
                {   int ret = slice_from_s(z, 2, s_23); /* <-, line 138 */
                    if (ret < 0) return ret;
                }
                break;
            case 25:
                {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                    if (ret < 0) goto lab0;
                    z->c = ret; /* next, line 160 */
                }
                break;
        }
        continue;
    lab0:
        z->c = z->l - m1;
        break;
    }
    return 1;
}

static int r_step1(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 166 */
    among_var = find_among_b(z, a_1, 40); /* substring, line 166 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 166 */
    switch (among_var) { /* among, line 166 */
        case 1:
            {   int ret = slice_from_s(z, 4, s_24); /* <-, line 167 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 6, s_25); /* <-, line 168 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 6, s_26); /* <-, line 169 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 4, s_27); /* <-, line 170 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 8, s_28); /* <-, line 171 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 6, s_29); /* <-, line 172 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 6, s_30); /* <-, line 173 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 6, s_31); /* <-, line 174 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 4, s_32); /* <-, line 175 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 12, s_33); /* <-, line 176 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 10, s_34); /* <-, line 177 */
                if (ret < 0) return ret;
            }
            break;
    }
    z->B[0] = 0; /* unset test1, line 179 */
    return 1;
}

static int r_steps1(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 183 */
    if (!(find_among_b(z, a_4, 14))) return 0; /* substring, line 183 */
    z->bra = z->c; /* ], line 183 */
    {   int ret = slice_del(z); /* delete, line 186 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 187 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 191 */
        z->ket = z->c; /* [, line 188 */
        z->bra = z->c; /* ], line 188 */
        if (z->c - 3 <= z->lb || z->p[z->c - 1] >> 5 != 5 || !((-2145255424 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab1; /* substring, line 188 */
        if (!(find_among_b(z, a_2, 9))) goto lab1;
        if (z->c > z->lb) goto lab1; /* atlimit, line 188 */
        {   int ret = slice_from_s(z, 2, s_35); /* <-, line 190 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 192 */
        z->bra = z->c; /* ], line 192 */
        if (!(find_among_b(z, a_3, 22))) return 0; /* substring, line 192 */
        if (z->c > z->lb) return 0; /* atlimit, line 192 */
        {   int ret = slice_from_s(z, 4, s_36); /* <-, line 196 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_steps2(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 203 */
    if (!(find_among_b(z, a_6, 7))) return 0; /* substring, line 203 */
    z->bra = z->c; /* ], line 203 */
    {   int ret = slice_del(z); /* delete, line 205 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 206 */
    z->ket = z->c; /* [, line 207 */
    z->bra = z->c; /* ], line 207 */
    if (!(find_among_b(z, a_5, 8))) return 0; /* substring, line 207 */
    if (z->c > z->lb) return 0; /* atlimit, line 207 */
    {   int ret = slice_from_s(z, 4, s_37); /* <-, line 208 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_steps3(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 215 */
    if (!(find_among_b(z, a_9, 7))) return 0; /* substring, line 215 */
    z->bra = z->c; /* ], line 215 */
    {   int ret = slice_del(z); /* delete, line 217 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 218 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 219 */
        if (!(eq_s_b(z, 6, s_38))) goto lab1; /* literal, line 219 */
        if (z->c > z->lb) goto lab1; /* atlimit, line 219 */
        {   int ret = slice_from_s(z, 4, s_39); /* <-, line 219 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 220 */
        z->bra = z->c; /* ], line 220 */
        if (z->c - 3 <= z->lb || z->p[z->c - 1] >> 5 != 5 || !((-2145255424 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab2; /* substring, line 220 */
        if (!(find_among_b(z, a_7, 19))) goto lab2;
        if (z->c > z->lb) goto lab2; /* atlimit, line 220 */
        {   int ret = slice_from_s(z, 2, s_40); /* <-, line 224 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab2:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 226 */
        z->bra = z->c; /* ], line 226 */
        if (!(find_among_b(z, a_8, 13))) return 0; /* substring, line 226 */
        if (z->c > z->lb) return 0; /* atlimit, line 226 */
        {   int ret = slice_from_s(z, 4, s_41); /* <-, line 229 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_steps4(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 236 */
    if (!(find_among_b(z, a_11, 7))) return 0; /* substring, line 236 */
    z->bra = z->c; /* ], line 236 */
    {   int ret = slice_del(z); /* delete, line 238 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 239 */
    z->ket = z->c; /* [, line 240 */
    z->bra = z->c; /* ], line 240 */
    if (z->c - 3 <= z->lb || z->p[z->c - 1] >> 5 != 5 || !((-2145255424 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* substring, line 240 */
    if (!(find_among_b(z, a_10, 19))) return 0;
    if (z->c > z->lb) return 0; /* atlimit, line 240 */
    {   int ret = slice_from_s(z, 2, s_42); /* <-, line 244 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_steps5(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 251 */
    if (!(find_among_b(z, a_14, 11))) return 0; /* substring, line 251 */
    z->bra = z->c; /* ], line 251 */
    {   int ret = slice_del(z); /* delete, line 254 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 255 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 259 */
        z->ket = z->c; /* [, line 256 */
        z->bra = z->c; /* ], line 256 */
        if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 181 && z->p[z->c - 1] != 191)) goto lab1; /* substring, line 256 */
        if (!(find_among_b(z, a_12, 7))) goto lab1;
        if (z->c > z->lb) goto lab1; /* atlimit, line 256 */
        {   int ret = slice_from_s(z, 2, s_43); /* <-, line 258 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 260 */
        z->bra = z->c; /* ], line 260 */
        if (!(find_among_b(z, a_13, 33))) return 0; /* substring, line 260 */
        if (z->c > z->lb) return 0; /* atlimit, line 260 */
        {   int ret = slice_from_s(z, 6, s_44); /* <-, line 264 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_steps6(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 271 */
    if (!(find_among_b(z, a_18, 6))) return 0; /* substring, line 271 */
    z->bra = z->c; /* ], line 271 */
    {   int ret = slice_del(z); /* delete, line 273 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 274 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 278 */
        z->ket = z->c; /* [, line 275 */
        z->bra = z->c; /* ], line 275 */
        if (z->c - 3 <= z->lb || z->p[z->c - 1] != 181) goto lab1; /* substring, line 275 */
        if (!(find_among_b(z, a_15, 5))) goto lab1;
        if (z->c > z->lb) goto lab1; /* atlimit, line 275 */
        {   int ret = slice_from_s(z, 6, s_45); /* <-, line 277 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 279 */
        z->bra = z->c; /* ], line 279 */
        if (z->c - 7 <= z->lb || z->p[z->c - 1] != 181) goto lab2; /* substring, line 279 */
        if (!(find_among_b(z, a_16, 2))) goto lab2;
        if (z->c > z->lb) goto lab2; /* atlimit, line 279 */
        {   int ret = slice_from_s(z, 2, s_46); /* <-, line 281 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab2:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 283 */
        if (z->c - 9 <= z->lb || (z->p[z->c - 1] != 186 && z->p[z->c - 1] != 189)) return 0; /* substring, line 283 */
        among_var = find_among_b(z, a_17, 10);
        if (!(among_var)) return 0;
        z->bra = z->c; /* ], line 283 */
        switch (among_var) { /* among, line 283 */
            case 1:
                {   int ret = slice_from_s(z, 12, s_47); /* <-, line 284 */
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {   int ret = slice_from_s(z, 8, s_48); /* <-, line 285 */
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {   int ret = slice_from_s(z, 10, s_49); /* <-, line 286 */
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {   int ret = slice_from_s(z, 6, s_50); /* <-, line 287 */
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {   int ret = slice_from_s(z, 12, s_51); /* <-, line 288 */
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {   int ret = slice_from_s(z, 10, s_52); /* <-, line 289 */
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {   int ret = slice_from_s(z, 6, s_53); /* <-, line 290 */
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {   int ret = slice_from_s(z, 16, s_54); /* <-, line 291 */
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                {   int ret = slice_from_s(z, 12, s_55); /* <-, line 292 */
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {   int ret = slice_from_s(z, 10, s_56); /* <-, line 293 */
                    if (ret < 0) return ret;
                }
                break;
        }
    }
lab0:
    return 1;
}

static int r_steps7(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 300 */
    if (z->c - 9 <= z->lb || (z->p[z->c - 1] != 177 && z->p[z->c - 1] != 185)) return 0; /* substring, line 300 */
    if (!(find_among_b(z, a_20, 4))) return 0;
    z->bra = z->c; /* ], line 300 */
    {   int ret = slice_del(z); /* delete, line 302 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 303 */
    z->ket = z->c; /* [, line 304 */
    z->bra = z->c; /* ], line 304 */
    if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 135)) return 0; /* substring, line 304 */
    if (!(find_among_b(z, a_19, 2))) return 0;
    if (z->c > z->lb) return 0; /* atlimit, line 304 */
    {   int ret = slice_from_s(z, 8, s_57); /* <-, line 306 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_steps8(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 313 */
    if (!(find_among_b(z, a_23, 8))) return 0; /* substring, line 313 */
    z->bra = z->c; /* ], line 313 */
    {   int ret = slice_del(z); /* delete, line 315 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 316 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 323 */
        z->ket = z->c; /* [, line 317 */
        z->bra = z->c; /* ], line 317 */
        if (!(find_among_b(z, a_21, 33))) goto lab1; /* substring, line 317 */
        if (z->c > z->lb) goto lab1; /* atlimit, line 317 */
        {   int ret = slice_from_s(z, 4, s_58); /* <-, line 322 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 324 */
        z->bra = z->c; /* ], line 324 */
        if (!(find_among_b(z, a_22, 15))) goto lab2; /* substring, line 324 */
        if (z->c > z->lb) goto lab2; /* atlimit, line 324 */
        {   int ret = slice_from_s(z, 6, s_59); /* <-, line 327 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab2:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 329 */
        z->bra = z->c; /* ], line 329 */
        if (!(eq_s_b(z, 6, s_60))) return 0; /* literal, line 329 */
        {   int ret = slice_from_s(z, 6, s_61); /* <-, line 329 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_steps9(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 335 */
    if (z->c - 7 <= z->lb || z->p[z->c - 1] >> 5 != 5 || !((-1610481664 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* substring, line 335 */
    if (!(find_among_b(z, a_26, 3))) return 0;
    z->bra = z->c; /* ], line 335 */
    {   int ret = slice_del(z); /* delete, line 337 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 338 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 341 */
        z->ket = z->c; /* [, line 339 */
        z->bra = z->c; /* ], line 339 */
        if (!(find_among_b(z, a_24, 4))) goto lab1; /* substring, line 339 */
        if (z->c > z->lb) goto lab1; /* atlimit, line 339 */
        {   int ret = slice_from_s(z, 4, s_62); /* <-, line 340 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 342 */
        z->bra = z->c; /* ], line 342 */
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 181 && z->p[z->c - 1] != 189)) return 0; /* substring, line 342 */
        if (!(find_among_b(z, a_25, 2))) return 0;
        {   int ret = slice_from_s(z, 4, s_63); /* <-, line 343 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_steps10(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 350 */
    if (!(find_among_b(z, a_28, 4))) return 0; /* substring, line 350 */
    z->bra = z->c; /* ], line 350 */
    {   int ret = slice_del(z); /* delete, line 352 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 353 */
    z->ket = z->c; /* [, line 354 */
    z->bra = z->c; /* ], line 354 */
    if (!(find_among_b(z, a_27, 7))) return 0; /* substring, line 354 */
    if (z->c > z->lb) return 0; /* atlimit, line 354 */
    {   int ret = slice_from_s(z, 6, s_64); /* <-, line 356 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step2a(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 363 */
    if (z->c - 7 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 189)) return 0; /* substring, line 363 */
    if (!(find_among_b(z, a_29, 2))) return 0;
    z->bra = z->c; /* ], line 363 */
    {   int ret = slice_del(z); /* delete, line 364 */
        if (ret < 0) return ret;
    }
    {   int m1 = z->l - z->c; (void)m1; /* not, line 366 */
        z->ket = z->c; /* [, line 366 */
        if (!(find_among_b(z, a_30, 10))) goto lab0; /* substring, line 366 */
        z->bra = z->c; /* ], line 366 */
        return 0;
    lab0:
        z->c = z->l - m1;
    }
    {   int ret;
        {   int saved_c = z->c;
            ret = insert_s(z, z->c, z->c, 4, s_65); /* <+, line 369 */
            z->c = saved_c;
        }
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step2b(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 373 */
    if (z->c - 7 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 189)) return 0; /* substring, line 373 */
    if (!(find_among_b(z, a_31, 2))) return 0;
    z->bra = z->c; /* ], line 373 */
    {   int ret = slice_del(z); /* delete, line 374 */
        if (ret < 0) return ret;
    }
    z->ket = z->c; /* [, line 376 */
    z->bra = z->c; /* ], line 376 */
    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 128 && z->p[z->c - 1] != 187)) return 0; /* substring, line 376 */
    if (!(find_among_b(z, a_32, 8))) return 0;
    {   int ret = slice_from_s(z, 4, s_66); /* <-, line 377 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step2c(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 382 */
    if (z->c - 9 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 189)) return 0; /* substring, line 382 */
    if (!(find_among_b(z, a_33, 2))) return 0;
    z->bra = z->c; /* ], line 382 */
    {   int ret = slice_del(z); /* delete, line 383 */
        if (ret < 0) return ret;
    }
    z->ket = z->c; /* [, line 385 */
    z->bra = z->c; /* ], line 385 */
    if (!(find_among_b(z, a_34, 15))) return 0; /* substring, line 385 */
    {   int ret = slice_from_s(z, 6, s_67); /* <-, line 387 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step2d(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 392 */
    if (z->c - 5 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 189)) return 0; /* substring, line 392 */
    if (!(find_among_b(z, a_35, 2))) return 0;
    z->bra = z->c; /* ], line 392 */
    {   int ret = slice_del(z); /* delete, line 393 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 393 */
    z->ket = z->c; /* [, line 395 */
    z->bra = z->c; /* ], line 395 */
    if (!(find_among_b(z, a_36, 8))) return 0; /* substring, line 395 */
    if (z->c > z->lb) return 0; /* atlimit, line 395 */
    {   int ret = slice_from_s(z, 2, s_68); /* <-, line 396 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step3(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 401 */
    if (!(find_among_b(z, a_37, 3))) return 0; /* substring, line 401 */
    z->bra = z->c; /* ], line 401 */
    {   int ret = slice_del(z); /* delete, line 402 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 402 */
    z->ket = z->c; /* [, line 404 */
    z->bra = z->c; /* ], line 404 */
    if (in_grouping_b_U(z, g_v, 945, 969, 0)) return 0; /* grouping v, line 404 */
    {   int ret = slice_from_s(z, 2, s_69); /* <-, line 404 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step4(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 408 */
    if (!(find_among_b(z, a_38, 4))) return 0; /* substring, line 408 */
    z->bra = z->c; /* ], line 408 */
    {   int ret = slice_del(z); /* delete, line 409 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 409 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 411 */
        z->ket = z->c; /* [, line 411 */
        z->bra = z->c; /* ], line 411 */
        if (in_grouping_b_U(z, g_v, 945, 969, 0)) goto lab1; /* grouping v, line 411 */
        {   int ret = slice_from_s(z, 4, s_70); /* <-, line 411 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 412 */
    }
lab0:
    z->bra = z->c; /* ], line 412 */
    if (!(find_among_b(z, a_39, 36))) return 0; /* substring, line 412 */
    if (z->c > z->lb) return 0; /* atlimit, line 412 */
    {   int ret = slice_from_s(z, 4, s_71); /* <-, line 417 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5a(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 422 */
        if (!(eq_s_b(z, 10, s_72))) goto lab0; /* literal, line 422 */
        if (z->c > z->lb) goto lab0; /* atlimit, line 422 */
        {   int ret = slice_from_s(z, 8, s_73); /* <-, line 422 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 423 */
        z->ket = z->c; /* [, line 424 */
        if (z->c - 9 <= z->lb || z->p[z->c - 1] != 181) goto lab1; /* substring, line 424 */
        if (!(find_among_b(z, a_40, 5))) goto lab1;
        z->bra = z->c; /* ], line 424 */
        {   int ret = slice_del(z); /* delete, line 425 */
            if (ret < 0) return ret;
        }
        z->B[0] = 0; /* unset test1, line 425 */
    lab1:
        z->c = z->l - m2;
    }
    z->ket = z->c; /* [, line 428 */
    if (!(eq_s_b(z, 6, s_74))) return 0; /* literal, line 428 */
    z->bra = z->c; /* ], line 428 */
    {   int ret = slice_del(z); /* delete, line 429 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 430 */
    z->ket = z->c; /* [, line 431 */
    z->bra = z->c; /* ], line 431 */
    if (!(find_among_b(z, a_41, 12))) return 0; /* substring, line 431 */
    if (z->c > z->lb) return 0; /* atlimit, line 431 */
    {   int ret = slice_from_s(z, 4, s_75); /* <-, line 433 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5b(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 438 */
        z->ket = z->c; /* [, line 439 */
        if (z->c - 9 <= z->lb || z->p[z->c - 1] != 181) goto lab0; /* substring, line 439 */
        if (!(find_among_b(z, a_43, 11))) goto lab0;
        z->bra = z->c; /* ], line 439 */
        {   int ret = slice_del(z); /* delete, line 442 */
            if (ret < 0) return ret;
        }
        z->B[0] = 0; /* unset test1, line 443 */
        z->ket = z->c; /* [, line 444 */
        z->bra = z->c; /* ], line 444 */
        if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 129 && z->p[z->c - 1] != 131)) goto lab0; /* substring, line 444 */
        if (!(find_among_b(z, a_42, 2))) goto lab0;
        if (z->c > z->lb) goto lab0; /* atlimit, line 444 */
        {   int ret = slice_from_s(z, 8, s_76); /* <-, line 445 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    z->ket = z->c; /* [, line 450 */
    if (!(eq_s_b(z, 6, s_77))) return 0; /* literal, line 450 */
    z->bra = z->c; /* ], line 450 */
    {   int ret = slice_del(z); /* delete, line 451 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 452 */
    {   int m2 = z->l - z->c; (void)m2; /* or, line 453 */
        z->ket = z->c; /* [, line 453 */
        z->bra = z->c; /* ], line 453 */
        if (in_grouping_b_U(z, g_v2, 945, 969, 0)) goto lab2; /* grouping v2, line 453 */
        {   int ret = slice_from_s(z, 4, s_78); /* <-, line 453 */
            if (ret < 0) return ret;
        }
        goto lab1;
    lab2:
        z->c = z->l - m2;
        z->ket = z->c; /* [, line 454 */
    }
lab1:
    z->bra = z->c; /* ], line 454 */
    if (!(find_among_b(z, a_44, 95))) return 0; /* substring, line 454 */
    if (z->c > z->lb) return 0; /* atlimit, line 454 */
    {   int ret = slice_from_s(z, 4, s_79); /* <-, line 471 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5c(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 476 */
        z->ket = z->c; /* [, line 477 */
        if (z->c - 9 <= z->lb || z->p[z->c - 1] != 181) goto lab0; /* substring, line 477 */
        if (!(find_among_b(z, a_45, 1))) goto lab0;
        z->bra = z->c; /* ], line 477 */
        {   int ret = slice_del(z); /* delete, line 478 */
            if (ret < 0) return ret;
        }
        z->B[0] = 0; /* unset test1, line 478 */
    lab0:
        z->c = z->l - m1;
    }
    z->ket = z->c; /* [, line 481 */
    if (!(eq_s_b(z, 6, s_80))) return 0; /* literal, line 481 */
    z->bra = z->c; /* ], line 481 */
    {   int ret = slice_del(z); /* delete, line 482 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 483 */
    {   int m2 = z->l - z->c; (void)m2; /* or, line 484 */
        z->ket = z->c; /* [, line 484 */
        z->bra = z->c; /* ], line 484 */
        if (in_grouping_b_U(z, g_v2, 945, 969, 0)) goto lab2; /* grouping v2, line 484 */
        {   int ret = slice_from_s(z, 4, s_81); /* <-, line 484 */
            if (ret < 0) return ret;
        }
        goto lab1;
    lab2:
        z->c = z->l - m2;
        z->ket = z->c; /* [, line 485 */
        z->bra = z->c; /* ], line 485 */
        if (!(find_among_b(z, a_46, 31))) goto lab3; /* substring, line 485 */
        {   int ret = slice_from_s(z, 4, s_82); /* <-, line 489 */
            if (ret < 0) return ret;
        }
        goto lab1;
    lab3:
        z->c = z->l - m2;
        z->ket = z->c; /* [, line 491 */
    }
lab1:
    z->bra = z->c; /* ], line 491 */
    if (!(find_among_b(z, a_47, 25))) return 0; /* substring, line 491 */
    if (z->c > z->lb) return 0; /* atlimit, line 491 */
    {   int ret = slice_from_s(z, 4, s_83); /* <-, line 495 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5d(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 500 */
    if (z->c - 9 <= z->lb || z->p[z->c - 1] != 131) return 0; /* substring, line 500 */
    if (!(find_among_b(z, a_48, 2))) return 0;
    z->bra = z->c; /* ], line 500 */
    {   int ret = slice_del(z); /* delete, line 502 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 503 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 504 */
        z->ket = z->c; /* [, line 504 */
        z->bra = z->c; /* ], line 504 */
        if (!(eq_s_b(z, 6, s_84))) goto lab1; /* literal, line 504 */
        if (z->c > z->lb) goto lab1; /* atlimit, line 504 */
        {   int ret = slice_from_s(z, 6, s_85); /* <-, line 504 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 505 */
        z->bra = z->c; /* ], line 505 */
        if (!(eq_s_b(z, 6, s_86))) return 0; /* literal, line 505 */
        {   int ret = slice_from_s(z, 6, s_87); /* <-, line 505 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_step5e(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 511 */
    if (z->c - 11 <= z->lb || z->p[z->c - 1] != 181) return 0; /* substring, line 511 */
    if (!(find_among_b(z, a_49, 2))) return 0;
    z->bra = z->c; /* ], line 511 */
    {   int ret = slice_del(z); /* delete, line 513 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 514 */
    z->ket = z->c; /* [, line 515 */
    z->bra = z->c; /* ], line 515 */
    if (!(eq_s_b(z, 4, s_88))) return 0; /* literal, line 515 */
    if (z->c > z->lb) return 0; /* atlimit, line 515 */
    {   int ret = slice_from_s(z, 10, s_89); /* <-, line 515 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5f(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 521 */
        z->ket = z->c; /* [, line 522 */
        if (!(eq_s_b(z, 10, s_90))) goto lab0; /* literal, line 522 */
        z->bra = z->c; /* ], line 522 */
        {   int ret = slice_del(z); /* delete, line 523 */
            if (ret < 0) return ret;
        }
        z->B[0] = 0; /* unset test1, line 524 */
        z->ket = z->c; /* [, line 525 */
        z->bra = z->c; /* ], line 525 */
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 128 && z->p[z->c - 1] != 134)) goto lab0; /* substring, line 525 */
        if (!(find_among_b(z, a_50, 6))) goto lab0;
        if (z->c > z->lb) goto lab0; /* atlimit, line 525 */
        {   int ret = slice_from_s(z, 8, s_91); /* <-, line 526 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    z->ket = z->c; /* [, line 529 */
    if (!(eq_s_b(z, 8, s_92))) return 0; /* literal, line 529 */
    z->bra = z->c; /* ], line 529 */
    {   int ret = slice_del(z); /* delete, line 530 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 531 */
    z->ket = z->c; /* [, line 532 */
    z->bra = z->c; /* ], line 532 */
    if (!(find_among_b(z, a_51, 9))) return 0; /* substring, line 532 */
    if (z->c > z->lb) return 0; /* atlimit, line 532 */
    {   int ret = slice_from_s(z, 8, s_93); /* <-, line 534 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5g(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 539 */
        z->ket = z->c; /* [, line 540 */
        if (!(find_among_b(z, a_52, 3))) goto lab0; /* substring, line 540 */
        z->bra = z->c; /* ], line 540 */
        {   int ret = slice_del(z); /* delete, line 541 */
            if (ret < 0) return ret;
        }
        z->B[0] = 0; /* unset test1, line 541 */
    lab0:
        z->c = z->l - m1;
    }
    z->ket = z->c; /* [, line 544 */
    if (!(find_among_b(z, a_55, 3))) return 0; /* substring, line 544 */
    z->bra = z->c; /* ], line 544 */
    {   int ret = slice_del(z); /* delete, line 546 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 547 */
    {   int m2 = z->l - z->c; (void)m2; /* or, line 550 */
        z->ket = z->c; /* [, line 548 */
        z->bra = z->c; /* ], line 548 */
        if (!(find_among_b(z, a_53, 6))) goto lab2; /* substring, line 548 */
        {   int ret = slice_from_s(z, 4, s_94); /* <-, line 549 */
            if (ret < 0) return ret;
        }
        goto lab1;
    lab2:
        z->c = z->l - m2;
        z->ket = z->c; /* [, line 551 */
        z->bra = z->c; /* ], line 551 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 184) return 0; /* substring, line 551 */
        if (!(find_among_b(z, a_54, 5))) return 0;
        if (z->c > z->lb) return 0; /* atlimit, line 551 */
        {   int ret = slice_from_s(z, 4, s_95); /* <-, line 552 */
            if (ret < 0) return ret;
        }
    }
lab1:
    return 1;
}

static int r_step5h(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 559 */
    if (!(find_among_b(z, a_58, 3))) return 0; /* substring, line 559 */
    z->bra = z->c; /* ], line 559 */
    {   int ret = slice_del(z); /* delete, line 561 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 562 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 567 */
        z->ket = z->c; /* [, line 563 */
        z->bra = z->c; /* ], line 563 */
        if (!(find_among_b(z, a_56, 12))) goto lab1; /* substring, line 563 */
        {   int ret = slice_from_s(z, 6, s_96); /* <-, line 565 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 568 */
        z->bra = z->c; /* ], line 568 */
        if (!(find_among_b(z, a_57, 25))) return 0; /* substring, line 568 */
        if (z->c > z->lb) return 0; /* atlimit, line 568 */
        {   int ret = slice_from_s(z, 6, s_97); /* <-, line 572 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_step5i(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 579 */
    if (!(find_among_b(z, a_62, 3))) return 0; /* substring, line 579 */
    z->bra = z->c; /* ], line 579 */
    {   int ret = slice_del(z); /* delete, line 581 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 582 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 583 */
        z->ket = z->c; /* [, line 583 */
        z->bra = z->c; /* ], line 583 */
        if (!(eq_s_b(z, 8, s_98))) goto lab1; /* literal, line 583 */
        {   int ret = slice_from_s(z, 4, s_99); /* <-, line 583 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        {   int m2 = z->l - z->c; (void)m2; /* not, line 584 */
            z->ket = z->c; /* [, line 584 */
            if (z->c - 5 <= z->lb || (z->p[z->c - 1] != 134 && z->p[z->c - 1] != 135)) goto lab2; /* substring, line 584 */
            if (!(find_among_b(z, a_59, 2))) goto lab2;
            z->bra = z->c; /* ], line 584 */
            return 0;
        lab2:
            z->c = z->l - m2;
        }
        {   int m3 = z->l - z->c; (void)m3; /* or, line 588 */
            z->ket = z->c; /* [, line 585 */
            z->bra = z->c; /* ], line 585 */
            if (!(find_among_b(z, a_60, 10))) goto lab4; /* substring, line 585 */
            {   int ret = slice_from_s(z, 4, s_100); /* <-, line 587 */
                if (ret < 0) return ret;
            }
            goto lab3;
        lab4:
            z->c = z->l - m3;
            z->ket = z->c; /* [, line 589 */
            z->bra = z->c; /* ], line 589 */
            if (!(find_among_b(z, a_61, 44))) return 0; /* substring, line 589 */
            if (z->c > z->lb) return 0; /* atlimit, line 589 */
            {   int ret = slice_from_s(z, 4, s_101); /* <-, line 595 */
                if (ret < 0) return ret;
            }
        }
    lab3:
        ;
    }
lab0:
    return 1;
}

static int r_step5j(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 603 */
    if (!(find_among_b(z, a_63, 3))) return 0; /* substring, line 603 */
    z->bra = z->c; /* ], line 603 */
    {   int ret = slice_del(z); /* delete, line 604 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 604 */
    z->ket = z->c; /* [, line 606 */
    z->bra = z->c; /* ], line 606 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 189) return 0; /* substring, line 606 */
    if (!(find_among_b(z, a_64, 6))) return 0;
    if (z->c > z->lb) return 0; /* atlimit, line 606 */
    {   int ret = slice_from_s(z, 4, s_102); /* <-, line 607 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5k(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 612 */
    if (z->c - 7 <= z->lb || z->p[z->c - 1] != 181) return 0; /* substring, line 612 */
    if (!(find_among_b(z, a_65, 1))) return 0;
    z->bra = z->c; /* ], line 612 */
    {   int ret = slice_del(z); /* delete, line 613 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 613 */
    z->ket = z->c; /* [, line 615 */
    z->bra = z->c; /* ], line 615 */
    if (!(find_among_b(z, a_66, 10))) return 0; /* substring, line 615 */
    if (z->c > z->lb) return 0; /* atlimit, line 615 */
    {   int ret = slice_from_s(z, 6, s_103); /* <-, line 617 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5l(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 622 */
    if (z->c - 7 <= z->lb || z->p[z->c - 1] != 181) return 0; /* substring, line 622 */
    if (!(find_among_b(z, a_67, 3))) return 0;
    z->bra = z->c; /* ], line 622 */
    {   int ret = slice_del(z); /* delete, line 623 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 623 */
    z->ket = z->c; /* [, line 625 */
    z->bra = z->c; /* ], line 625 */
    if (!(find_among_b(z, a_68, 6))) return 0; /* substring, line 625 */
    if (z->c > z->lb) return 0; /* atlimit, line 625 */
    {   int ret = slice_from_s(z, 6, s_104); /* <-, line 626 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step5m(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 631 */
    if (z->c - 7 <= z->lb || z->p[z->c - 1] != 181) return 0; /* substring, line 631 */
    if (!(find_among_b(z, a_69, 3))) return 0;
    z->bra = z->c; /* ], line 631 */
    {   int ret = slice_del(z); /* delete, line 632 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset test1, line 632 */
    z->ket = z->c; /* [, line 634 */
    z->bra = z->c; /* ], line 634 */
    if (!(find_among_b(z, a_70, 7))) return 0; /* substring, line 634 */
    if (z->c > z->lb) return 0; /* atlimit, line 634 */
    {   int ret = slice_from_s(z, 6, s_105); /* <-, line 636 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step6(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 641 */
        z->ket = z->c; /* [, line 642 */
        if (!(find_among_b(z, a_71, 3))) goto lab0; /* substring, line 642 */
        z->bra = z->c; /* ], line 642 */
        {   int ret = slice_from_s(z, 4, s_106); /* <-, line 643 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    if (!(z->B[0])) return 0; /* Boolean test test1, line 646 */
    z->ket = z->c; /* [, line 647 */
    if (!(find_among_b(z, a_72, 84))) return 0; /* substring, line 647 */
    z->bra = z->c; /* ], line 647 */
    {   int ret = slice_del(z); /* delete, line 657 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_step7(struct SN_env * z) { /* backwardmode */
    z->ket = z->c; /* [, line 662 */
    if (z->c - 7 <= z->lb || (z->p[z->c - 1] != 129 && z->p[z->c - 1] != 132)) return 0; /* substring, line 662 */
    if (!(find_among_b(z, a_73, 8))) return 0;
    z->bra = z->c; /* ], line 662 */
    {   int ret = slice_del(z); /* delete, line 663 */
        if (ret < 0) return ret;
    }
    return 1;
}

extern int greek_UTF_8_stem(struct SN_env * z) { /* forwardmode */
    z->lb = z->c; z->c = z->l; /* backwards, line 669 */

    {   int m1 = z->l - z->c; (void)m1; /* do, line 670 */
        {   int ret = r_tolower(z); /* call tolower, line 670 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int ret = r_has_min_length(z); /* call has_min_length, line 671 */
        if (ret <= 0) return ret;
    }
    z->B[0] = 1; /* set test1, line 672 */
    {   int m2 = z->l - z->c; (void)m2; /* do, line 673 */
        {   int ret = r_step1(z); /* call step1, line 673 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 674 */
        {   int ret = r_steps1(z); /* call steps1, line 674 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 675 */
        {   int ret = r_steps2(z); /* call steps2, line 675 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 676 */
        {   int ret = r_steps3(z); /* call steps3, line 676 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 677 */
        {   int ret = r_steps4(z); /* call steps4, line 677 */
            if (ret == 0) goto lab5;
            if (ret < 0) return ret;
        }
    lab5:
        z->c = z->l - m6;
    }
    {   int m7 = z->l - z->c; (void)m7; /* do, line 678 */
        {   int ret = r_steps5(z); /* call steps5, line 678 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
        z->c = z->l - m7;
    }
    {   int m8 = z->l - z->c; (void)m8; /* do, line 679 */
        {   int ret = r_steps6(z); /* call steps6, line 679 */
            if (ret == 0) goto lab7;
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - m8;
    }
    {   int m9 = z->l - z->c; (void)m9; /* do, line 680 */
        {   int ret = r_steps7(z); /* call steps7, line 680 */
            if (ret == 0) goto lab8;
            if (ret < 0) return ret;
        }
    lab8:
        z->c = z->l - m9;
    }
    {   int m10 = z->l - z->c; (void)m10; /* do, line 681 */
        {   int ret = r_steps8(z); /* call steps8, line 681 */
            if (ret == 0) goto lab9;
            if (ret < 0) return ret;
        }
    lab9:
        z->c = z->l - m10;
    }
    {   int m11 = z->l - z->c; (void)m11; /* do, line 682 */
        {   int ret = r_steps9(z); /* call steps9, line 682 */
            if (ret == 0) goto lab10;
            if (ret < 0) return ret;
        }
    lab10:
        z->c = z->l - m11;
    }
    {   int m12 = z->l - z->c; (void)m12; /* do, line 683 */
        {   int ret = r_steps10(z); /* call steps10, line 683 */
            if (ret == 0) goto lab11;
            if (ret < 0) return ret;
        }
    lab11:
        z->c = z->l - m12;
    }
    {   int m13 = z->l - z->c; (void)m13; /* do, line 684 */
        {   int ret = r_step2a(z); /* call step2a, line 684 */
            if (ret == 0) goto lab12;
            if (ret < 0) return ret;
        }
    lab12:
        z->c = z->l - m13;
    }
    {   int m14 = z->l - z->c; (void)m14; /* do, line 685 */
        {   int ret = r_step2b(z); /* call step2b, line 685 */
            if (ret == 0) goto lab13;
            if (ret < 0) return ret;
        }
    lab13:
        z->c = z->l - m14;
    }
    {   int m15 = z->l - z->c; (void)m15; /* do, line 686 */
        {   int ret = r_step2c(z); /* call step2c, line 686 */
            if (ret == 0) goto lab14;
            if (ret < 0) return ret;
        }
    lab14:
        z->c = z->l - m15;
    }
    {   int m16 = z->l - z->c; (void)m16; /* do, line 687 */
        {   int ret = r_step2d(z); /* call step2d, line 687 */
            if (ret == 0) goto lab15;
            if (ret < 0) return ret;
        }
    lab15:
        z->c = z->l - m16;
    }
    {   int m17 = z->l - z->c; (void)m17; /* do, line 688 */
        {   int ret = r_step3(z); /* call step3, line 688 */
            if (ret == 0) goto lab16;
            if (ret < 0) return ret;
        }
    lab16:
        z->c = z->l - m17;
    }
    {   int m18 = z->l - z->c; (void)m18; /* do, line 689 */
        {   int ret = r_step4(z); /* call step4, line 689 */
            if (ret == 0) goto lab17;
            if (ret < 0) return ret;
        }
    lab17:
        z->c = z->l - m18;
    }
    {   int m19 = z->l - z->c; (void)m19; /* do, line 690 */
        {   int ret = r_step5a(z); /* call step5a, line 690 */
            if (ret == 0) goto lab18;
            if (ret < 0) return ret;
        }
    lab18:
        z->c = z->l - m19;
    }
    {   int m20 = z->l - z->c; (void)m20; /* do, line 691 */
        {   int ret = r_step5b(z); /* call step5b, line 691 */
            if (ret == 0) goto lab19;
            if (ret < 0) return ret;
        }
    lab19:
        z->c = z->l - m20;
    }
    {   int m21 = z->l - z->c; (void)m21; /* do, line 692 */
        {   int ret = r_step5c(z); /* call step5c, line 692 */
            if (ret == 0) goto lab20;
            if (ret < 0) return ret;
        }
    lab20:
        z->c = z->l - m21;
    }
    {   int m22 = z->l - z->c; (void)m22; /* do, line 693 */
        {   int ret = r_step5d(z); /* call step5d, line 693 */
            if (ret == 0) goto lab21;
            if (ret < 0) return ret;
        }
    lab21:
        z->c = z->l - m22;
    }
    {   int m23 = z->l - z->c; (void)m23; /* do, line 694 */
        {   int ret = r_step5e(z); /* call step5e, line 694 */
            if (ret == 0) goto lab22;
            if (ret < 0) return ret;
        }
    lab22:
        z->c = z->l - m23;
    }
    {   int m24 = z->l - z->c; (void)m24; /* do, line 695 */
        {   int ret = r_step5f(z); /* call step5f, line 695 */
            if (ret == 0) goto lab23;
            if (ret < 0) return ret;
        }
    lab23:
        z->c = z->l - m24;
    }
    {   int m25 = z->l - z->c; (void)m25; /* do, line 696 */
        {   int ret = r_step5g(z); /* call step5g, line 696 */
            if (ret == 0) goto lab24;
            if (ret < 0) return ret;
        }
    lab24:
        z->c = z->l - m25;
    }
    {   int m26 = z->l - z->c; (void)m26; /* do, line 697 */
        {   int ret = r_step5h(z); /* call step5h, line 697 */
            if (ret == 0) goto lab25;
            if (ret < 0) return ret;
        }
    lab25:
        z->c = z->l - m26;
    }
    {   int m27 = z->l - z->c; (void)m27; /* do, line 698 */
        {   int ret = r_step5j(z); /* call step5j, line 698 */
            if (ret == 0) goto lab26;
            if (ret < 0) return ret;
        }
    lab26:
        z->c = z->l - m27;
    }
    {   int m28 = z->l - z->c; (void)m28; /* do, line 699 */
        {   int ret = r_step5i(z); /* call step5i, line 699 */
            if (ret == 0) goto lab27;
            if (ret < 0) return ret;
        }
    lab27:
        z->c = z->l - m28;
    }
    {   int m29 = z->l - z->c; (void)m29; /* do, line 700 */
        {   int ret = r_step5k(z); /* call step5k, line 700 */
            if (ret == 0) goto lab28;
            if (ret < 0) return ret;
        }
    lab28:
        z->c = z->l - m29;
    }
    {   int m30 = z->l - z->c; (void)m30; /* do, line 701 */
        {   int ret = r_step5l(z); /* call step5l, line 701 */
            if (ret == 0) goto lab29;
            if (ret < 0) return ret;
        }
    lab29:
        z->c = z->l - m30;
    }
    {   int m31 = z->l - z->c; (void)m31; /* do, line 702 */
        {   int ret = r_step5m(z); /* call step5m, line 702 */
            if (ret == 0) goto lab30;
            if (ret < 0) return ret;
        }
    lab30:
        z->c = z->l - m31;
    }
    {   int m32 = z->l - z->c; (void)m32; /* do, line 703 */
        {   int ret = r_step6(z); /* call step6, line 703 */
            if (ret == 0) goto lab31;
            if (ret < 0) return ret;
        }
    lab31:
        z->c = z->l - m32;
    }
    {   int m33 = z->l - z->c; (void)m33; /* do, line 704 */
        {   int ret = r_step7(z); /* call step7, line 704 */
            if (ret == 0) goto lab32;
            if (ret < 0) return ret;
        }
    lab32:
        z->c = z->l - m33;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * greek_UTF_8_create_env(void) { return SN_create_env(0, 0, 1); }

extern void greek_UTF_8_close_env(struct SN_env * z) { SN_close_env(z, 0); }

