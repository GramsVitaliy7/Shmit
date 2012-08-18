#include "Bullet.h"
Bullet::Bullet()
{
	m_symbols = '|';
}

void Bullet::Move() {
// возвращаемое_значение класс::имя метода

	m_x=m_x+1;
}

Bullet * Laser::Shot()
{
	return new Bullet();
	
	
}


	



