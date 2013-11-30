#pragma once

class Tower
{
public:
	Tower();
	Tower(const Tower& other);
	Tower& operator=(const Tower& other);
	~Tower(void);
	void PlaceSlig(Vector2 towerCoords);
	void PlaceFlyingSlig(Vector2 towerCoords);
	void PlaceSecurityClaw(Vector2 towerCoords);
private:
	Vector2 m_towerCoords;
	Actor* m_actor;
};

