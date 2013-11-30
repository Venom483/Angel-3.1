#include "StdAfx.h"
#include "TowerGrid.h"
#include <typeinfo>


TowerGrid::TowerGrid(void)
	: m_towerArr(new Tower[201, 201])
{
	//empty
}

void TowerGrid::AddTower(unsigned int type, Vector2 towerCoords, unsigned int arrPosX, unsigned int arrPosY)
{
	switch(type)
	{
		case 1:
			if(typeid(m_towerArr[arrPosX, arrPosY]).name() == nullptr)
			{
				Slig* slig = new Slig(towerCoords);
				theWorld.Add(slig);
				m_towerArr[arrPosX, arrPosY] = slig;
			}
	}
}

Tower* TowerGrid::GetTower(unsigned int arrPosX, unsigned int arrPosY)
{
	return& m_towerArr[arrPosX, arrPosX];
}


TowerGrid::~TowerGrid(void)
{
	delete[] m_towerArr;
}
