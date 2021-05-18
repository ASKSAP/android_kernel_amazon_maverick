/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _SMI_CONFIGURATION_H_
#define _SMI_CONFIGURATION_H_

#include "smi_reg.h"
#include "mtk_smi.h"
#include "mmdvfs_config_util.h"

/* SMI common configuration */
#if defined(SMI_D1) || defined(SMI_D3) || defined(SMI_J)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0xFF)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (0)
	#define SMI_PARAM_DISABLE_FREQ_MUX (1)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_EV)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0x7F)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (0)
	#define SMI_PARAM_DISABLE_FREQ_MUX (1)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_OLY)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0x3F)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (0)
	#define SMI_PARAM_DISABLE_FREQ_MUX (1)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_WHI)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0x1FF)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (1)
	#define SMI_PARAM_DISABLE_FREQ_MUX (0)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_ALA) || defined(SMI_VIN) || defined(SMI_CAN)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0xFF)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (1)
	#define SMI_PARAM_DISABLE_FREQ_MUX (1)
	#define SMI_PARAM_DISABLE_MMDVFS (1)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_BIA)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0xF)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (1)
	#define SMI_PARAM_DISABLE_FREQ_MUX (0)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_ZIO)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0x7)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (1)
	#define SMI_PARAM_DISABLE_FREQ_MUX (0)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_SYL)
	#define SMI_PARAM_BW_OPTIMIZATION (1)
	#define SMI_PARAM_BUS_OPTIMIZATION (0x7F)
	#define SMI_PARAM_ENABLE_IOCTL (1)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (1)
	#define SMI_PARAM_DISABLE_FREQ_MUX (0)
	#define SMI_PARAM_DISABLE_MMDVFS (0)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#elif defined(SMI_DUMMY)
	#define SMI_PARAM_BW_OPTIMIZATION (0)
	#define SMI_PARAM_BUS_OPTIMIZATION (0x7F)
	#define SMI_PARAM_ENABLE_IOCTL (0)
	#define SMI_PARAM_DISABLE_FREQ_HOPPING (1)
	#define SMI_PARAM_DISABLE_FREQ_MUX (1)
	#define SMI_PARAM_DISABLE_MMDVFS (1)
	#define SMI_PARAM_DISABLE_FORCE_CAMERA_HPM (1)
	#define SMI_PARAM_DISABLE_FORCE_MMSYS_MAX_CLK (1)
	#define SMI_PARAM_FORCE_MMSYS_CLKS_ALWAYS_ON (0)
#endif
/* ***********debug parameters************/


#define SMI_COMMON_DEFAULT_DEBUG_OFFSET_NUM 17
#define SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM 70


#if defined(SMI_D1) || defined(SMI_D3) || defined(SMI_J)
#define SMI_LARB0_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB1_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB2_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB3_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_COMMON_DEBUG_OFFSET_NUM SMI_COMMON_DEFAULT_DEBUG_OFFSET_NUM

#elif defined(SMI_D2)
#define SMI_LARB0_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB1_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB2_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_COMMON_DEBUG_OFFSET_NUM SMI_COMMON_DEFAULT_DEBUG_OFFSET_NUM

#elif defined(SMI_R)
#define SMI_LARB0_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB1_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_COMMON_DEBUG_OFFSET_NUM SMI_COMMON_DEFAULT_DEBUG_OFFSET_NUM

#elif defined(SMI_EV)
#define SMI_LARB0_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB1_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB2_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB3_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB4_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB5_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB6_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_COMMON_DEBUG_OFFSET_NUM 23

#elif defined(SMI_OLY)
#define SMI_LARB0_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB1_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB2_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB3_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB4_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_LARB5_DEBUG_OFFSET_NUM SMI_LARB_DEFAULT_DEBUG_OFFSET_NUM
#define SMI_COMMON_DEBUG_OFFSET_NUM 32

#define SMI_BASIC_LARB0_SETTING_NUM 2
#define SMI_BASIC_LARB1_SETTING_NUM 0
#define SMI_BASIC_LARB2_SETTING_NUM 0
#define SMI_BASIC_LARB3_SETTING_NUM 0
#define SMI_BASIC_LARB4_SETTING_NUM 2
#define SMI_BASIC_LARB5_SETTING_NUM 0

#define SMI_MMU_LARB0_SETTING_NUM SMI_LARB0_PORT_NUM
#define SMI_MMU_LARB1_SETTING_NUM SMI_LARB1_PORT_NUM
#define SMI_MMU_LARB2_SETTING_NUM SMI_LARB2_PORT_NUM
#define SMI_MMU_LARB3_SETTING_NUM SMI_LARB3_PORT_NUM
#define SMI_MMU_LARB4_SETTING_NUM SMI_LARB4_PORT_NUM
#define SMI_MMU_LARB5_SETTING_NUM SMI_LARB5_PORT_NUM

