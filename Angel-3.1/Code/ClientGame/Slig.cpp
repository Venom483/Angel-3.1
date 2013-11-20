#include "StdAfx.h"
#include "Slig.h"


Slig::Slig(Vector2 towerCoords)
	: m_towerCoords(towerCoords)
{
	SetColor(1,1,1,1);
	SetSize(1.f, 0.42f);
	SetPosition(floor(m_towerCoords.X), floor(m_towerCoords.Y));
	LoadSpriteFrames("c:/users/einherjar/documents/github/angel-3.1/angel-3.1/code/clientgame/SligShootingRight/SligShootingRight_001.png");
	PlaySpriteAnimation(0.125f, SAT_Loop, 3, 5, "SligShootingRight");
}


Slig::~Slig(void)
{
}
