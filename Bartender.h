#ifndef BARTENDER_H
#define BARTENDER_H
#include "Person.h"

class Bartender:public Person{
private:
	std::string sober_response[6];
	std::string drunk_response[5];
public:

	Bartender();
	Bartender(std::string, int);
	void greet(int);
	int add_drink(std::string);



};
#endif