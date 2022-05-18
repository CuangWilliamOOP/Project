#ifndef BARTENDER_H
#define BARTENDER_H
#include "Person.h"

class Bartender:public Person{
public:

	Bartender();
	void greet();
	int add_drink();



};
#endif