/*
 * Copyright © 2019-2023 Synthstrom Audible Limited
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

#include "gui/menu_item/menu_item_drum_name.h"
#include "gui/ui/sound_editor.h"
#include "gui/ui/rename/rename_drum_ui.h"
#include "util/functions.h"
#include "hid/matrix/matrix_driver.h"

bool MenuItemDrumName::isRelevant(Sound* sound, int whichThing) {
	return (DELUGE_MODEL != DELUGE_MODEL_40_PAD && soundEditor.editingKit());
}

void MenuItemDrumName::beginSession(MenuItem* navigatedBackwardFrom) {
	soundEditor.shouldGoUpOneLevelOnBegin = true;
	openUI(&renameDrumUI);
}
