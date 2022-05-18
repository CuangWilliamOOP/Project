#include "Menu.h"

Menu::Menu(){}
void Menu::main_menu(){

	std::cout << "1. List of Alcoholic drink" << std::endl;
	std::cout << "2. List of Non-alcoholic drink" << std::endl;
	std::cout << "Press 0 or any letters to exit" << std::endl;
	std::cout << "Enter the number to navigate around the program: ";
}

void Menu::module(int choice, Customer a, Bartender b){

	this -> set_drinks(b);

	while(choice == 1 || choice == 2 || choice < 0 || choice > 2 || choice == 0){
		if(choice == 1){

			int general_response;
			std::cout << std::endl;
			this -> A_drink();
			std::cin >> general_response;
			std::cout << std::endl;

			while(general_response >= 0 || general_response <= 5){
				if(general_response == 0){
					break;
				}else if(general_response == 1){
					list_of_drinks[0].brew();
					if(list_of_drinks[0].get_count() > 0){
						a.buy_drink(list_of_drinks[0].get_price());
						a.drink(list_of_drinks[0].get_drunk_level());
						a.greet();
						b.greet(a.how_drunk());
						break;
					}else{
						list_of_drinks[0].change_count();
						std::cout << "Bartender: We ran out of Beer" << std::endl;
					}
					break;
				}else if(general_response == 2){
					list_of_drinks[1].brew();
					if(list_of_drinks[1].get_count() > 0){
						a.buy_drink(list_of_drinks[1].get_price());
						a.drink(list_of_drinks[1].get_drunk_level());
						a.greet();
						b.greet(a.how_drunk());
						break;
					}else{
						list_of_drinks[1].change_count();
						std::cout << "Bartender: We're out of Vesper" << std::endl;
					}
					break;
				}else if(general_response == 3){
					list_of_drinks[2].brew();
					if(list_of_drinks[2].get_count() > 0){
						a.buy_drink(list_of_drinks[2].get_price());
						a.drink(list_of_drinks[2].get_drunk_level());
						a.greet();
						b.greet(a.how_drunk());
						break;
					}else{
						list_of_drinks[2].change_count();
						std::cout << "Bartender: We're out of Margarita" << std::endl;
					}
					break;
				}else if(general_response == 4){
					list_of_drinks[3].brew();
					if(list_of_drinks[3].get_count() > 0){
						a.buy_drink(list_of_drinks[3].get_price());
						a.drink(list_of_drinks[3].get_drunk_level());
						a.greet();
						b.greet(a.how_drunk());
						break;
					}else{
						list_of_drinks[3].change_count();
						std::cout << "Bartender: We're out of Bloody Mary" << std::endl;
					}
					break;
				}else if(general_response == 5){
					list_of_drinks[4].brew();
					if(list_of_drinks[4].get_count() > 0){
						a.buy_drink(list_of_drinks[4].get_price());
						a.drink(list_of_drinks[4].get_drunk_level());
						a.greet();
						b.greet(a.how_drunk());
						break;
					}else{
						list_of_drinks[4].change_count();
						std::cout << "Bartender: We're out of Martini" << std::endl;
					}
					break;
				}else{
					break;
				}
			}			
		}else if(choice == 0){
			std::cout << "Come again" << std::endl;
			break;
		}else if(choice == 2){
			break;
		}else if(choice > 2 || choice < 0){
			while(choice > 2 || choice < 0){
				std::cout << "Invalid number, try again." << std::endl; 
				break;
				std::cin >> choice;
			}
		}else{
			std::cout << "Invalid input, try again: ";
			std::cin >> choice;
		}
		if(a.how_drunk() >= 100){
			std::cout << "Bartender: You're too drunk, go home" << std::endl;
			break;
		}
		std::cout << std::endl;
		std::cout << "Money: " << a.return_money() << std::endl;
		std::cout << "Drunk level: " << a.how_drunk() << std::endl;
		this-> main_menu();
		std::cin >> choice;
	}
}

void Menu::A_drink(){
	std::cout << "1. Beer ($5)" << std::endl;
	std::cout << "2. Vesper ($10)" << std::endl;
	std::cout << "3. Margarita ($12)" << std::endl;
	std::cout << "4. Bloody Mary ($10)" << std::endl;
	std::cout << "5. Martini ($8)" << std::endl;
	std:: cout << "Choose your drink with numbers on the list or press any other number to return to main menu: ";
}

void Menu::set_drinks(Bartender){
	// name, drunk_level, count, prize, maximum
	Alcoholic Beer("Beer", 7, 5, 5, 7);
	Alcoholic Vesper("Vesper", 15, 3, 10, 5);
	Alcoholic Martini("Martini", 16, 4, 8, 5);
	Alcoholic Margarita("Margarita", 10, 4, 12, 4);
	Alcoholic Bloody_Mary("Bloody Mary",5, 5, 10, 5);


	list_of_drinks[0] = Beer;
	list_of_drinks[1] = Vesper;
	list_of_drinks[2] = Margarita;
	list_of_drinks[3] = Bloody_Mary;
	list_of_drinks[4] = Martini;
}

