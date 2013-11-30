#include "StdAfx.h"
#include "Tower.h"


Tower::Tower()
	: m_actor(new Actor())
{
	theWorld.Add(m_actor);
}

Tower::Tower(const Tower& other)
	: m_actor(other.m_actor)
{
	theWorld.Add(m_actor);
}

Tower& Tower::operator=(const Tower& other)
{
	if(this != &other)
	{
		m_actor = other.m_actor;
		m_towerCoords = other.m_towerCoords;
	}
	return *this;
}

Tower::~Tower(void)
{
	delete m_actor;
}

void Tower::PlaceSlig(Vector2 towerCoords)
{
	m_towerCoords = towerCoords;
	m_actor->SetColor(1,1,1,1);
	m_actor->SetSize(3.f, 1.26f);
	m_actor->SetPosition(towerCoords.X, towerCoords.Y);
	m_actor->LoadSpriteFrames("c:/users/einherjar/documents/github/angel-3.1/angel-3.1/code/clientgame/SligShootingRight/SligShootingRight_001.png");
	m_actor->PlaySpriteAnimation(0.125f, SAT_Loop, 3, 5, "SligShootingRight");
}