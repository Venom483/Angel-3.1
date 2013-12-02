#include "StdAfx.h"
#include "Tower.h"


Tower::Tower()	
{
}

Tower::~Tower(void)
{
}

void Tower::PlaceSlig(Vector2 towerCoords)
{
	m_actor= new Actor();
	theWorld.Add(m_actor);
	m_towerCoords = towerCoords;
	m_type = 1;
	m_rng = 2.0f;
	m_dmg = 1;
	m_rof = 0.375f;
	m_actor->SetColor(1,1,1,1);
	m_actor->SetSize(1.0f, 0.42f);
	m_actor->SetPosition(towerCoords.X, towerCoords.Y);
	m_actor->LoadSpriteFrames("c:/users/einherjar/documents/github/angel-3.1/angel-3.1/code/clientgame/SligShootingRight/SligShootingRight_001.png");
	m_actor->PlaySpriteAnimation(0.125f, SAT_Loop, 3, 5, "SligShootingRight");
}