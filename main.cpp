#include"Project.h"
#include"enemy.h"
#include "Game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <curses.h>
int main() {
	srand(time(0));
	int command;
	World plot;
	plot.Update( command );
	Game player;
	//World * pWorld = &plot;
	//pWorld->Draw();
	//World object;
	//World * pObject = &object;
	//pObject->Draw();
for(int i=0; i<32; i++) {
	WINDOW * window = ::initscr();
	::cbreak();
	::nodelay( window, true );
	command = ::getch();
	::endwin();
	std::cout << command;
	plot.Update( command );
	std::cout << std::endl;
	usleep(500000);
	}
return 0;
}
