/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/ise/x7seg/x7seg.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {15, 0};
static int ng4[] = {8, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {3U, 0U};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {5, 0};
static unsigned int ng14[] = {5U, 0U};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {6U, 0U};
static int ng17[] = {7, 0};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {8U, 0U};
static int ng20[] = {9, 0};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {10U, 0U};
static unsigned int ng23[] = {16U, 0U};
static unsigned int ng24[] = {11U, 0U};
static unsigned int ng25[] = {17U, 0U};
static unsigned int ng26[] = {12U, 0U};
static unsigned int ng27[] = {18U, 0U};
static unsigned int ng28[] = {13U, 0U};
static unsigned int ng29[] = {19U, 0U};
static unsigned int ng30[] = {14U, 0U};
static unsigned int ng31[] = {20U, 0U};
static unsigned int ng32[] = {15U, 0U};
static unsigned int ng33[] = {21U, 0U};
static unsigned int ng34[] = {79U, 0U};
static unsigned int ng35[] = {76U, 0U};
static unsigned int ng36[] = {36U, 0U};
static unsigned int ng37[] = {32U, 0U};
static unsigned int ng38[] = {96U, 0U};
static unsigned int ng39[] = {49U, 0U};
static unsigned int ng40[] = {66U, 0U};
static unsigned int ng41[] = {48U, 0U};
static unsigned int ng42[] = {56U, 0U};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1472);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 18);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 18);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 3148);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 1);
    t27 = (t0 + 3056);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t4[8];
    char t18[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3064);
    *((int *)t2) = 1;
    t3 = (t0 + 2168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 4);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB5:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng26)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng30)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng32)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng3)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t7)), 2, t14, 32, 1, t16, 32, 1);
    t17 = (t18 + 4);
    t8 = *((unsigned int *)t17);
    t15 = (!(t8));
    t21 = (t19 + 4);
    t9 = *((unsigned int *)t21);
    t28 = (!(t9));
    t31 = (t15 && t28);
    t22 = (t20 + 4);
    t10 = *((unsigned int *)t22);
    t32 = (!(t10));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB73;

LAB74:
LAB40:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1288);
    t21 = (t0 + 1288);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng3)));
    t25 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB41;

LAB42:    goto LAB40;

LAB8:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB43;

LAB44:    goto LAB40;

LAB10:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB45;

LAB46:    goto LAB40;

LAB12:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB47;

LAB48:    goto LAB40;

LAB14:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB49;

LAB50:    goto LAB40;

LAB16:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB51;

LAB52:    goto LAB40;

LAB18:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB53;

LAB54:    goto LAB40;

LAB20:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB55;

LAB56:    goto LAB40;

LAB22:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB57;

LAB58:    goto LAB40;

LAB24:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB59;

LAB60:    goto LAB40;

LAB26:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB61;

LAB62:    goto LAB40;

LAB28:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB63;

LAB64:    goto LAB40;

LAB30:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB65;

LAB66:    goto LAB40;

LAB32:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB67;

LAB68:    goto LAB40;

LAB34:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB69;

LAB70:    goto LAB40;

LAB36:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng33)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB71;

LAB72:    goto LAB40;

LAB41:    t37 = *((unsigned int *)t20);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t18);
    t40 = *((unsigned int *)t19);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t17, t16, t38, *((unsigned int *)t19), t42);
    goto LAB42;

LAB43:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB44;

LAB45:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB46;

LAB47:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB48;

LAB49:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB50;

LAB51:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB52;

LAB53:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB54;

LAB55:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB56;

LAB57:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB58;

LAB59:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB60;

LAB61:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB62;

LAB63:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB64;

LAB65:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB66;

LAB67:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB68;

LAB69:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB70;

LAB71:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB72;

LAB73:    t11 = *((unsigned int *)t20);
    t36 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t38 = (t12 - t13);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t3, t2, t36, *((unsigned int *)t19), t41);
    goto LAB74;

}

static void Always_53_2(char *t0)
{
    char t4[8];
    char t18[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3072);
    *((int *)t2) = 1;
    t3 = (t0 + 2312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB5:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng26)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng30)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng32)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng17)));
    t16 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t7)), 2, t14, 32, 1, t16, 32, 1);
    t17 = (t18 + 4);
    t8 = *((unsigned int *)t17);
    t15 = (!(t8));
    t21 = (t19 + 4);
    t9 = *((unsigned int *)t21);
    t28 = (!(t9));
    t31 = (t15 && t28);
    t22 = (t20 + 4);
    t10 = *((unsigned int *)t22);
    t32 = (!(t10));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB73;

