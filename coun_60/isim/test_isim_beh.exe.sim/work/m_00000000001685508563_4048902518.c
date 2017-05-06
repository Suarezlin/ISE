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
static const char *ng0 = "C:/ise/coun_60/x7seg.v";
static int ng1[] = {9, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {8, 0};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {15, 0};
static int ng9[] = {12, 0};
static int ng10[] = {11, 0};
static int ng11[] = {3, 0};
static int ng12[] = {2, 0};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {1U, 0U};
static unsigned int ng15[] = {79U, 0U};
static unsigned int ng16[] = {18U, 0U};
static unsigned int ng17[] = {6U, 0U};
static int ng18[] = {4, 0};
static unsigned int ng19[] = {76U, 0U};
static unsigned int ng20[] = {36U, 0U};
static int ng21[] = {6, 0};
static unsigned int ng22[] = {32U, 0U};
static int ng23[] = {7, 0};
static unsigned int ng24[] = {15U, 0U};
static unsigned int ng25[] = {4U, 0U};



static void Cont_35_0(char *t0)
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

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1748);
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
    t14 = (t0 + 3576);
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
    t27 = (t0 + 3476);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_36_1(char *t0)
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

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3484);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Always_41_2(char *t0)
{
    char t8[8];
    char t30[8];
    char t35[8];
    char t40[8];
    char t52[8];
    char t62[8];
    char t75[8];
    char t77[8];
    char t78[8];
    char t79[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t76;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    int t87;
    char *t88;
    unsigned int t89;
    int t90;
    int t91;
    char *t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;

LAB0:    t1 = (t0 + 2560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3492);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1472);
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

LAB11:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB14;

LAB13:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB16:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t31 = (t0 + 600U);
    t32 = *((char **)t31);
    t31 = ((char*)((ng4)));
    xsi_vlogtype_concat(t30, 18, 18, 2U, t31, 10, t32, 8);
    t33 = (t0 + 1564);
    xsi_vlogvar_assign_value(t33, t30, 0, 0, 18);
    goto LAB12;

LAB14:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(46, ng0);

LAB21:    xsi_set_current_line(47, ng0);
    t23 = (t0 + 1564);
    t24 = (t23 + 36U);
    t31 = *((char **)t24);
    memset(t30, 0, 8);
    t32 = (t30 + 4);
    t33 = (t31 + 4);
    t16 = *((unsigned int *)t31);
    t17 = (t16 >> 8);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t33);
    t19 = (t18 >> 8);
    *((unsigned int *)t32) = t19;
    t20 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t20 & 15U);
    t21 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t21 & 15U);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    t36 = (t30 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB23;

LAB22:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t30) < *((unsigned int *)t34))
        goto LAB25;

LAB24:    *((unsigned int *)t35) = 1;

LAB25:    t39 = (t35 + 4);
    t22 = *((unsigned int *)t39);
    t25 = (~(t22));
    t26 = *((unsigned int *)t35);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(63, ng0);

LAB49:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 12);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = ((char*)((ng6)));
    memset(t30, 0, 8);
    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB51;

LAB50:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t8) < *((unsigned int *)t7))
        goto LAB53;

LAB52:    *((unsigned int *)t30) = 1;

LAB53:    t24 = (t30 + 4);
    t17 = *((unsigned int *)t24);
    t18 = (~(t17));
    t19 = *((unsigned int *)t30);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(71, ng0);

LAB63:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 12);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 1564);
    t9 = (t0 + 1564);
    t10 = (t9 + 44U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng8)));
    t31 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t30, t35, t40, ((int*)(t23)), 2, t24, 32, 1, t31, 32, 1);
    t32 = (t30 + 4);
    t17 = *((unsigned int *)t32);
    t87 = (!(t17));
    t33 = (t35 + 4);
    t18 = *((unsigned int *)t33);
    t90 = (!(t18));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t19 = *((unsigned int *)t34);
    t94 = (!(t19));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 1564);
    t9 = (t0 + 1564);
    t10 = (t9 + 44U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng10)));
    t31 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t30, t35, t40, ((int*)(t23)), 2, t24, 32, 1, t31, 32, 1);
    t32 = (t30 + 4);
    t17 = *((unsigned int *)t32);
    t87 = (!(t17));
    t33 = (t35 + 4);
    t18 = *((unsigned int *)t33);
    t90 = (!(t18));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t19 = *((unsigned int *)t34);
    t94 = (!(t19));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 18, t4, 18, t5, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 18);

LAB57:
LAB29:    goto LAB20;

LAB23:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(48, ng0);

LAB30:    xsi_set_current_line(49, ng0);
    t41 = (t0 + 1564);
    t42 = (t41 + 36U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 4);
    t29 = *((unsigned int *)t43);
    t46 = (t29 >> 12);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 12);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t49 & 15U);
    t50 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t50 & 15U);
    t51 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t53 = (t40 + 4);
    if (*((unsigned int *)t53) != 0)
        goto LAB32;

LAB31:    t54 = (t51 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t40) < *((unsigned int *)t51))
        goto LAB34;

LAB33:    *((unsigned int *)t52) = 1;

