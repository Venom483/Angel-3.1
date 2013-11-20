#pragma once
#include "c:\users\einherjar\documents\github\angel-3.1\angel-3.1\code\clientgame\tower.h"
class TowerGrid :
	public Tower
{
public:
	TowerGrid(void);
	void AddTower(Tower newTower, unsigned int arrPosX, unsigned int arrPosY);
	Tower* GetTower(unsigned int arrPosX, unsigned int arrPosY);
	~TowerGrid(void);
private:
	Tower* m_towerArr;
};