LAB74:
LAB40:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1288);
    t21 = (t0 + 1288);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng17)));
    t25 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB41;

LAB42:    goto LAB40;

LAB8:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB43;

LAB44:    goto LAB40;

LAB10:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB45;

LAB46:    goto LAB40;

LAB12:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB47;

LAB48:    goto LAB40;

LAB14:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB49;

LAB50:    goto LAB40;

LAB16:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB51;

LAB52:    goto LAB40;

LAB18:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB53;

LAB54:    goto LAB40;

LAB20:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB55;

LAB56:    goto LAB40;

LAB22:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB57;

LAB58:    goto LAB40;

LAB24:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB59;

LAB60:    goto LAB40;

LAB26:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB61;

LAB62:    goto LAB40;

LAB28:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB63;

LAB64:    goto LAB40;

LAB30:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB65;

LAB66:    goto LAB40;

LAB32:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB67;

LAB68:    goto LAB40;

LAB34:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB69;

LAB70:    goto LAB40;

LAB36:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng33)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng17)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t21 = (t18 + 4);
    t8 = *((unsigned int *)t21);
    t28 = (!(t8));
    t22 = (t19 + 4);
    t9 = *((unsigned int *)t22);
    t31 = (!(t9));
    t32 = (t28 && t31);
    t23 = (t20 + 4);
    t10 = *((unsigned int *)t23);
    t35 = (!(t10));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB71;

LAB72:    goto LAB40;

LAB41:    t37 = *((unsigned int *)t20);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t18);
    t40 = *((unsigned int *)t19);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t17, t16, t38, *((unsigned int *)t19), t42);
    goto LAB42;

LAB43:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB44;

LAB45:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB46;

LAB47:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB48;

LAB49:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB50;

LAB51:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB52;

LAB53:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB54;

LAB55:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB56;

LAB57:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB58;

LAB59:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB60;

LAB61:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB62;

LAB63:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB64;

LAB65:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB66;

LAB67:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB68;

LAB69:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB70;

LAB71:    t11 = *((unsigned int *)t20);
    t38 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t41 = (t12 - t13);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t5, t3, t38, *((unsigned int *)t19), t42);
    goto LAB72;

LAB73:    t11 = *((unsigned int *)t20);
    t36 = (t11 + 0);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t19);
    t38 = (t12 - t13);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t3, t2, t36, *((unsigned int *)t19), t41);
    goto LAB74;

}

static void Always_73_3(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 2428U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3080);
    *((int *)t2) = 1;
    t3 = (t0 + 2456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 15U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t10 = (t0 + 1380);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 4);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(75, ng0);
    t8 = (t0 + 1288);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 12);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 12);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 15U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 15U);
    t19 = (t0 + 1380);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 4);
    goto LAB16;

LAB8:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 8);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 15U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 15U);
    t11 = (t0 + 1380);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);
    goto LAB16;

LAB10:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 4);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 4);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 15U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 15U);
    t11 = (t0 + 1380);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);
    goto LAB16;

LAB12:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 0);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 15U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 15U);
    t11 = (t0 + 1380);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);
    goto LAB16;

}

static void Always_81_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3088);
    *((int *)t2) = 1;
    t3 = (t0 + 2600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 1380);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB40:    goto LAB2;

LAB6:    xsi_set_current_line(83, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 1104);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    goto LAB40;

LAB8:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB10:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB12:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB14:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB16:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB18:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB20:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB22:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB24:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB26:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB28:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB30:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB32:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB34:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng41)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

LAB36:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB40;

}

static void Always_101_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    int t11;

LAB0:    t1 = (t0 + 2716U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3096);
    *((int *)t2) = 1;
    t3 = (t0 + 2744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng32)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    t4 = (t0 + 1196);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = (t0 + 876U);
    t9 = *((char **)t8);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t9, 2, 2);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB7;

}

static void Always_106_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2860U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3104);
    *((int *)t2) = 1;
    t3 = (t0 + 2888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 20, t5, 32);
    t7 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 20, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(109, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 20, 0LL);
    goto LAB12;

}


extern void work_m_00000000002893059670_4048902518_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Always_33_1,(void *)Always_53_2,(void *)Always_73_3,(void *)Always_81_4,(void *)Always_101_5,(void *)Always_106_6};
	xsi_register_didat("work_m_00000000002893059670_4048902518", "isim/test_x7seg_isim_beh.exe.sim/work/m_00000000002893059670_4048902518.didat");
	xsi_register_executes(pe);
}
