#include "stdafx.h"
#include "MyGameManager.h"

MyGameManager* MyGameManager::m_MyGameManager = NULL;

MyGameManager::MyGameManager()
{
	FullScreenActor* Background = new FullScreenActor();
	if(!Background->SetSprite("TestMap.png"))
		std::cout << "failed to load background sprite" << std::endl;

	theWorld.Add(Background);

	m_Level = new Level("1");

	m_towerGrid = new Tower[20,20];

	m_Abe = new Actor();
	theWorld.Add(m_Abe);
	m_Abe->SetColor(1,1,1,1);
	m_Abe->SetSize(1.0f, 0.54f);
	m_Abe->SetPosition(10.0f, 8.5f);
	m_Abe->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	m_Abe->PlaySpriteAnimation(0.15f, SAT_Loop, 0, 5, "MudokonRunningLeft");
}

MyGameManager& MyGameManager::GetInstance()
{
	if(m_MyGameManager == NULL)
	{
		m_MyGameManager = new MyGameManager();
	}

	return *m_MyGameManager;
}

void MyGameManager::Update(float dt)
{
	m_Level->MoveEnemy(m_Abe);	
}

void MyGameManager::MouseDownEvent(Vec2i screenCoordinates, MouseButtonInput button)
{
	Vector2 towerCoords;
	int arrPosX = screenCoordinates.X / 30;
	int arrPosY = screenCoordinates.Y / 30;
	towerCoords.X = arrPosX - 10 + 0.5;
	towerCoords.Y = arrPosY * -1 + 9.5;
	m_towerGrid[arrPosX,arrPosY].PlaceSlig(towerCoords);
}