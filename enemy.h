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
	Enemy();
	int GetX() { return m_x; }
	int GetY() { return m_y; }
	int GetSymbol() { return m_symbol; }

private:
	int m_health;//Жизни
	int m_x;//Коордитнаты по оси х (абцисс)
	int m_y;//Координаты по оси у (ординат)
	char m_symbol;//Символ
};

#endif