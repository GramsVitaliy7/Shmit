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
}

void World::Update()
{
	std::vector<char> newVect; //создаём вектор типа char
	for(int i=0; i<40; ++i) {
		newVect.push_back('.'); //С помощью цикла добавляем в конец вектора кл.
	}
	for(int i=0; i<35; ++i) {
		m_table[i] = newVect;
	}
	for(int i=10; i<15; ++i) {
	int x = m_enemy[i].GetX(); // взять символ и координаты
	int y = m_enemy[i].GetY(); 
	char symbol = m_enemy[i].GetSymbol();	
	this->PutSymbol( x, y, symbol ); // в ячейку с координатами положить символ
	}
	this->Draw();
}

void World::PutSymbol( int iX, int iY, char iSymbol )
{
	m_table[15][20] = iSymbol;
}

