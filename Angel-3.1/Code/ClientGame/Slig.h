#pragma once
#include "c:\users\einherjar\documents\github\angel-3.1\angel-3.1\code\clientgame\tower.h"
class Slig :
	public Tower
{
public:
	Slig(Vector2 towerCoords);
	~Slig(void);
private:
	Vector2 m_towerCoords;
};

