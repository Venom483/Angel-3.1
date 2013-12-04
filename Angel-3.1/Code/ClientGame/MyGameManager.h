#include "stdafx.h"
#include "tower.h"
#include "Level.h"
#include "defines.h"

#define theGame MyGameManager::GetInstance()

class MyGameManager : public GameManager, public MouseListener
{
public:
	static MyGameManager &GetInstance();

	virtual void Update(float dt);
	virtual void MouseDownEvent(Vec2i screenCoordinates, MouseButtonInput button);
	void InitWavelist();
protected:
	MyGameManager();

	static MyGameManager* m_MyGameManager;
	
private:
	Level* m_Level;
	Tower* m_towerGrid;
	Actor* m_Abe;
};