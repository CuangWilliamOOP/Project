#include "Drink.h"


Drink::Drink(){
	
}

int Drink::get_count(){
	return count;
}

int Drink::get_price(){
	return price;

}

int Drink::brew(){
	count = count - 1;
	return count;
}

int Drink::change_count(){
	count = 0;
}


