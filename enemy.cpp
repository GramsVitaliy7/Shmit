#include <cstdlib>
#include <iostream>
#include "enemy.h"
#include "Bullet.h"

Enemy::Enemy()
{
	m_health=100;
	m_x=rand() % 3;
	m_y=rand() % 30;
	m_symbol ='V';
	m_delay = 3;
	m_curTime = 0;
	m_laser = new Laser();	
}
void Enemy::Move() {
	if( m_x < h - 1 )
		m_x=m_x+1;
	else
		std::cout << "Game over" << std::endl;	
} 
Bullet * Enemy::Shot() {
	if(++m_curTime == m_delay) {
		m_curTime = 0;
		return m_laser->Shot( m_x + 1, m_y );
	}
	else
		return NULL;
}
void Enemy::Die() {
} 

void Enemy::Apear() {
}

int Enemy::GetPosition(char type) {
	switch(type) {
		case 'x':
			return m_x;
			break;
		case 'y':
			return m_y;
			break;
	}
}

