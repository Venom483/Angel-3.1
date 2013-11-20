#include "stdafx.h"
#include "MyGameManager.h"

MyGameManager* MyGameManager::m_MyGameManager = NULL;

MyGameManager::MyGameManager()
{
	FullScreenActor* Background = new FullScreenActor();
	if(!Background->SetSprite("Jellyfish.tga"))
		std::cout << "failed to load background sprite" << std::endl;

	theWorld.Add(Background);

	m_towerGrid = new TowerGrid();

	//m_Actor = new Actor();
	//theWorld.Add(m_Actor);
	//m_Actor->SetColor(1,1,1,1);
	//m_Actor->SetSize(5.5f, 3.0f);
	//m_Actor->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	//m_Actor->SetSpriteFrame(0);
	//m_Actor->SetLayer(3);

	m_animatedRight = false;
	m_animatedLeft = false;
	m_animatedUp = false;
	m_animatedDown = false;

	//m_LeftSlig = new Actor();
	//theWorld.Add(m_LeftSlig);
	//m_LeftSlig->SetColor(1,1,1,1);
	//m_LeftSlig->SetSize(6.0f, 2.5f);
	//m_LeftSlig->SetPosition(-7.0f, 0.0f);
	//m_LeftSlig->LoadSpriteFrames("SligShootingRight/SligShootingRight_001.png");
	//m_LeftSlig->PlaySpriteAnimation(0.125f, SAT_Loop, 3, 5, "SligShootingRight");

	//m_obstacle = new Actor();

	//theWorld.Add(m_obstacle);

	//m_obstacle->SetColor(1,1,1,1);
	//m_obstacle->SetSize(5.0f);
	//m_obstacle->SetDrawShape(ADS_Circle);
	//m_obstacle->SetPosition(7.0f, 0.0f);

	//m_obstacle->SetSprite("collision.png");

	//m_obstacle->SetLayer(3);

	//m_TopSlig = new Actor();
	//theWorld.Add(m_TopSlig);
	//m_TopSlig->SetColor(1,1,1,1);
	//m_TopSlig->SetSize(5.5f, 2.5f);
	//m_TopSlig->SetPosition(0.0f, 4.0f);
	//m_TopSlig->LoadSpriteFrames("SligShootingTowards/SligShootingTowards_001.png");
	//m_TopSlig->PlaySpriteAnimation(0.125f, SAT_Loop, 3, 13, "SligShootingRight");
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
	//Vector2 position = 	m_Actor->GetPosition();

	//if(theInput.IsKeyDown(GLFW_KEY_RIGHT))
	//{
	//	if(!m_animatedRight)
	//	{
	//		m_Actor->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	//		m_Actor->PlaySpriteAnimation(0.15f, SAT_Loop, 0, 5, "MudokonRunningLeft");
	//		m_animatedRight = true;
	//	}
	//	m_Actor->MoveTo(Vector2(position.X + 0.1f,position.Y), 0.01f, true);
	//}
	//else if(theInput.IsKeyDown(GLFW_KEY_LEFT))
	//{
	//	if(!m_animatedLeft)
	//	{
	//		m_Actor->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	//		m_Actor->PlaySpriteAnimation(0.15f, SAT_Loop, 0, 5, "MudokonRunningLeft");
	//		m_animatedLeft = true;
	//	}
	//	m_Actor->MoveTo(Vector2(position.X - 0.1f, position.Y), 0.01f, true);
	//}
	//else if(theInput.IsKeyDown(GLFW_KEY_UP))
	//{
	//	if(!m_animatedUp)
	//	{
	//		m_Actor->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	//		m_Actor->PlaySpriteAnimation(0.15f, SAT_Loop, 0, 5, "MudokonRunningLeft");
	//		m_animatedUp = true;
	//	}
	//	m_Actor->MoveTo(Vector2(position.X,position.Y + 0.1f), 0.01f, true);
	//}
	//else if(theInput.IsKeyDown(GLFW_KEY_DOWN))
	//{
	//	if(!m_animatedDown)
	//	{
	//		m_Actor->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	//		m_Actor->PlaySpriteAnimation(0.15f, SAT_Loop, 0, 5, "MudokonRunningLeft");
	//		m_animatedDown = true;
	//	}
	//	m_Actor->MoveTo(Vector2(position.X, position.Y - 0.1f), 0.01f, true);
	//}
	//else
	//{
	//	m_Actor->SetSpriteFrame(0);
	//	m_animatedRight = false;
	//	m_animatedLeft = false;
	//	m_animatedUp = false;
	//	m_animatedDown = false;
	//}
	
}

void MyGameManager::MouseDownEvent(Vec2i screenCoordinates, MouseButtonInput button)
{
	unsigned int arrPosX = ceil(MathUtil::ScreenToWorld(screenCoordinates).X + 100);
	unsigned int arrPosY = ceil(MathUtil::ScreenToWorld(screenCoordinates).Y + 100);
	Vector2 towerCoords = MathUtil::ScreenToWorld(screenCoordinates);
	m_towerGrid->AddTower(Slig(towerCoords), arrPosX, arrPosY);
	Tower* newTower = m_towerGrid->GetTower(arrPosX, arrPosY);
	theWorld.Add(newTower);
}