/* blake_common.c */
/*
    This file is part of the AVR-Crypto-Lib.
    Copyright (C) 2009  Daniel Otte (daniel.otte@rub.de)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*
 * \file    blake_common.c
 * \author  Daniel Otte
 * \email   daniel.otte@rub.de
 * \date    2009-05-08
 * \license GPLv3 or later
 *
 */

#include <stdint.h>
#include <avr/pgmspace.h>

uint8_t blake_sigma[] PROGMEM = {
   0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
   0xEA, 0x48, 0x9F, 0xD6, 0x1C, 0x02, 0xB7, 0x53,
   0xB8, 0xC0, 0x52, 0xFD, 0xAE, 0x36, 0x71, 0x94,
   0x79, 0x31, 0xDC, 0xBE, 0x26, 0x5A, 0x40, 0xF8,
   0x90, 0x57, 0x24, 0xAF, 0xE1, 0xBC, 0x68, 0x3D,
   0x2C, 0x6A, 0x0B, 0x83, 0x4D, 0x75, 0xFE, 0x19,
   0xC5, 0x1F, 0xED, 0x4A, 0x07, 0x63, 0x92, 0x8B,
   0xDB, 0x7E, 0xC1, 0x39, 0x50, 0xF4, 0x86, 0x2A,
   0x6F, 0xE9, 0xB3, 0x08, 0xC2, 0xD7, 0x14, 0xA5,
   0xA2, 0x84, 0x76, 0x15, 0xFB, 0x9E, 0x3C, 0xD0,
};

uint8_t blake_index_lut[] PROGMEM = {
	0x0, 0x4, 0x8, 0xC,
	0x1, 0x5, 0x9, 0xD,
	0x2, 0x6, 0xA, 0xE,
	0x3, 0x7, 0xB, 0xF,
	0x0, 0x5, 0xA, 0xF,
	0x1, 0x6, 0xB, 0xC,
	0x2, 0x7, 0x8, 0xD,
	0x3, 0x4, 0x9, 0xE
};


