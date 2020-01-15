/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <engine/shared/config.h>

#include <game/mapitems.h>

#include <game/server/entities/character.h>
#include <game/server/entities/flag.h>
#include <game/server/gamecontext.h>
#include <game/server/player.h>
#include "ictf.h"

CGameControllerICTF::CGameControllerICTF(CGameContext *pGameServer)
: CGameControllerCTF(pGameServer)
{
	m_pGameType = "iCTF+";
}

void CGameControllerICTF::OnCharacterSpawn(class CCharacter *pChr)
{
    // default health
	pChr->IncreaseHealth(10);

	//TODO: default ammo
	pChr->GiveWeapon(WEAPON_LASER, -1);
}
