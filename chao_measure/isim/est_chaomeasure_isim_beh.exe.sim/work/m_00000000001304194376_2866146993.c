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
static const char *ng0 = "C:/ise/chao_measure/DistanceMeasure.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {65535U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {10U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {74U, 0U};
static int ng8[] = {3, 0};
static int ng9[] = {9, 0};
static int ng10[] = {7, 0};
static int ng11[] = {4, 0};
static int ng12[] = {11, 0};
static int ng13[] = {8, 0};
static int ng14[] = {15, 0};
static int ng15[] = {12, 0};
static unsigned int ng16[] = {3U, 0U};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3292);
    *((int *)t2) = 1;
    t3 = (t0 + 2260);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t4, 16, t5, 16);
    t6 = (t0 + 1196);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 16);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1196);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 16);
    goto LAB12;

}

static void Always_45_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 2376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3300);
    *((int *)t2) = 1;
    t3 = (t0 + 2404);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t8) = 1;

LAB16:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 920);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(50, ng0);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 920);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB19;

}

static void Always_52_3(char *t0)
{
    char t6[8];
    char t32[8];
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
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3308);
    *((int *)t2) = 1;
    t3 = (t0 + 2548);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(63, ng0);

LAB28:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(54, ng0);

LAB12:    xsi_set_current_line(55, ng0);
    t28 = (t0 + 1288);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng6)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 16, t31, 32);
    t33 = (t0 + 1288);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 16);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB14;

LAB13:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB15;

LAB16:    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB11;

LAB14:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(57, ng0);

LAB21:    xsi_set_current_line(58, ng0);
    t28 = (t0 + 1104);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    memset(t32, 0, 8);
    t31 = (t30 + 4);
    t14 = *((unsigned int *)t31);
    t15 = (~(t14));
    t16 = *((unsigned int *)t30);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t31) == 0)
        goto LAB22;

LAB24:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;

LAB25:    t34 = (t32 + 4);
    t35 = (t30 + 4);
    t19 = *((unsigned int *)t30);
    t20 = (~(t19));
    *((unsigned int *)t32) = t20;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB27;

LAB26:    t27 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t27 & 1U);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 & 1U);
    t37 = (t0 + 1104);
    xsi_vlogvar_assign_value(t37, t32, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB20;

LAB22:    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB27:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t35);
    *((unsigned int *)t32) = (t23 | t24);
    t25 = *((unsigned int *)t34);
    t26 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t25 | t26);
    goto LAB26;

}

static void Always_66_4(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char t33[8];
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
    char *t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3316);
    *((int *)t2) = 1;
    t3 = (t0 + 2692);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng6)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t6, 32, t8, 32);
    t21 = (t0 + 1380);
    t22 = (t0 + 1380);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t34 = ((char*)((ng8)));
    t35 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t29)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t31 + 4);
    t15 = *((unsigned int *)t36);
    t37 = (!(t15));
    t38 = (t32 + 4);
    t16 = *((unsigned int *)t38);
    t39 = (!(t16));
    t40 = (t37 && t39);
    t41 = (t33 + 4);
    t17 = *((unsigned int *)t41);
    t42 = (!(t17));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng9)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t47 = (t23 & t27);
    if (t47 != 0)
        goto LAB19;

LAB16:    if (t26 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t30) = 1;

LAB19:    t29 = (t30 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng9)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t47 = (t23 & t27);
    if (t47 != 0)
        goto LAB31;

LAB28:    if (t26 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t30) = 1;

LAB31:    t29 = (t30 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng9)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t47 = (t23 & t27);
    if (t47 != 0)
        goto LAB43;

LAB40:    if (t26 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t30) = 1;

LAB43:    t29 = (t30 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 12);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 12);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng9)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t47 = (t23 & t27);
    if (t47 != 0)
        goto LAB55;

LAB52:    if (t26 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t30) = 1;

LAB55:    t29 = (t30 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB56;

LAB57:
LAB58:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1380);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 16);
    goto LAB12;

