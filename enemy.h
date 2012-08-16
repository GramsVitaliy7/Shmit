#ifndef EnemyShip
#define EnemyShip

#include<vector>
#include<iostream>

class test
{
	public:
	test(){}
};

class Enemy
{
public:
//	void Game();
//	void Move();//Класс движения
//	void Die();//Смерть
//	void Apear();
	Enemy()
{
	std::vector<char> newgVect; //создаём вектор типа char
	//for(int i=4; i<15; ++i) {
	//	newgVect.push_back('A');
//	m_table[4][15] = 'A';	
}

private:
	int m_health;//Жизни
	int m_x;//Коордитнаты по оси х (абцисс)
	int m_y;//Координаты по оси у (ординат)
	char m_symbol;//Символ
};

#endif
