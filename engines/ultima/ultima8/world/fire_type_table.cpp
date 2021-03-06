/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "ultima/ultima8/misc/pent_include.h"

#include "ultima/ultima8/world/fire_type_table.h"
#include "ultima/ultima8/world/fire_type.h"

namespace Ultima {
namespace Ultima8 {

static FireType FIRE_TYPE_TABLE_REM[] = {
	// Extracted from CRUSADER.EXE 1478:252a
	FireType(0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0),
	FireType(0x1, 0x12, 0x19, 0x0, 0x1, 0x82, 0x7, 0x0, 0xc, 0x3e8, 0x0),
	FireType(0x2, 0xa, 0x11, 0x0, 0x8, 0x50, 0x7, 0x0, 0xc, 0x3e8, 0x0),
	FireType(0x3, 0xc8, 0xc8, 0xa, 0x1, 0x0, 0x0, 0x1, 0x3, 0x3e8, 0x1),
	FireType(0x4, 0x96, 0x96, 0xa, 0x1, 0x0, 0x0, 0x0, 0x1, 0x3e8, 0x1),
	FireType(0x5, 0x19, 0x2d, 0x0, 0x1, 0x190, 0x6, 0x0, 0x4, 0x3e8, 0x1),
	FireType(0x6, 0xf, 0x23, 0x0, 0x1, 0x177, 0x6, 0x1, 0x4, 0x3e8, 0x1),
	FireType(0x7, 0x5, 0x5, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x3e8, 0x1),
	FireType(0x8, 0x5, 0x5, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x3e8, 0x0),
	FireType(0x9, 0xa, 0xf, 0x0, 0x1, 0x12c, 0x6, 0x1, 0x1, 0x64, 0x1),
	FireType(0xa, 0x2d, 0x50, 0xa, 0x3, 0x0, 0x0, 0x0, 0x3, 0x64, 0x1),
	FireType(0xb, 0xe, 0x14, 0x0, 0x1, 0x50, 0x7, 0x0, 0xc, 0x3e8, 0x0),
	FireType(0xc, 0x5, 0x5, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x3e8, 0x0),
	FireType(0xd, 0xa, 0x11, 0x0, 0x5, 0x50, 0x7, 0x0, 0xc, 0x3e8, 0x0),
	FireType(0xe, 0xfa, 0xfa, 0x4, 0x1, 0x9c4, 0x4, 0x1, 0x3, 0x3e8, 0x1),
	FireType(0xf, 0x23, 0x37, 0x4, 0x1, 0x2ee, 0x4, 0x0, 0x3, 0x3e8, 0x1),
};

static const int FIRE_TYPE_TABLE_LEN = 16;

const FireType *FireTypeTable::get(uint16 type) {
	if (type >= FIRE_TYPE_TABLE_LEN)
		return nullptr;
	return &FIRE_TYPE_TABLE_REM[type];
}

} // End of namespace Ultima8
} // End of namespace Ultima
