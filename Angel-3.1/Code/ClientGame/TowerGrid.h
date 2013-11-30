#pragma once
#include "c:\users\einherjar\documents\github\angel-3.1\angel-3.1\code\clientgame\tower.h"
#include "c:\users\einherjar\documents\github\angel-3.1\angel-3.1\code\clientgame\slig.h"
class TowerGrid :
	public Tower
{
public:
	TowerGrid(void);
	void AddTower(unsigned int type, Vector2 towerCoords, unsigned int arrPosX, unsigned int arrPosY);
	Tower* GetTower(unsigned int arrPosX, unsigned int arrPosY);
	~TowerGrid(void);
private:
	Tower* m_towerArr;
};

