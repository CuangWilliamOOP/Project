#ifndef CUSTOMER_H
#define CUSTOMER_H	
#include "Person.h"

class Customer:public Person{

private:

	Person person;
	int drunk_level = 0;
	static const int max_drunk_level = 100;
	int money = 250;
	std::string sober_response[5]; 


public:

	Customer();
	Customer(Person);
	int buy_drink(int);
	void greet();
	int drink(int);
	int how_drunk();
	int return_money();




};
#endif