#define SMI_BASIC_COMMON_SETTING_NUM 13

#elif defined(SMI_WHI)
#define SMI_LARB0_DEBUG_OFFSET_NUM 91
#define SMI_LARB1_DEBUG_OFFSET_NUM 91
#define SMI_LARB2_DEBUG_OFFSET_NUM 91
#define SMI_LARB3_DEBUG_OFFSET_NUM 91
#define SMI_LARB4_DEBUG_OFFSET_NUM 91
#define SMI_LARB5_DEBUG_OFFSET_NUM 91
#define SMI_LARB6_DEBUG_OFFSET_NUM 91
#define SMI_LARB7_DEBUG_OFFSET_NUM 91
#define SMI_LARB8_DEBUG_OFFSET_NUM 91
#define SMI_COMMON_DEBUG_OFFSET_NUM 37

#define SMI_BASIC_LARB0_SETTING_NUM 5
#define SMI_BASIC_LARB1_SETTING_NUM 7
#define SMI_BASIC_LARB2_SETTING_NUM 2
#define SMI_BASIC_LARB3_SETTING_NUM 2
#define SMI_BASIC_LARB4_SETTING_NUM 2
#define SMI_BASIC_LARB5_SETTING_NUM 2
#define SMI_BASIC_LARB6_SETTING_NUM 2
#define SMI_BASIC_LARB7_SETTING_NUM 2
#define SMI_BASIC_LARB8_SETTING_NUM 2

#define SMI_MMU_LARB0_SETTING_NUM 3
#define SMI_MMU_LARB1_SETTING_NUM 5
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_MMU_LARB3_SETTING_NUM 0
#define SMI_MMU_LARB4_SETTING_NUM 0
#define SMI_MMU_LARB5_SETTING_NUM 0
#define SMI_MMU_LARB6_SETTING_NUM 0
#define SMI_MMU_LARB7_SETTING_NUM 0
#define SMI_MMU_LARB8_SETTING_NUM 0

#define SMI_BASIC_COMMON_SETTING_NUM 17

#define SMI_COMMON_PORT_NUM (SMI_LARB_NUM - 1)

#elif defined(SMI_ALA)
#define SMI_LARB0_DEBUG_OFFSET_NUM 93
#define SMI_LARB1_DEBUG_OFFSET_NUM 93
#define SMI_LARB2_DEBUG_OFFSET_NUM 93
#define SMI_LARB3_DEBUG_OFFSET_NUM 93
#define SMI_LARB4_DEBUG_OFFSET_NUM 93
#define SMI_LARB5_DEBUG_OFFSET_NUM 93
#define SMI_LARB6_DEBUG_OFFSET_NUM 93
#define SMI_LARB7_DEBUG_OFFSET_NUM 93
#define SMI_COMMON_DEBUG_OFFSET_NUM 37

#define SMI_BASIC_LARB0_SETTING_NUM 6
#define SMI_BASIC_LARB1_SETTING_NUM 6
#define SMI_BASIC_LARB2_SETTING_NUM 2
#define SMI_BASIC_LARB3_SETTING_NUM 2
#define SMI_BASIC_LARB4_SETTING_NUM 2
#define SMI_BASIC_LARB5_SETTING_NUM 2
#define SMI_BASIC_LARB6_SETTING_NUM 3
#define SMI_BASIC_LARB7_SETTING_NUM 2

#define SMI_MMU_LARB0_SETTING_NUM 3
#define SMI_MMU_LARB1_SETTING_NUM 3
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_MMU_LARB3_SETTING_NUM 0
#define SMI_MMU_LARB4_SETTING_NUM 0
#define SMI_MMU_LARB5_SETTING_NUM 0
#define SMI_MMU_LARB6_SETTING_NUM 0
#define SMI_MMU_LARB7_SETTING_NUM 0

#define SMI_BASIC_COMMON_SETTING_NUM 17
#define SMI_COMMON_PORT_NUM 8

#elif defined(SMI_BIA)
#define SMI_LARB0_DEBUG_OFFSET_NUM 93
#define SMI_LARB1_DEBUG_OFFSET_NUM 93
#define SMI_LARB2_DEBUG_OFFSET_NUM 93
#define SMI_LARB3_DEBUG_OFFSET_NUM 93
#define SMI_COMMON_DEBUG_OFFSET_NUM 37

