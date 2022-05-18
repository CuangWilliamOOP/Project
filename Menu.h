#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Alcoholic.h"
#include "Customer.h"
#include "Bartender.h"

class Menu{
	
	int quantity;
	Alcoholic list_of_drinks[5];


public:
	Menu();
	void set_drinks();
	void main_menu();
	void module(int, Customer, Bartender);
	void A_drink();
	void set_drinks(Bartender);
	int calculate(int, Alcoholic);


};
#endif