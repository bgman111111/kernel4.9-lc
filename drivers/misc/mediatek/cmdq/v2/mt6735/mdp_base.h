/*
 * Copyright (C) 2020 MediaTek Inc.
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

#ifndef __MDP_BASE_H__
#define __MDP_BASE_H__

#define MDP_HW_CHECK

static u32 mdp_base[] = {
	0x14000000,
	0x14001000,
	0x14002000,
	0x14003000,
	0x14004000,
	0x14005000,
	0x14006000,
	0x14015000,
	0x15000000,
	0x15004000,
};

static u32 mdp_sub_base[] = {
	0x0001,
	0x1001,
	0x2001,
	0x3001,
	0x4001,
	0x5001,
	0x6001,
	0x5002,
	0x0004,
	0x4004,
};

#endif
