#include"Project.h"
#include"enemy.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(0));
	World plot;
	plot.Update();
	//World * pWorld = &plot;
	//pWorld->Draw();
	//World object;
	//World * pObject = &object;
	//pObject->Draw();
	test ship;
for(int i=0; i<32; i++) {
	plot.Update();
	std::cout << std::endl;
	usleep(500000);
	}
return 0;
}
