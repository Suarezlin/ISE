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
    work_m_00000000001880155756_0652201367_init();
    work_m_00000000001304194376_2866146993_init();
    work_m_00000000003143548096_4048902518_init();
    work_m_00000000001882113147_2621669902_init();
    work_m_00000000000033533218_3542296594_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000033533218_3542296594");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
