#include<iostream>
#include<vector>
#include"Project.h"
#include"enemy.h"
World::World() {
	std::vector<char> newVect; //создаём вектор типа char
	for(int i=0; i<20; ++i) {
		newVect.push_back('.'); //С помощью цикла добавляем в конец вектора кл.
	}
	for(int i=0; i<20; ++i) {
		m_table.push_back(newVect);
	}
}


