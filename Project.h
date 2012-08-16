#ifndef Project
#define Project

#include<vector>
#include<iostream>

#include"enemy.h"

class World
{
public:
	World();
	void Update();


private:
	void Draw() 
	{
		for(int i=0; i<35; ++i) 
		{	
			for(int j=0; j<40; ++j)
			{	
 				std::cout<<m_table[i][j];
				
			}
			std::cout<<std::endl;
		}
	}
	
	void PutSymbol( int iX, int iY, char iSymbol );

private:
	std::vector < std::vector< char > > m_table;
	std::vector < Enemy > m_enemy;
};
#endif
