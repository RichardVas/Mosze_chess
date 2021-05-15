#pragma once
#include "Piece.h"
class Nullpiece : public Piece {



//	int curr_x, curr_y;
public:
	Nullpiece(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Null") {}
	~Nullpiece() {}
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
	//	str += "Nullpiece's position: " + std::to_string(this->getX()) + ' ' + std::to_string(this->getY());
	//	return str;
	//}
	virtual std::string toString() {
		std::string str = "\t";
		
		return str;
	}
};