#define SMI_BASIC_LARB0_SETTING_NUM 7
#define SMI_BASIC_LARB1_SETTING_NUM 1
#define SMI_BASIC_LARB2_SETTING_NUM 2
#define SMI_BASIC_LARB3_SETTING_NUM 1

#define SMI_MMU_LARB0_SETTING_NUM 5
#define SMI_MMU_LARB1_SETTING_NUM 0
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_MMU_LARB3_SETTING_NUM 0

#define SMI_BASIC_COMMON_SETTING_NUM 9
#define SMI_COMMON_PORT_NUM SMI_LARB_NUM

#elif defined(SMI_VIN)
#define SMI_LARB0_DEBUG_OFFSET_NUM 93
#define SMI_LARB1_DEBUG_OFFSET_NUM 93
#define SMI_LARB2_DEBUG_OFFSET_NUM 93
#define SMI_LARB3_DEBUG_OFFSET_NUM 93
#define SMI_LARB4_DEBUG_OFFSET_NUM 93
#define SMI_LARB5_DEBUG_OFFSET_NUM 93
#define SMI_LARB6_DEBUG_OFFSET_NUM 97
#define SMI_LARB7_DEBUG_OFFSET_NUM 93
#define SMI_COMMON_DEBUG_OFFSET_NUM 37

#define SMI_BASIC_LARB0_SETTING_NUM 6
#define SMI_BASIC_LARB1_SETTING_NUM 6
#define SMI_BASIC_LARB2_SETTING_NUM 2
#define SMI_BASIC_LARB3_SETTING_NUM 2
#define SMI_BASIC_LARB4_SETTING_NUM 2
#define SMI_BASIC_LARB5_SETTING_NUM 2
#define SMI_BASIC_LARB6_SETTING_NUM 3
#define SMI_BASIC_LARB7_SETTING_NUM 2

#define SMI_MMU_LARB0_SETTING_NUM 3
#define SMI_MMU_LARB1_SETTING_NUM 3
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_MMU_LARB3_SETTING_NUM 0
#define SMI_MMU_LARB4_SETTING_NUM 0
#define SMI_MMU_LARB5_SETTING_NUM 0
#define SMI_MMU_LARB6_SETTING_NUM 0
#define SMI_MMU_LARB7_SETTING_NUM 0

#define SMI_BASIC_COMMON_SETTING_NUM 17
#define SMI_COMMON_PORT_NUM 8

#elif defined(SMI_ZIO)
#define SMI_LARB0_DEBUG_OFFSET_NUM 93
#define SMI_LARB1_DEBUG_OFFSET_NUM 93
#define SMI_LARB2_DEBUG_OFFSET_NUM 93
#define SMI_COMMON_DEBUG_OFFSET_NUM 38

#define SMI_BASIC_LARB0_SETTING_NUM 4
#define SMI_BASIC_LARB1_SETTING_NUM 1
#define SMI_BASIC_LARB2_SETTING_NUM 1
#define SMI_BASIC_COMMON_SETTING_NUM 14

#define SMI_MMU_LARB0_SETTING_NUM 3
#define SMI_MMU_LARB1_SETTING_NUM 0
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_COMMON_PORT_NUM 3

#elif defined(SMI_CAN)
#define SMI_LARB0_DEBUG_OFFSET_NUM 104
#define SMI_LARB1_DEBUG_OFFSET_NUM 104
#define SMI_LARB2_DEBUG_OFFSET_NUM 104
#define SMI_LARB3_DEBUG_OFFSET_NUM 104
#define SMI_LARB4_DEBUG_OFFSET_NUM 104
#define SMI_LARB5_DEBUG_OFFSET_NUM 104
#define SMI_LARB6_DEBUG_OFFSET_NUM 104
#define SMI_LARB7_DEBUG_OFFSET_NUM 104
#define SMI_COMMON_DEBUG_OFFSET_NUM 37

#define SMI_BASIC_LARB0_SETTING_NUM 6
#define SMI_BASIC_LARB1_SETTING_NUM 6
#define SMI_BASIC_LARB2_SETTING_NUM 2
#define SMI_BASIC_LARB3_SETTING_NUM 2
#define SMI_BASIC_LARB4_SETTING_NUM 2
#define SMI_BASIC_LARB5_SETTING_NUM 2
#define SMI_BASIC_LARB6_SETTING_NUM 3
#define SMI_BASIC_LARB7_SETTING_NUM 2

