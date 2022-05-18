#ifndef BARTENDER_H
#define BARTENDER_H
#include "Person.h"

class Bartender:public Person{
private:
	Person person;

public:

	Bartender();
	Bartender(Person);
	void greet();
	int add_drink();



};
#endif