#ifndef Game_h
#define Game_h

#include<iostream>

class Game
{
public: 
	Game();
	void Move();
	int GetPosition(char type);
	char GetSymbol();
private:	
	int p_health;
	int p_x;
	int p_y;
	int p_speed;
	char p_symbol;
	void PutSymbol(); 
};

#endif

