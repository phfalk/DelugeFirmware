/*
 * Copyright © 2018-2023 Synthstrom Audible Limited
 *
 * This file is part of The Synthstrom Audible Deluge Firmware.
 *
 * The Synthstrom Audible Deluge Firmware is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program.
 * If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef CONSEQUENCEARRANGERPARAMSTIMEINSERTED_H_
#define CONSEQUENCEARRANGERPARAMSTIMEINSERTED_H_

#include "model/consequence/consequence.h"
#include "RZA1/system/r_typedefs.h"

class ConsequenceArrangerParamsTimeInserted final : public Consequence {
public:
	ConsequenceArrangerParamsTimeInserted(int32_t newPos, int32_t newLength);
	int revert(int time, ModelStack* modelStack);
	int32_t pos;
	int32_t length;
};

#endif /* CONSEQUENCEARRANGERPARAMSTIMEINSERTED_H_ */
