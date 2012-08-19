#ifndef Bullet_h
#define Bullet_h

class Bullet
{
public:
	Bullet();
	void Move();
	int GetPosition( char type );
	char GetSymbol();

private:
	char m_symbols;	
	int m_speed;
	int m_x;
	int m_y; 
};

class Laser
{
public:
	Bullet * Shot();
};
#endif