LAB14:    t18 = *((unsigned int *)t33);
    t44 = (t18 + 0);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t45 = (t19 - t20);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t21, t30, t44, *((unsigned int *)t32), t46);
    goto LAB15;

LAB18:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(74, ng0);

LAB23:    xsi_set_current_line(75, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1380);
    t36 = (t0 + 1380);
    t38 = (t36 + 44U);
    t41 = *((char **)t38);
    t53 = ((char*)((ng8)));
    t54 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t41)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t31 + 4);
    t56 = *((unsigned int *)t55);
    t37 = (!(t56));
    t57 = (t32 + 4);
    t58 = *((unsigned int *)t57);
    t39 = (!(t58));
    t40 = (t37 && t39);
    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t42 = (!(t60));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng6)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t6, 32, t8, 32);
    t21 = (t0 + 1380);
    t22 = (t0 + 1380);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t34 = ((char*)((ng10)));
    t35 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t29)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t31 + 4);
    t15 = *((unsigned int *)t36);
    t37 = (!(t15));
    t38 = (t32 + 4);
    t16 = *((unsigned int *)t38);
    t39 = (!(t16));
    t40 = (t37 && t39);
    t41 = (t33 + 4);
    t17 = *((unsigned int *)t41);
    t42 = (!(t17));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB26;

LAB27:    goto LAB22;

LAB24:    t61 = *((unsigned int *)t33);
    t44 = (t61 + 0);
    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t32);
    t45 = (t62 - t63);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t35, t34, t44, *((unsigned int *)t32), t46);
    goto LAB25;

LAB26:    t18 = *((unsigned int *)t33);
    t44 = (t18 + 0);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t45 = (t19 - t20);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t21, t30, t44, *((unsigned int *)t32), t46);
    goto LAB27;

LAB30:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(79, ng0);

LAB35:    xsi_set_current_line(80, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1380);
    t36 = (t0 + 1380);
    t38 = (t36 + 44U);
    t41 = *((char **)t38);
    t53 = ((char*)((ng10)));
    t54 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t41)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t31 + 4);
    t56 = *((unsigned int *)t55);
    t37 = (!(t56));
    t57 = (t32 + 4);
    t58 = *((unsigned int *)t57);
    t39 = (!(t58));
    t40 = (t37 && t39);
    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t42 = (!(t60));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng6)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t6, 32, t8, 32);
    t21 = (t0 + 1380);
    t22 = (t0 + 1380);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t34 = ((char*)((ng12)));
    t35 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t29)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t31 + 4);
    t15 = *((unsigned int *)t36);
    t37 = (!(t15));
    t38 = (t32 + 4);
    t16 = *((unsigned int *)t38);
    t39 = (!(t16));
    t40 = (t37 && t39);
    t41 = (t33 + 4);
    t17 = *((unsigned int *)t41);
    t42 = (!(t17));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB38;

LAB39:    goto LAB34;

LAB36:    t61 = *((unsigned int *)t33);
    t44 = (t61 + 0);
    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t32);
    t45 = (t62 - t63);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t35, t34, t44, *((unsigned int *)t32), t46);
    goto LAB37;

LAB38:    t18 = *((unsigned int *)t33);
    t44 = (t18 + 0);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t45 = (t19 - t20);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t21, t30, t44, *((unsigned int *)t32), t46);
    goto LAB39;

LAB42:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(84, ng0);

LAB47:    xsi_set_current_line(85, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1380);
    t36 = (t0 + 1380);
    t38 = (t36 + 44U);
    t41 = *((char **)t38);
    t53 = ((char*)((ng12)));
    t54 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t41)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t31 + 4);
    t56 = *((unsigned int *)t55);
    t37 = (!(t56));
    t57 = (t32 + 4);
    t58 = *((unsigned int *)t57);
    t39 = (!(t58));
    t40 = (t37 && t39);
    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t42 = (!(t60));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 12);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 12);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t8 = ((char*)((ng6)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t6, 32, t8, 32);
    t21 = (t0 + 1380);
    t22 = (t0 + 1380);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t34 = ((char*)((ng14)));
    t35 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t29)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t31 + 4);
    t15 = *((unsigned int *)t36);
    t37 = (!(t15));
    t38 = (t32 + 4);
    t16 = *((unsigned int *)t38);
    t39 = (!(t16));
    t40 = (t37 && t39);
    t41 = (t33 + 4);
    t17 = *((unsigned int *)t41);
    t42 = (!(t17));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB50;