LAB34:    t56 = (t52 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(56, ng0);

LAB44:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 12);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 1564);
    t9 = (t0 + 1564);
    t10 = (t9 + 44U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng8)));
    t31 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t30, t35, t40, ((int*)(t23)), 2, t24, 32, 1, t31, 32, 1);
    t32 = (t30 + 4);
    t17 = *((unsigned int *)t32);
    t87 = (!(t17));
    t33 = (t35 + 4);
    t18 = *((unsigned int *)t33);
    t90 = (!(t18));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t19 = *((unsigned int *)t34);
    t94 = (!(t19));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = ((char*)((ng7)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 4, t8, 4, t7, 4);
    t9 = (t0 + 1564);
    t10 = (t0 + 1564);
    t23 = (t10 + 44U);
    t24 = *((char **)t23);
    t31 = ((char*)((ng10)));
    t32 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t35, t40, t52, ((int*)(t24)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t35 + 4);
    t17 = *((unsigned int *)t33);
    t87 = (!(t17));
    t34 = (t40 + 4);
    t18 = *((unsigned int *)t34);
    t90 = (!(t18));
    t91 = (t87 && t90);
    t36 = (t52 + 4);
    t19 = *((unsigned int *)t36);
    t94 = (!(t19));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 18, t4, 18, t5, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 18);

LAB38:    goto LAB29;

LAB32:    t55 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(50, ng0);

LAB39:    xsi_set_current_line(51, ng0);
    t63 = (t0 + 1564);
    t64 = (t63 + 36U);
    t65 = *((char **)t64);
    memset(t62, 0, 8);
    t66 = (t62 + 4);
    t67 = (t65 + 4);
    t68 = *((unsigned int *)t65);
    t69 = (t68 >> 12);
    *((unsigned int *)t62) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 12);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t72 & 15U);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 & 15U);
    t74 = ((char*)((ng7)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_add(t75, 4, t62, 4, t74, 4);
    t76 = (t0 + 1564);
    t80 = (t0 + 1564);
    t81 = (t80 + 44U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng8)));
    t84 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t77, t78, t79, ((int*)(t82)), 2, t83, 32, 1, t84, 32, 1);
    t85 = (t77 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (!(t86));
    t88 = (t78 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t87 && t90);
    t92 = (t79 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (!(t93));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = ((char*)((ng7)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 4, t8, 4, t7, 4);
    t9 = (t0 + 1564);
    t10 = (t0 + 1564);
    t23 = (t10 + 44U);
    t24 = *((char **)t23);
    t31 = ((char*)((ng10)));
    t32 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t35, t40, t52, ((int*)(t24)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t35 + 4);
    t17 = *((unsigned int *)t33);
    t87 = (!(t17));
    t34 = (t40 + 4);
    t18 = *((unsigned int *)t34);
    t90 = (!(t18));
    t91 = (t87 && t90);
    t36 = (t52 + 4);
    t19 = *((unsigned int *)t36);
    t94 = (!(t19));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 18, t4, 18, t5, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 18);
    goto LAB38;

LAB40:    t96 = *((unsigned int *)t79);
    t97 = (t96 + 0);
    t98 = *((unsigned int *)t77);
    t99 = *((unsigned int *)t78);
    t100 = (t98 - t99);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t76, t75, t97, *((unsigned int *)t78), t101);
    goto LAB41;

LAB42:    t20 = *((unsigned int *)t52);
    t97 = (t20 + 0);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t40);
    t100 = (t21 - t22);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t9, t30, t97, *((unsigned int *)t40), t101);
    goto LAB43;

LAB45:    t20 = *((unsigned int *)t40);
    t97 = (t20 + 0);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t35);
    t100 = (t21 - t22);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t7, t8, t97, *((unsigned int *)t35), t101);
    goto LAB46;

LAB47:    t20 = *((unsigned int *)t52);
    t97 = (t20 + 0);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t40);
    t100 = (t21 - t22);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t9, t30, t97, *((unsigned int *)t40), t101);
    goto LAB48;

LAB51:    t23 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(65, ng0);

LAB58:    xsi_set_current_line(66, ng0);
    t31 = (t0 + 1564);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t35, 0, 8);
    t34 = (t35 + 4);
    t36 = (t33 + 4);
    t22 = *((unsigned int *)t33);
    t25 = (t22 >> 12);
    *((unsigned int *)t35) = t25;
    t26 = *((unsigned int *)t36);
    t27 = (t26 >> 12);
    *((unsigned int *)t34) = t27;
    t28 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t28 & 15U);
    t29 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t29 & 15U);
    t37 = ((char*)((ng7)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 4, t35, 4, t37, 4);
    t38 = (t0 + 1564);
    t39 = (t0 + 1564);
    t41 = (t39 + 44U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng8)));
    t44 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t52, t62, t75, ((int*)(t42)), 2, t43, 32, 1, t44, 32, 1);
    t45 = (t52 + 4);
    t46 = *((unsigned int *)t45);
    t87 = (!(t46));
    t51 = (t62 + 4);
    t47 = *((unsigned int *)t51);
    t90 = (!(t47));
    t91 = (t87 && t90);
    t53 = (t75 + 4);
    t48 = *((unsigned int *)t53);
    t94 = (!(t48));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 1564);
    t9 = (t0 + 1564);
    t10 = (t9 + 44U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng10)));
    t31 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t30, t35, t40, ((int*)(t23)), 2, t24, 32, 1, t31, 32, 1);
    t32 = (t30 + 4);
    t17 = *((unsigned int *)t32);
    t87 = (!(t17));
    t33 = (t35 + 4);
    t18 = *((unsigned int *)t33);
    t90 = (!(t18));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t19 = *((unsigned int *)t34);
    t94 = (!(t19));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 18, t4, 18, t5, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 18);
    goto LAB57;

