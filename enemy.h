#ifndef EnemyShip
#define EnemyShip
#include "Bullet.h"
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
	void Move();//Класс движения
	void Die();//Смерть
	void Apear();
	Enemy();
	int GetPosition(char type);
	int GetSymbol() { return m_symbol; }
	void Shot();

private:
	int m_health;//Жизни
	int m_x;//Коордитнаты по оси х (абцисс)
	int m_y;//Координаты по оси у (ординат)
	char m_symbol;//Символ врага - V
	Laser * m_laser;	
	
};



#endif
