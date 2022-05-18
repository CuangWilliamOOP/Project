output: main.o Person.o Customer.o Bartender.o Drink.o Alcoholic.o Menu.o 
	g++ main.o Person.o Customer.o Bartender.o Drink.o Alcoholic.o Menu.o  -o output

main.o: main.cpp
	g++ -c main.cpp

Person.o: Person.cpp Person.h
	g++ -c Player.cpp 

Customer.o: Customer.cpp Customer.h
	g++ -c Casino.cpp

Bartender.o: Bartender.cpp Bartender.h
	g++ -c Blackjack.cpp

Drink.o: Drink.cpp Drink.h
	g++ -c Dealer.cpp

Alcoholic.o: Alcoholic.cpp Alcoholic.h
	g++ -c Alcoholic.cpp	

Menu.o: Menu.cpp Menu.h
	g++ -c Menu.cpp

clean:
	rm *.o output							