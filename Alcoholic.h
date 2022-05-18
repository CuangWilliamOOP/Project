#ifndef ALCOHOLIC_H
#define ALCOHOLIC_H
#include "Drink.h"

class Alcoholic:public Drink{
private:
	int drunk_level;
	std::string name;

public:
	Alcoholic();
	Alcoholic(std::string, int, int, int, int);
	int get_drunk_level();

};
#endif