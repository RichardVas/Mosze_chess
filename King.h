#pragma once
#include"Piece.h"
class King :public Piece {
	/**
	*
	*/
	//int curr_x, curr_y;
	/*a nev egyedi minden piece-re, viszont minden piecenek van neve */
	//const std::string name = "King";
public:
	King(int x_pos, int y_pos) : Piece(x_pos,y_pos,"King") {}
	~King() {}
	//virtual void move(int dest_x, int dest_y) {
	//	setX(dest_x);
	//	setY(dest_y);
	//}
	//int getX()
	//{
	//	return curr_x;
	//}
	//int getY()
	//{
	//	return curr_y;
	//}
	//virtual std::string toString() {
	//	std::string str = "";
	//	str += "King's position: "+std::to_string(this->getX())+' '+std::to_string(this->getY());
	//	return str;
	//}

	std::string toString() {
		std::string str = "K";
		if (this->get_isWhite())
		{
			str = "WK \t";
		}
		else
			str = "BK \t";
		return str;
	}
	/*implementálni még megszorításokat az egyes bábukra*/

};