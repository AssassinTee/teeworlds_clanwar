/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <engine/shared/config.h>

#include <game/mapitems.h>

#include <game/server/entities/character.h>
#include <game/server/entities/flag.h>
#include <game/server/gamecontext.h>
#include <game/server/player.h>
#include "gdm.h"

CGameControllerGDM::CGameControllerGDM(CGameContext *pGameServer)
: CGameControllerDM(pGameServer)
{
	m_pGameType = "gDM+";
}

void CGameControllerGDM::OnCharacterSpawn(class CCharacter *pChr)
{
    // default health
	pChr->IncreaseHealth(10);

	//TODO: default ammo
	pChr->GiveWeapon(WEAPON_GRENADE, g_Config.m_SvGrenadeAmmoRegen ? g_Config.m_SvGrenadeAmmoRegenNum : -1);
}
