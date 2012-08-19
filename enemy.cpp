#include <cstdlib>
#include "enemy.h"
#include "Bullet.h"
Enemy::Enemy()
{
	m_health=100;
	m_x=rand() % 3;
	m_y=rand() % 30;
	m_symbol='V';
	m_laser = new Laser();	
}
void Enemy::Move() {
	m_x=m_x+1;	
} 
void Enemy::Shot() {
	m_laser->Shot();
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

