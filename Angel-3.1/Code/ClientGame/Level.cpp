#include "StdAfx.h"
#include "Level.h"

#include <sstream>
#include <string>
#include <fstream>

Level::Level(std::string level)
	:m_Level(level)
{
	InitLevel();
	InitNodelist();
}


Level::~Level(void)
{
}

void Level::InitNodelist()
{
	std::ifstream infile;
	std::string line;

	for(unsigned int j = 0; j <= m_NodelistCount; j++)
	{ 
		unsigned int i = 0;
		infile.open(m_Nodelist[j].filepath);
		while (std::getline(infile, line))
		{
			std::istringstream iss(line);
			float nodeX,nodeY;
			if ((iss >> nodeX >> nodeY))
			{
				m_Nodelist[j].node[i].X = nodeX;
				m_Nodelist[j].node[i].Y = nodeY;
			}
			i++;
			m_Nodelist[j].count = i - 1;
		}
		infile.close();
	}
}

void Level::InitLevel()
{
	std::ifstream infile;
	std::string line;
	unsigned int i;

	std::string filepathToLvl = "Level";
	filepathToLvl += m_Level;
	filepathToLvl += ".txt";

	i = 0;
	infile.open(filepathToLvl);
	while (std::getline(infile, line))
	{
		i++;
	}
	infile.close();

	m_Nodelist = new Nodelist[i];

	i = 0;
	infile.open(filepathToLvl);
	while (std::getline(infile, line))
	{
		m_Nodelist[i].filepath = line;
		i++;
	}
	m_NodelistCount = i - 1;
	infile.close();
}

void Level::MoveEnemy(Actor* enemy)
{
	for(unsigned int i = 0; i < m_Nodelist[0].count; i++)
	{
		if(enemy->GetPosition() == m_Nodelist[0].node[i])
		{
			enemy->MoveTo(m_Nodelist[0].node[++i], 1.0f, true);
		}
	}
}