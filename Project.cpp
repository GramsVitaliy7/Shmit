#include<iostream>
#include<vector>
#include<cstdlib>

#include"Project.h"
#include"enemy.h"
World::World() {
	std::vector<char> newVect; //создаём вектор типа char
	for(int i=0; i<w; ++i) {
		newVect.push_back('.'); //С помощью цикла добавляем в конец вектора кл.
	}
	for(int i=0; i<h; ++i) {
		m_table.push_back(newVect);
	}
	for(int g=0; g<15; ++g) {	
		m_enemy.push_back( Enemy() );
	}
}

void World::Update()
{
	std::cout << "Game" << std::endl;	
	for(int i=0; i<m_enemy.size(); ++i) 
	{	
		m_enemy[i].Move();
		if( rand() % 3 < 2 )
		{
			Bullet * newBullet = m_enemy[i].Shot();
			if( newBullet != NULL )
				m_bullets.push_back( newBullet );
		}
	}
	

	for( int i = 0; i < m_bullets.size(); ++i )
	{
		m_bullets[i]->Move();
	}
	
	std::vector<char> newVect; //создаём вектор типа char
	for(int i=0; i<w; ++i) {
		newVect.push_back('.'); //С помощью цикла добавляем в конец вектора кл.
	}
	for(int i=0; i<h; ++i) {
		m_table[i] = newVect;
	}
	
	for(int i=0; i<m_enemy.size(); ++i) {
		int x = m_enemy[i].GetPosition('x'); // взять символ и координаты
		int y = m_enemy[i].GetPosition('y'); 
		char symbol = m_enemy[i].GetSymbol();
		this->PutSymbol( x, y, symbol ); // в ячейку с координатами положить символ

	}
std::cout << "Game overss" << std::endl;	

	for(int i=0; i<m_bullets.size(); ++i) {
		int x = m_bullets[i]->GetPosition('x'); 
		int y = m_bullets[i]->GetPosition('y'); 
		char symbol = m_bullets[i]->GetSymbol();
		this->PutSymbol( x, y, symbol );
		
	}

	
	this->Draw();
	
}

void World::PutSymbol( int iX, int iY, char iSymbol ) 
{
	m_table[iX][iY] = iSymbol;
}

