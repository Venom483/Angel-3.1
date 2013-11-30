#include "stdafx.h"
#include "MyGameManager.h"

MyGameManager* MyGameManager::m_MyGameManager = NULL;

MyGameManager::MyGameManager()
{
	//FullScreenActor* Background = new FullScreenActor();
	//if(!Background->SetSprite("Jellyfish.tga"))
	//	std::cout << "failed to load background sprite" << std::endl;

	//theWorld.Add(Background);

	m_towerGrid = new Tower[20,20];

	m_Abe = new Actor();
	theWorld.Add(m_Abe);
	m_Abe->SetColor(1,1,1,1);
	m_Abe->SetSize(1.0f, 0.54f);
	m_Abe->SetPosition(9.5f, 8.5f);
	m_Abe->LoadSpriteFrames("MudokonRunningLeft/MudokonRunningLeft_001.png");
	m_Abe->PlaySpriteAnimation(0.15f, SAT_Loop, 0, 5, "MudokonRunningLeft");

	//m_animatedRight = false;
	//m_animatedLeft = false;
	//m_animatedUp = false;
	//m_animatedDown = false;

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

	m_frame = 0;
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
	if(m_frame == 200)
		m_Abe->MoveTo(Vector2(8.5f, 8.5f), 2.0f, true);
	if(m_frame == 1200)
		m_Abe->MoveTo(Vector2(7.5f, 8.5f), 2.0f, true);
	if(m_frame == 2200)
		m_Abe->MoveTo(Vector2(6.5f, 8.5f), 2.0f, true);
	if(m_frame == 3200)
		m_Abe->MoveTo(Vector2(5.5f, 8.5f), 2.0f, true);
	if(m_frame == 4200)
		m_Abe->MoveTo(Vector2(5.5f, 7.5f), 2.0f, true);
	if(m_frame == 5200)
		m_Abe->MoveTo(Vector2(5.5f, 6.5f), 2.0f, true);
	if(m_frame == 6200)
		m_Abe->MoveTo(Vector2(5.5f, 5.5f), 2.0f, true);
	if(m_frame == 7200)
		m_Abe->MoveTo(Vector2(4.5f, 5.5f), 2.0f, true);
	if(m_frame == 8200)
		m_Abe->MoveTo(Vector2(3.5f, 5.5f), 2.0f, true);
	if(m_frame == 9200)
		m_Abe->MoveTo(Vector2(2.5f, 5.5f), 2.0f, true);
	if(m_frame == 10200)
		m_Abe->MoveTo(Vector2(2.5f, 4.5f), 2.0f, true);
	if(m_frame == 11200)
		m_Abe->MoveTo(Vector2(2.5f, 3.5f), 2.0f, true);
	++m_frame;

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
	Vector2 towerCoords;
	int arrPosX = screenCoordinates.X / 30;
	int arrPosY = screenCoordinates.Y / 30;
	towerCoords.X = arrPosX - 10 + 0.5;
	towerCoords.Y = arrPosY * -1 + 9.5;
	m_towerGrid[arrPosX,arrPosY].PlaceSlig(towerCoords);
}