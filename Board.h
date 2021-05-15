#pragma once
#include<vector>
#include "Piece.h"
#include "King.h"
#include "Nullpiece.h"
#include "Pawn.h"
#include<iostream>
class Board {
	/**
	*This class contains the necesarry pieces of the game
	*/

	/*�tlet: legyen egy Empty nev� piece spot osztaly helyett*/
	std::vector<std::vector<Piece*>>board;
	/*8x8 as m�trix legyen*/
	
public:
	Board() {}
	~Board() {/*A LEGFOGLALT BOARD VEKTORT FELSZABAD�TANI MUSZAJ KEZZEL*/}
	
	void setup() {
		/*ez a f�ggv�ny inicializ�lja a t�bl�t*/
		int i, j;
		/*minden P�ROS sorban, minden p�rosadik elem feh�r*/
		for (i = 0; i < 8; ++i)
		{
			std::vector<Piece*>tmp;
			
			for (j = 0; j < 8; ++j)
			{
				if (i == 0) {
					//Piece *haha = new King(i, j);
					Piece *paraszt = new King(i, j);
					paraszt->setWhite();
					tmp.push_back(paraszt);
				}
				else if (i == 1)
				{
					Piece *lulul = new Pawn(i, j);
					lulul->setWhite();
					tmp.push_back(lulul);
				}
				else if (i == 6)
				{
					Piece *lulul = new Pawn(i, j);
					tmp.push_back(lulul);
				}
				else if (i == 7)
				{
					Piece *lulul = new King(i, j);

					tmp.push_back(lulul);
				}
				else {
					Piece *semmi = new Nullpiece(i, j);
					tmp.push_back(semmi);

				}
			}
			board.push_back(tmp);

		}

	}
	void resetBoard() {}

	void toString() {
		int i, j;

		for (i=0; i<8;++i)
		{
			for (j=0; j<8;++j)
			{
				std::cout<<board[i][j]->toString();
			}
			std::cout << std::endl;
		}
		
	}
	void felszabadit() {}
};