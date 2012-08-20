
#include "Bullet.h"
#include "enemy.h"
Bullet::Bullet( int iX, int iY )
{
	m_x = iX;
	m_y = iY;
	m_symbols = '|';
	m_speed = 2;
}

void Bullet::Move() {
	m_x=m_x+m_speed;
}

Bullet * Laser::Shot( int iX, int iY ) {
	Bullet * gh = new Bullet( iX, iY );
	return gh; 
}

int Bullet::GetPosition(char type) {
	switch(type) {
		case 'x':
			return m_x;
			break;
		case 'y':
			return m_y;
			break;
	}
}

char Bullet::GetSymbol() {
	return m_symbols;
}


	



