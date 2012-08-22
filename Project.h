#ifndef Project
#define Project

#include<vector>
#include<iostream>

#include "enemy.h"
#include "Bullet.h"
#include "consts.h"
#include "Game.h"

class World
{
public:
	World();
	void Update( char command );

private:
	void Draw() 
	{
		for(int i=0; i<h; ++i) 
		{	
			for(int j=0; j<w; ++j)
			{	
 				std::cout << m_table[i][j];
				
			}
			std::cout << std::endl;
		}
		
	}
	
	void PutSymbol( int iX, int iY, char iSymbol );
private:
	std::vector < std::vector< char > > m_table; // Игровое поле
	std::vector < Enemy > m_enemy; // Враги
	std::vector < Bullet *> m_bullets; // Пули
	Game m_player; //Игрок
};

#endif
