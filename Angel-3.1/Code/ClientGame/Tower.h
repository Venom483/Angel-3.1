#pragma once

class Tower
{
public:
	Tower();
	~Tower(void);
	void PlaceSlig(Vector2 towerCoords);
	void PlaceFlyingSlig(Vector2 towerCoords);
	void PlaceSecurityClaw(Vector2 towerCoords);
private:
	Vector2 m_towerCoords;
	Actor* m_actor;
	unsigned int m_type;
	float m_rng;
	unsigned int m_dmg;
	float m_rof;
};

