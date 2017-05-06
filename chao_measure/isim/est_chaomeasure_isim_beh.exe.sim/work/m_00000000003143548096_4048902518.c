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
static const char *ng0 = "C:/ise/chao_measure/x7seg.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {63U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {91U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {79U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {102U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {109U, 0U};
static unsigned int ng13[] = {125U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {39U, 0U};
static unsigned int ng16[] = {8U, 0U};
static unsigned int ng17[] = {127U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {111U, 0U};
static unsigned int ng20[] = {10U, 0U};
static unsigned int ng21[] = {119U, 0U};
static unsigned int ng22[] = {11U, 0U};
static unsigned int ng23[] = {124U, 0U};
static unsigned int ng24[] = {12U, 0U};
static unsigned int ng25[] = {88U, 0U};
static unsigned int ng26[] = {13U, 0U};
static unsigned int ng27[] = {94U, 0U};
static unsigned int ng28[] = {14U, 0U};
static unsigned int ng29[] = {121U, 0U};
static unsigned int ng30[] = {15U, 0U};
static unsigned int ng31[] = {113U, 0U};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t18[8];
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
    unsigned int t19;
    unsigned int t20;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1640);
    *((int *)t2) = 1;
    t3 = (t0 + 1472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 692U);
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

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng26)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng30)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t18, 0, 8);
    t6 = (t18 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t18) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB41;

LAB40:    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 & 255U);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 & 255U);
    t14 = (t0 + 920);
    xsi_vlogvar_assign_value(t14, t18, 0, 0, 8);
    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 920);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    goto LAB39;

LAB9:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB11:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB13:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB15:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB17:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB19:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB21:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB23:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB25:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB27:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB29:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB31:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB33:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB35:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB37:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB41:    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t18) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB40;

}


extern void work_m_00000000003143548096_4048902518_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000003143548096_4048902518", "isim/est_chaomeasure_isim_beh.exe.sim/work/m_00000000003143548096_4048902518.didat");
	xsi_register_executes(pe);
}