LAB59:    t49 = *((unsigned int *)t75);
    t97 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t62);
    t100 = (t50 - t57);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t38, t40, t97, *((unsigned int *)t62), t101);
    goto LAB60;

LAB61:    t20 = *((unsigned int *)t40);
    t97 = (t20 + 0);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t35);
    t100 = (t21 - t22);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t7, t8, t97, *((unsigned int *)t35), t101);
    goto LAB62;

LAB64:    t20 = *((unsigned int *)t40);
    t97 = (t20 + 0);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t35);
    t100 = (t21 - t22);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t7, t8, t97, *((unsigned int *)t35), t101);
    goto LAB65;

LAB66:    t20 = *((unsigned int *)t40);
    t97 = (t20 + 0);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t35);
    t100 = (t21 - t22);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t7, t8, t97, *((unsigned int *)t35), t101);
    goto LAB67;

}

static void Always_79_3(char *t0)
{
    char t8[8];
    char t30[8];
    char t43[8];
    char t44[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 2704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3500);
    *((int *)t2) = 1;
    t3 = (t0 + 2732);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
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
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(82, ng0);

LAB13:    xsi_set_current_line(83, ng0);
    t31 = (t0 + 1564);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 8);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 8);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 15U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 15U);
    t42 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t42, t30, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 12);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 16);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t7 = (t0 + 1380);
    t9 = (t0 + 1380);
    t10 = (t9 + 44U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng3)));
    t31 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t30, t43, t44, ((int*)(t23)), 2, t24, 32, 1, t31, 32, 1);
    t32 = (t30 + 4);
    t17 = *((unsigned int *)t32);
    t45 = (!(t17));
    t33 = (t43 + 4);
    t18 = *((unsigned int *)t33);
    t46 = (!(t18));
    t47 = (t45 && t46);
    t34 = (t44 + 4);
    t19 = *((unsigned int *)t34);
    t48 = (!(t19));
    t49 = (t47 && t48);
    if (t49 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    t4 = (t0 + 1380);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    t9 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t8, t30, t43, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t45 = (!(t11));
    t23 = (t30 + 4);
    t12 = *((unsigned int *)t23);
    t46 = (!(t12));
    t47 = (t45 && t46);
    t24 = (t43 + 4);
    t13 = *((unsigned int *)t24);
    t48 = (!(t13));
    t49 = (t47 && t48);
    if (t49 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    t20 = *((unsigned int *)t44);
    t50 = (t20 + 0);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t43);
    t51 = (t21 - t22);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t7, t8, t50, *((unsigned int *)t43), t52, 0LL);
    goto LAB15;

LAB16:    t14 = *((unsigned int *)t43);
    t50 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t30);
    t51 = (t15 - t16);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t50, *((unsigned int *)t30), t52, 0LL);
    goto LAB17;

}

static void Always_89_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3508);
    *((int *)t2) = 1;
    t3 = (t0 + 2876);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t7 = (t0 + 1380);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 1656);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB14;

LAB8:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB14;

LAB10:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1196);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB14;

}

static void Always_96_5(char *t0)
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

LAB0:    t1 = (t0 + 2992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3516);
    *((int *)t2) = 1;
    t3 = (t0 + 3020);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 1656);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(98, ng0);
    t9 = ((char*)((ng14)));
    t10 = (t0 + 1012);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    goto LAB28;

LAB8:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB10:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB12:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB14:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB16:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB18:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB20:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB22:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB24:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

}

static void Always_110_6(char *t0)
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

LAB0:    t1 = (t0 + 3136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3524);
    *((int *)t2) = 1;
    t3 = (t0 + 3164);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng24)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = (t0 + 784U);
    t9 = *((char **)t8);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t9, 2, 2);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB10;

LAB11:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB9;

LAB10:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB11;

}

static void Always_117_7(char *t0)
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

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3532);
    *((int *)t2) = 1;
    t3 = (t0 + 3308);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 1748);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 20, t7, 32);
    t9 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 20, 0LL);
    goto LAB2;

}


extern void work_m_00000000001685508563_4048902518_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Always_36_1,(void *)Always_41_2,(void *)Always_79_3,(void *)Always_89_4,(void *)Always_96_5,(void *)Always_110_6,(void *)Always_117_7};
	xsi_register_didat("work_m_00000000001685508563_4048902518", "isim/test_isim_beh.exe.sim/work/m_00000000001685508563_4048902518.didat");
	xsi_register_executes(pe);
}
