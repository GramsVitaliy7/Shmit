#include "Game.h"

Game::Game()
{
	p_x = 34;
	p_y = 10;
	p_symbol = 'A';
	p_speed = 1;
	p_health = 100;
}
void Game::Move() {
	p_y=p_y+p_speed;	
	
}
int Game::GetPosition(char type) {
	switch(type) {
		case 'x':
			return p_x;
			break;
		case 'y':
			return p_y;
			break;
	}
}
char Game::GetSymbol() {
	return p_symbol;
}

