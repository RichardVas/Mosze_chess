#pragma once
#include "Piece.h"
class Pawn : public Piece {

public:
	Pawn(int x, int y) : Piece(x, y, "Pawn") {}
	~Pawn() {}

	std::string toString() {
		std::string str = "";
		if (this->get_isWhite())
		{
			str = "WP \t";
		}
		else
			str = "BP \t";
		return str;
	}
};