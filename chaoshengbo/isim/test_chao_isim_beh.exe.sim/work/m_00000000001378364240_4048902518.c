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
static const char *ng0 = "C:/ise/chaoshengbo/x7seg.v";
static int ng1[] = {0, 0};
static int ng2[] = {9, 0};
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



static void Cont_36_0(char *t0)
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

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1840);
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
    t14 = (t0 + 3668);
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
    t27 = (t0 + 3568);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(40, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB15;

}

static void Always_43_2(char *t0)
{
    char t13[8];
    char t28[8];
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
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    char *t29;
    char *t30;
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

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3584);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB16:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB19;

LAB18:    *((unsigned int *)t13) = 1;

LAB19:    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 18);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(48, ng0);
    t29 = (t0 + 600U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng4)));
    xsi_vlogtype_concat(t28, 18, 18, 2U, t29, 10, t30, 8);
    t31 = (t0 + 1656);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 18);
    goto LAB15;

LAB17:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(50, ng0);

LAB24:    xsi_set_current_line(51, ng0);
    t29 = (t0 + 1656);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = (t14 >> 8);
    *((unsigned int *)t28) = t15;
    t16 = *((unsigned int *)t33);
    t17 = (t16 >> 8);
    *((unsigned int *)t32) = t17;
    t18 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t18 & 15U);
    t19 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t19 & 15U);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    t36 = (t28 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB26;

LAB25:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t28) < *((unsigned int *)t34))
        goto LAB28;

LAB27:    *((unsigned int *)t35) = 1;

LAB28:    t39 = (t35 + 4);
    t20 = *((unsigned int *)t39);
    t23 = (~(t20));
    t24 = *((unsigned int *)t35);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(67, ng0);

LAB52:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 12);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t21 = (t13 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB54;

LAB53:    t22 = (t12 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t13) < *((unsigned int *)t12))
        goto LAB56;

LAB55:    *((unsigned int *)t28) = 1;

LAB56:    t30 = (t28 + 4);
    t15 = *((unsigned int *)t30);
    t16 = (~(t15));
    t17 = *((unsigned int *)t28);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(75, ng0);

LAB66:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 12);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = (t0 + 1656);
    t21 = (t0 + 1656);
    t22 = (t21 + 44U);
    t29 = *((char **)t22);
    t30 = ((char*)((ng8)));
    t31 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t28, t35, t40, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t32);
    t87 = (!(t15));
    t33 = (t35 + 4);
    t16 = *((unsigned int *)t33);
    t90 = (!(t16));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t17 = *((unsigned int *)t34);
    t94 = (!(t17));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = (t0 + 1656);
    t21 = (t0 + 1656);
    t22 = (t21 + 44U);
    t29 = *((char **)t22);
    t30 = ((char*)((ng10)));
    t31 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t28, t35, t40, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t32);
    t87 = (!(t15));
    t33 = (t35 + 4);
    t16 = *((unsigned int *)t33);
    t90 = (!(t16));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t17 = *((unsigned int *)t34);
    t94 = (!(t17));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 18, t4, 18, t5, 32);
    t11 = (t0 + 1656);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 18);

LAB60:
LAB32:    goto LAB23;

LAB26:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(52, ng0);

LAB33:    xsi_set_current_line(53, ng0);
    t41 = (t0 + 1656);
    t42 = (t41 + 36U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 4);
    t27 = *((unsigned int *)t43);
    t46 = (t27 >> 12);
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
        goto LAB35;

LAB34:    t54 = (t51 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t40) < *((unsigned int *)t51))
        goto LAB37;

LAB36:    *((unsigned int *)t52) = 1;

LAB37:    t56 = (t52 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(60, ng0);

LAB47:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 12);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = (t0 + 1656);
    t21 = (t0 + 1656);
    t22 = (t21 + 44U);
    t29 = *((char **)t22);
    t30 = ((char*)((ng8)));
    t31 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t28, t35, t40, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t32);
    t87 = (!(t15));
    t33 = (t35 + 4);
    t16 = *((unsigned int *)t33);
    t90 = (!(t16));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t17 = *((unsigned int *)t34);
    t94 = (!(t17));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 4, t13, 4, t12, 4);
    t21 = (t0 + 1656);
    t22 = (t0 + 1656);
    t29 = (t22 + 44U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng10)));
    t32 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t35, t40, t52, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t35 + 4);
    t15 = *((unsigned int *)t33);
    t87 = (!(t15));
    t34 = (t40 + 4);
    t16 = *((unsigned int *)t34);
    t90 = (!(t16));
    t91 = (t87 && t90);
    t36 = (t52 + 4);
    t17 = *((unsigned int *)t36);
    t94 = (!(t17));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 18, t4, 18, t5, 32);
    t11 = (t0 + 1656);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 18);

