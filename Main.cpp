#include <iostream>

class Animal
{
public:
	Animal() {									
		m_age=15;
}
virtual ~Animal() {
	std::cout<<"good by"<<m_age<< std::endl;
virtual void Sound() {
		std::cout << "Rar! My age is " << m_age << std::endl;
	}

	
protected:
	int m_age;
};

class Animal1: public Animal
{
public:
	virtual ~Animal1() {
	std::cout << "I dead!" << m_age<< std::endl;
}
	void Sound() {
		std::cout << "Mew! My age is " << m_age << " and I'm a CAT!" << std::endl;		
	}
	};
int main()
{ 
	Animal animal;
	Animal1 animal1;
	Animal * pAnimal=&animal;
	Animal1 * pAnimal1=&animal1;
	Animal * pAnimal1=&animal1;

	pAnimal->Sound();
	pAnimal1->Sound();
	pAnimal1->Sound();


	return 0;
}


