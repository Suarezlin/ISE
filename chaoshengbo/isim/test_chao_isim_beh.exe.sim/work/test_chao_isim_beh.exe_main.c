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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004145860984_3526952416_init();
    work_m_00000000002570150248_0366319986_init();
    work_m_00000000001378364240_4048902518_init();
    work_m_00000000003821257283_2682542880_init();
    work_m_00000000000834959575_2687218556_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000834959575_2687218556");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
