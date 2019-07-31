/*
 * Copyright (C) 2010 MEMSIC, Inc.
 *
 * Initial Code:
 *	Aaron Peng
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */

/*
 * Definitions for MXC622X accelorometer sensor chip.
 */
#ifndef __MXC622X_H__
#define __MXC622X_H__


#include	<linux/ioctl.h>	/* For IOCTL macros */
#include	<linux/input.h>



/************************************************/
/* 	Accelerometer defines section	 	*/
/************************************************/
#define MXC622X_DEV_NAME		"MXC622X"

#define MXC622X_I2C_ADDR		0x15
#define MXC622X_ID_1			0x02
#define MXC622X_ID_2			0x03

/* MXC622X register address */
#define MXC622X_REG_X			0x03
#define MXC622X_REG_Y			0x05
#define MXC622X_REG_Z			0x07
#define MXC622X_REG_TEMP		0x09
#define MXC622X_REG_CTRL		0x0D
#define MXC622X_REG_ID			0x0E


/*para setting*/
#define MXC622X_AWAKE			0x40	/* power on */
#define MXC622X_SLEEP			0x01	/* power donw */

#define MXC622X_BW_50HZ			0x00
#define MXC622X_RANGE_2G		0x00
#define MXC622X_RANGE_4G		0x20
#define MXC622X_RANGE_8G		0x40


/*ERR code*/
#define MXC622X_SUCCESS			0
#define MXC622X_ERR_I2C			-1
#define MXC622X_ERR_STATUS		-3
#define MXC622X_ERR_SETUP_FAILURE	-4
#define MXC622X_ERR_GETGSENSORDATA	-5
#define MXC622X_ERR_IDENTIFICATION	-6

#define MXC622X_BUFSIZE			256
#define MXC622X_STABLE_DELAY	10


#endif /* __MXC622X_H__ */
