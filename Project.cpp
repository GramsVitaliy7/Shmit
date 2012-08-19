#include<iostream>
#include<vector>
#include"Project.h"
#include"enemy.h"
World::World() {
	std::vector<char> newVect; //создаём вектор типа char
	for(int i=0; i<40; ++i) {
		newVect.push_back('.'); //С помощью цикла добавляем в конец вектора кл.
	}
	for(int i=0; i<35; ++i) {
		m_table.push_back(newVect);
	}
	for(int g=0; g<15; ++g) {	
		m_enemy.push_back( Enemy() );
	}
}

void World::Update()
{
	
	for(int i=0; i<15; ++i) 
	{	
		m_enemy[i].Move();
	}	
	std::vector<char> newVect; //создаём вектор типа char
	for(int i=0; i<40; ++i) {
		newVect.push_back('.'); //С помощью цикла добавляем в конец вектора кл.
	}
	for(int i=0; i<35; ++i) {
		m_table[i] = newVect;
	}
	
	for(int i=0; i<m_enemy.size(); ++i) {
		int x = m_enemy[i].GetPosition('x'); // взять символ и координаты
		int y = m_enemy[i].GetPosition('y'); 
		char symbol = m_enemy[i].GetSymbol();
		this->PutSymbol( x, y, symbol ); // в ячейку с координатами положить символ

	}


	for(int i=0; i<m_bullets.size(); ++i) {
		int x = m_bullets[i].GetPosition('x'); 
		int y = m_bullets[i].GetPosition('y'); 
		char symbol = m_bullets[i].GetSymbol();
	}	
	
	for(int i=0; i<2; ++i) {	
		newVect.push_back('|');
	}


	this->Draw();
	

}

void World::PutSymbol( int iX, int iY, char iSymbol ) //
{
	m_table[iX][iY] = iSymbol;
}