LAB41:    goto LAB32;

LAB35:    t55 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(54, ng0);

LAB42:    xsi_set_current_line(55, ng0);
    t63 = (t0 + 1656);
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
    t76 = (t0 + 1656);
    t80 = (t0 + 1656);
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
        goto LAB43;

LAB44:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 4, t13, 4, t12, 4);
    t21 = (t0 + 1656);
    t22 = (t0 + 1656);
    t29 = (t22 + 44U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng10)));
    t32 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t35, t40, t52, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t35 + 4);
    t15 = *((unsigned int *)t33);
    t87 = (!(t15));
    t34 = (t40 + 4);
    t16 = *((unsigned int *)t34);
    t90 = (!(t16));
    t91 = (t87 && t90);
    t36 = (t52 + 4);
    t17 = *((unsigned int *)t36);
    t94 = (!(t17));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 18, t4, 18, t5, 32);
    t11 = (t0 + 1656);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 18);
    goto LAB41;

LAB43:    t96 = *((unsigned int *)t79);
    t97 = (t96 + 0);
    t98 = *((unsigned int *)t77);
    t99 = *((unsigned int *)t78);
    t100 = (t98 - t99);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t76, t75, t97, *((unsigned int *)t78), t101);
    goto LAB44;

LAB45:    t18 = *((unsigned int *)t52);
    t97 = (t18 + 0);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t40);
    t100 = (t19 - t20);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t21, t28, t97, *((unsigned int *)t40), t101);
    goto LAB46;

LAB48:    t18 = *((unsigned int *)t40);
    t97 = (t18 + 0);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t35);
    t100 = (t19 - t20);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t12, t13, t97, *((unsigned int *)t35), t101);
    goto LAB49;

LAB50:    t18 = *((unsigned int *)t52);
    t97 = (t18 + 0);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t40);
    t100 = (t19 - t20);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t21, t28, t97, *((unsigned int *)t40), t101);
    goto LAB51;

LAB54:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB56;

LAB58:    xsi_set_current_line(69, ng0);

LAB61:    xsi_set_current_line(70, ng0);
    t31 = (t0 + 1656);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t35, 0, 8);
    t34 = (t35 + 4);
    t36 = (t33 + 4);
    t20 = *((unsigned int *)t33);
    t23 = (t20 >> 12);
    *((unsigned int *)t35) = t23;
    t24 = *((unsigned int *)t36);
    t25 = (t24 >> 12);
    *((unsigned int *)t34) = t25;
    t26 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t26 & 15U);
    t27 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t27 & 15U);
    t37 = ((char*)((ng7)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 4, t35, 4, t37, 4);
    t38 = (t0 + 1656);
    t39 = (t0 + 1656);
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
        goto LAB62;

LAB63:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = (t0 + 1656);
    t21 = (t0 + 1656);
    t22 = (t21 + 44U);
    t29 = *((char **)t22);
    t30 = ((char*)((ng10)));
    t31 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t28, t35, t40, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t32);
    t87 = (!(t15));
    t33 = (t35 + 4);
    t16 = *((unsigned int *)t33);
    t90 = (!(t16));
    t91 = (t87 && t90);
    t34 = (t40 + 4);
    t17 = *((unsigned int *)t34);
    t94 = (!(t17));
    t95 = (t91 && t94);
    if (t95 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 18, t4, 18, t5, 32);
    t11 = (t0 + 1656);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 18);
    goto LAB60;

LAB62:    t49 = *((unsigned int *)t75);
    t97 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t62);
    t100 = (t50 - t57);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t38, t40, t97, *((unsigned int *)t62), t101);
    goto LAB63;