#define SMI_MMU_LARB0_SETTING_NUM 3
#define SMI_MMU_LARB1_SETTING_NUM 3
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_MMU_LARB3_SETTING_NUM 0
#define SMI_MMU_LARB4_SETTING_NUM 0
#define SMI_MMU_LARB5_SETTING_NUM 0
#define SMI_MMU_LARB6_SETTING_NUM 0
#define SMI_MMU_LARB7_SETTING_NUM 0

#define SMI_BASIC_COMMON_SETTING_NUM 17
#define SMI_COMMON_PORT_NUM 8

#elif defined(SMI_SYL)
#define SMI_LARB0_DEBUG_OFFSET_NUM 109
#define SMI_LARB1_DEBUG_OFFSET_NUM 109
#define SMI_LARB2_DEBUG_OFFSET_NUM 109
#define SMI_LARB3_DEBUG_OFFSET_NUM 109
#define SMI_LARB4_DEBUG_OFFSET_NUM 109
#define SMI_LARB5_DEBUG_OFFSET_NUM 109
#define SMI_LARB6_DEBUG_OFFSET_NUM 109
#define SMI_COMMON_DEBUG_OFFSET_NUM 43
#define SMI_MMSYS_DEBUG_OFFSET_NUM 12

#define SMI_BASIC_LARB0_SETTING_NUM 7
#define SMI_BASIC_LARB1_SETTING_NUM 2
#define SMI_BASIC_LARB2_SETTING_NUM 2
#define SMI_BASIC_LARB3_SETTING_NUM 2
#define SMI_BASIC_LARB4_SETTING_NUM 2
#define SMI_BASIC_LARB5_SETTING_NUM 2
#define SMI_BASIC_LARB6_SETTING_NUM 1

#define SMI_MMU_LARB0_SETTING_NUM 5
#define SMI_MMU_LARB1_SETTING_NUM 0
#define SMI_MMU_LARB2_SETTING_NUM 0
#define SMI_MMU_LARB3_SETTING_NUM 0
#define SMI_MMU_LARB4_SETTING_NUM 0
#define SMI_MMU_LARB5_SETTING_NUM 0
#define SMI_MMU_LARB6_SETTING_NUM 0
#define SMI_BASIC_COMMON_SETTING_NUM 8
#define SMI_COMMON_PORT_NUM 7

#elif defined(SMI_DUMMY)
#define SMI_COMMON_DEBUG_OFFSET_NUM SMI_COMMON_DEFAULT_DEBUG_OFFSET_NUM
#endif


struct SMI_SETTING_VALUE {
	unsigned int offset;
	int value;
};

struct SMI_SETTING {
	unsigned int smi_common_reg_num;
	struct SMI_SETTING_VALUE *smi_common_setting_vals;
	unsigned int smi_larb_reg_num[SMI_LARB_NUM];
	struct SMI_SETTING_VALUE *smi_larb_setting_vals[SMI_LARB_NUM];
};

struct SMI_PROFILE_CONFIG {
	int smi_profile;
	struct SMI_SETTING *setting;
};

struct SMI_CLK_INFO {
	char *name;
	unsigned long base_addr;
	unsigned short int offset;
};

enum SMI_CLK_ID {
	SMI_MTCMOS,
	SMI_CLK_LARB0,
	SMI_CLK_LARB1,
	SMI_CLK_LARB2,
	SMI_CLK_LARB3,
	SMI_CLK_LARB4,
	SMI_CLK_LARB5,
	SMI_CLK_LARB6,
	SMI_CLK_CNT
};

#define SMI_PROFILE_CONFIG_NUM SMI_BWC_SCEN_CNT
#define SMI_VC_SETTING_NUM SMI_LARB_NUM

extern unsigned long smi_common_debug_offset[SMI_COMMON_DEBUG_OFFSET_NUM];
extern int smi_larb_debug_offset_num[SMI_LARB_NUM];
extern unsigned long *smi_larb_debug_offset[SMI_LARB_NUM];
#if IS_ENABLED(CONFIG_MACH_MT8183)
extern unsigned long smi_mmsys_debug_offset[SMI_MMSYS_DEBUG_OFFSET_NUM];
#endif
extern struct SMI_SETTING_VALUE smi_vc_setting[SMI_VC_SETTING_NUM];
extern struct SMI_CLK_INFO smi_clk_info[SMI_CLK_CNT];
extern struct SMI_SETTING_VALUE *smi_larb_restore[SMI_LARB_NUM];
extern unsigned int smi_restore_num[SMI_LARB_NUM];

extern unsigned long smi_m4u_non_secure_offset[SMI_MAX_PORT_NUM];
extern unsigned long smi_m4u_secure_offset[SMI_MAX_PORT_NUM];
#endif
