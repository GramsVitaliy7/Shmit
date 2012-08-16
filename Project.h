#ifndef Project
#define Project

#include<vector>
#include<iostream>

#include"enemy.h"

class World
{
public:
	void Draw() 
	{
		for(int i=0; i<20; ++i) 
		{	
			for(int j=0; j<20; ++j)
			{	
 				std::cout<<m_table[i][j];
				
			}
			std::cout<<std::endl;
		}
	}
 	World();

private:
	std::vector < std::vector< char > > m_table;
	//std::vector <EnemyShip> m_enemy;
};
#endif