LAB64:    t18 = *((unsigned int *)t40);
    t97 = (t18 + 0);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t35);
    t100 = (t19 - t20);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t12, t13, t97, *((unsigned int *)t35), t101);
    goto LAB65;

LAB67:    t18 = *((unsigned int *)t40);
    t97 = (t18 + 0);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t35);
    t100 = (t19 - t20);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t12, t13, t97, *((unsigned int *)t35), t101);
    goto LAB68;

LAB69:    t18 = *((unsigned int *)t40);
    t97 = (t18 + 0);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t35);
    t100 = (t19 - t20);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t12, t13, t97, *((unsigned int *)t35), t101);
    goto LAB70;

}

static void Always_83_3(char *t0)
{
    char t13[8];
    char t28[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(86, ng0);

LAB9:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(92, ng0);

LAB17:    xsi_set_current_line(93, ng0);
    t29 = (t0 + 1656);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 8);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 15U);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 15U);
    t40 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t40, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 12);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 16);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t12 = (t0 + 1472);
    t21 = (t0 + 1472);
    t22 = (t21 + 44U);
    t29 = *((char **)t22);
    t30 = ((char*)((ng3)));
    t31 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t28, t41, t42, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t32);
    t43 = (!(t15));
    t33 = (t41 + 4);
    t16 = *((unsigned int *)t33);
    t44 = (!(t16));
    t45 = (t43 && t44);
    t40 = (t42 + 4);
    t17 = *((unsigned int *)t40);
    t46 = (!(t17));
    t47 = (t45 && t46);
    if (t47 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    t4 = (t0 + 1472);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng11)));
    t21 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t13, t28, t41, ((int*)(t11)), 2, t12, 32, 1, t21, 32, 1);
    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t43 = (!(t6));
    t29 = (t28 + 4);
    t7 = *((unsigned int *)t29);
    t44 = (!(t7));
    t45 = (t43 && t44);
    t30 = (t41 + 4);
    t8 = *((unsigned int *)t30);
    t46 = (!(t8));
    t47 = (t45 && t46);
    if (t47 == 1)
        goto LAB20;

LAB21:    goto LAB16;

LAB18:    t18 = *((unsigned int *)t42);
    t48 = (t18 + 0);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t41);
    t49 = (t19 - t20);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t48, *((unsigned int *)t41), t50, 0LL);
    goto LAB19;

LAB20:    t9 = *((unsigned int *)t41);
    t48 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t28);
    t49 = (t10 - t14);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t48, *((unsigned int *)t28), t50, 0LL);
    goto LAB21;

}

static void Always_99_4(char *t0)
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

LAB0:    t1 = (t0 + 2940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3600);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 876U);
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
LAB12:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1748);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(101, ng0);
    t7 = (t0 + 1472);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 1748);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB14;

LAB8:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1380);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB14;

LAB10:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB14;

}

static void Always_106_5(char *t0)
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

LAB0:    t1 = (t0 + 3084U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3608);
    *((int *)t2) = 1;
    t3 = (t0 + 3112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 1748);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
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

LAB23:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(108, ng0);
    t9 = ((char*)((ng14)));
    t10 = (t0 + 1104);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    goto LAB28;

LAB8:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB10:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB12:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB14:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB16:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB18:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB20:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB22:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB24:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

}

static void Always_120_6(char *t0)
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

LAB0:    t1 = (t0 + 3228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3616);
    *((int *)t2) = 1;
    t3 = (t0 + 3256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t4 = ((char*)((ng24)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(123, ng0);
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

static void Always_125_7(char *t0)
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

LAB0:    t1 = (t0 + 3372U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 784U);
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

LAB11:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 20, t5, 32);
    t7 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 20, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(128, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 20, 0LL);
    goto LAB12;

}


extern void work_m_00000000001378364240_4048902518_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Always_37_1,(void *)Always_43_2,(void *)Always_83_3,(void *)Always_99_4,(void *)Always_106_5,(void *)Always_120_6,(void *)Always_125_7};
	xsi_register_didat("work_m_00000000001378364240_4048902518", "isim/test_chao_isim_beh.exe.sim/work/m_00000000001378364240_4048902518.didat");
	xsi_register_executes(pe);
}
