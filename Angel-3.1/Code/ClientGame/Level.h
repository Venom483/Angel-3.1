#pragma once
class Level
{
public:
	Level(std::string);
	~Level(void);
	void InitNodelist();
	void InitLevel();
	void MoveEnemy(Actor*);
private:
	std::string m_Level;
	unsigned int m_NodelistCount;
	struct Nodelist
	{
		std::string filepath;
		Vector2 node[MAX_PATH];
		unsigned int count;
	};
	Nodelist* m_Nodelist;
};

