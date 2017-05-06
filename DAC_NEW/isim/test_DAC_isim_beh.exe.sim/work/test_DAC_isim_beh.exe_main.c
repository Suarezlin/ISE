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
    work_m_00000000001299446837_3581938152_init();
    work_m_00000000002867167770_4122448441_init();
    work_m_00000000000584670180_4261571015_init();
    xilinxcorelib_ver_m_00000000001358910285_2881984826_init();
    xilinxcorelib_ver_m_00000000001687936702_1525216201_init();
    xilinxcorelib_ver_m_00000000000277421008_0463800887_init();
    xilinxcorelib_ver_m_00000000002055014830_0822046812_init();
    work_m_00000000002489990758_1254421729_init();
    xilinxcorelib_ver_m_00000000000277421008_1313977021_init();
    xilinxcorelib_ver_m_00000000002055014830_0632096068_init();
    work_m_00000000002489990758_2860001815_init();
    xilinxcorelib_ver_m_00000000000277421008_1384981346_init();
    xilinxcorelib_ver_m_00000000002055014830_3460702306_init();
    work_m_00000000002489990758_0312299474_init();
    work_m_00000000001646212331_3826191224_init();
    work_m_00000000001504459169_1105169019_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001504459169_1105169019");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
