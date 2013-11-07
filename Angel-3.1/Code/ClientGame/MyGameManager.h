#include "stdafx.h"

#define theGame MyGameManager::GetInstance()

class MyGameManager : public GameManager
{
public:
	static MyGameManager &GetInstance();

	virtual void Update(float dt);

protected:
	MyGameManager();

	static MyGameManager* m_MyGameManager;
	
private:
	Actor* m_Actor;
	//Actor* m_obstacle;
	Actor* m_TopSlig;
	Actor* m_LeftSlig;
	Actor* m_RightSlig;
	bool m_animatedRight;
	bool m_animatedLeft;
	bool m_animatedUp;
	bool m_animatedDown;
};