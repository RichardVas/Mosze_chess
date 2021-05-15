#include "Piece.h"
#include "King.h"
#include "Board.h"
#include <iostream>

/*
JSON BEOLVAS
Exception kezelés
Game osztály- játékmenet vezérlése
További Piecek implementálása

FULL OOP -
cout csak mainben
ami const lehet az legyen
ami private lehet az legyen - mindenhova getter setter ami private
külön könyvtár - külön cpp 



sáncolás, döntetlen, ha marad idõ
*/

int main()
{
	//Piece *elso = new King(69, 420);
	//std::string output = elso->toString();

	Board *pelda = new Board();

//	std::cout << output << std::endl;
	pelda->setup();
	pelda->toString();

	std::cout<<"Tabla kirajzolasa" << std::endl;
	/*algortimus: minden paros sorban, minden paros elem fehér*/
	int i, j;
	for (i = 0; i < 8; ++i) {
		for (j = 0; j < 8; ++j) {
			if (i % 2 == 0) // ha a sor paros, akkor minden páros elem Fehér
			{
				if (j % 2 == 0)
					std::cout << "W ";
				else
					std::cout << "B ";
			}
			else //ha a sor paratlan, akkor minden paratlanodik fehér
			{
				if (j % 2 == 0)
					std::cout << "B ";
				else
					std::cout << "W ";

			}
		
		}
	std::cout << std::endl;
	}

//	delete elso;
	delete pelda;

	return 0;
}