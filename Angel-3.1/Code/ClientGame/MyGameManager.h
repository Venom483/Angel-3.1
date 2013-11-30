#include "stdafx.h"
#include "tower.h"

#define theGame MyGameManager::GetInstance()

class MyGameManager : public GameManager, public MouseListener
{
public:
	static MyGameManager &GetInstance();

	virtual void Update(float dt);
	virtual void MouseDownEvent(Vec2i screenCoordinates, MouseButtonInput button);

protected:
	MyGameManager();

	static MyGameManager* m_MyGameManager;
	
private:
	Tower* m_towerGrid;
	//Actor* m_Actor;
	//Actor* m_obstacle;
	//Actor* m_TopSlig;
	//Actor* m_LeftSlig;
	//Actor* m_RightSlig;
	//bool m_animatedRight;
	//bool m_animatedLeft;
	//bool m_animatedUp;
	//bool m_animatedDown;
};