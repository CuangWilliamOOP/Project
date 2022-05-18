#ifndef BARTENDER_H
#define BARTENDER_H
#include "Person.h"

class Bartender:public Person{
public:

	Bartender();
	Bartender(std::string, int);
	void greet();
	int add_drink();



};
#endif