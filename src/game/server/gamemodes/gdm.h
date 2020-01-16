/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_GAMEMODES_GDM_H
#define GAME_SERVER_GAMEMODES_GDM_H
#include "dm.h"
#include <game/server/entity.h>

class CGameControllerGDM : public CGameControllerDM
{
public:
	CGameControllerGDM(class CGameContext *pGameServer);
	virtual void OnCharacterSpawn(class CCharacter *pChr);
	virtual bool IsInstagib() const override { return true; }
};

#endif

