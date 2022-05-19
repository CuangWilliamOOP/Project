#ifndef ALCOHOLIC_H
#define ALCOHOLIC_H
#include "Drink.h"

class Alcoholic:public Drink{
private:
	int drunk_level;

public:
	Alcoholic();
	Alcoholic(std::string, int, int, int, int);
	int get_drunk_level() override; 
	std::string get_name();
	int change_price(int);
	int change_drunk_level(int);

};
#endif