LAB51:    goto LAB46;

LAB48:    t61 = *((unsigned int *)t33);
    t44 = (t61 + 0);
    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t32);
    t45 = (t62 - t63);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t35, t34, t44, *((unsigned int *)t32), t46);
    goto LAB49;

LAB50:    t18 = *((unsigned int *)t33);
    t44 = (t18 + 0);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t45 = (t19 - t20);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t21, t30, t44, *((unsigned int *)t32), t46);
    goto LAB51;

LAB54:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(89, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1380);
    t36 = (t0 + 1380);
    t38 = (t36 + 44U);
    t41 = *((char **)t38);
    t53 = ((char*)((ng14)));
    t54 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t31, t32, t33, ((int*)(t41)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t31 + 4);
    t56 = *((unsigned int *)t55);
    t37 = (!(t56));
    t57 = (t32 + 4);
    t58 = *((unsigned int *)t57);
    t39 = (!(t58));
    t40 = (t37 && t39);
    t59 = (t33 + 4);
    t60 = *((unsigned int *)t59);
    t42 = (!(t60));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB59;

LAB60:    goto LAB58;

LAB59:    t61 = *((unsigned int *)t33);
    t44 = (t61 + 0);
    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t32);
    t45 = (t62 - t63);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t35, t34, t44, *((unsigned int *)t32), t46);
    goto LAB60;

}

static void Always_92_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3324);
    *((int *)t2) = 1;
    t3 = (t0 + 2836);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1380);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    goto LAB2;

}

static void Always_96_6(char *t0)
{
    char t10[8];
    char t12[8];
    char t22[8];
    char t24[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3332);
    *((int *)t2) = 1;
    t3 = (t0 + 2980);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1472);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t6, 16, t9, 16);
    t11 = ((char*)((ng16)));
    memset(t12, 0, 8);
    t13 = (t10 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB7;

LAB6:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t10) > *((unsigned int *)t11))
        goto LAB8;

LAB9:    t16 = (t0 + 1472);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = (t0 + 1564);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 16, t18, 16, t21, 16);
    t23 = ((char*)((ng16)));
    memset(t24, 0, 8);
    t25 = (t22 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB11:    t26 = (t23 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t22) > *((unsigned int *)t23))
        goto LAB13;

LAB14:    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t24);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = (t12 + 4);
    t33 = (t24 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB16;

LAB17:
LAB18:    t56 = (t28 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t28);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB12:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB16:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t12 + 4);
    t43 = (t24 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t12);
    t47 = (t46 & t45);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t51 = (t50 & t49);
    t52 = (~(t47));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    goto LAB18;

LAB19:    xsi_set_current_line(99, ng0);
    t62 = (t0 + 1472);
    t63 = (t62 + 36U);
    t64 = *((char **)t63);
    t65 = (t0 + 1564);
    xsi_vlogvar_assign_value(t65, t64, 0, 0, 16);
    goto LAB21;

}

static void Always_101_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3340);
    *((int *)t2) = 1;
    t3 = (t0 + 3124);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    goto LAB2;

}


extern void work_m_00000000001304194376_2866146993_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_38_1,(void *)Always_45_2,(void *)Always_52_3,(void *)Always_66_4,(void *)Always_92_5,(void *)Always_96_6,(void *)Always_101_7};
	xsi_register_didat("work_m_00000000001304194376_2866146993", "isim/est_chaomeasure_isim_beh.exe.sim/work/m_00000000001304194376_2866146993.didat");
	xsi_register_executes(pe);
}
