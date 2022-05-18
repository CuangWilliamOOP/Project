#ifndef DRINK_H
#define DRINK_H
#include "Bartender.h"

class Drink{

public:

	int maximum;
	int count;
	int price;
	Drink();
	void get_count();
	void drink_list();
	void get_price();




};
#endif