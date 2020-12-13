/*
 * Copyright (C) 2008-2019 TrinityCore <https://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "GameObjectAI.h"
#include "CreatureAI.h"
#include "GameObject.h"
<<<<<<< HEAD
=======
#include "LootMgr.h"
#include "QuestDef.h"
>>>>>>> cab4c87d2d... Core/PacketIO: Updated most packet structures to 9.0.1

//GameObjectAI::GameObjectAI(GameObject* g) : go(g) { }
int GameObjectAI::Permissible(const GameObject* go)
{
    if (go->GetAIName() == "GameObjectAI")
        return PERMIT_BASE_SPECIAL;
    return PERMIT_BASE_NO;
}

<<<<<<< HEAD
=======
void GameObjectAI::QuestReward(Player* player, Quest const* quest, uint32 opt)
{
    QuestReward(player, quest, LootItemType::Item, opt);
}

uint32 GameObjectAI::GetDialogStatus(Player* /*player*/)
{
    return DIALOG_STATUS_SCRIPTED_NO_STATUS;
}

>>>>>>> cab4c87d2d... Core/PacketIO: Updated most packet structures to 9.0.1
NullGameObjectAI::NullGameObjectAI(GameObject* g) : GameObjectAI(g) { }

int NullGameObjectAI::Permissible(GameObject const* /*go*/)
{
    return PERMIT_BASE_IDLE;
}
