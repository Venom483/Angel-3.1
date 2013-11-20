#include "StdAfx.h"
#include "TowerGrid.h"
#include <typeinfo>


TowerGrid::TowerGrid(void)
	: m_towerArr(new Tower[201, 201])
{
	//empty
}

void TowerGrid::AddTower(Tower newTower, unsigned int arrPosX, unsigned int arrPosY)
{

	if(typeid(m_towerArr[arrPosX, arrPosY]).name() == nullptr)
	{
		m_towerArr[arrPosX, arrPosY] = newTower;
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
