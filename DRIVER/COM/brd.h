/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: brd.h
 *
 *       Author: ds
 *
 *  Description: Internal header file for board specific defines
 *
 *     Switches: ---
 *
 *
 *---------------------------------------------------------------------------
 * Copyright 2003-2019, MEN Mikro Elektronik GmbH
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BRD_H
#define _BRD_H

#ifdef __cplusplus
    extern "C" {
#endif


/*-----------------------------------------+
|  Common                                  |
+-----------------------------------------*/
#define BRD_PCI_VEN_ID			0x1172			/* pci vendor-id					*/
#define BRD_BUSTYPE				OSS_BUSTYPE_PCI	/* board bus type PCI				*/
#define BRD_MODULE_NBR			4				/* number of M-Module slots			*/
#define BRD_A08_SIZE			0x100			/* size of A08 space				*/
#define BRD_A24_SIZE			0x1000000		/* size of A24 space				*/
#define BRD_CTRL_SIZE			0xc				/* size of ctrl/status/trig regs	*/

/*-----------------------------------------+
|  D203                                    |
+-----------------------------------------*/
#ifdef D203
#	define BRD_NAME					"D203"			/* board hw-name and func-prefix    */
#	define BRD_PCI_DEV_ID			0xD203			/* pci device-id					*/
#	define BRD_MBASE_OFFSET(m)		((m)*0x400 )	/* offset to module base addr		*/
#	define BRD_A08_D16_OFFSET		0x200			/* offset for A08/D16 access		*/
#	define BRD_CTRLR_OFFSET			0x304			/* offset to ctrl/status/trig regs	*/
#endif
/*-----------------------------------------+
|  D203_A24                                |
+-----------------------------------------*/
#ifdef D203_A24
#	define BRD_NAME					"D203_A24"		/* board hw-name and func-prefix    */
#	define BRD_PCI_DEV_ID			0x203D			/* pci device-id					*/
#	define BRD_MBASE_OFFSET(m)		((m)*0x2000000 )/* offset to module base addr		*/
#	define BRD_A08_D32_OFFSET		0x1fffd00		/* offset for A08/D32 access		*/
#	define BRD_A08_D16_OFFSET		0x1fffe00		/* offset for A08/D16 access		*/
#	define BRD_A24_D32_OFFSET		0x0000000		/* offset for A24/D32 access		*/
#	define BRD_A24_D16_OFFSET		0x1000000		/* offset for A24/D16 access		*/
#	define BRD_CTRLR_OFFSET			0x1ffff04		/* offset to ctrl/status/trig regs	*/
#endif


#ifdef __cplusplus
    }
#endif

#endif /* _BRD_H */
