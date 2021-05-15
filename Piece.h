#pragma once

#include <string>

class Piece {/**
			 *Abstract class, that represent the essentials of a chess piece
			 */
	bool isDead = false;
	bool isWhite = false;
	int curr_x, curr_y;
	const std::string name;
	
public:
	Piece(int x_pos, int y_pos,const std::string &n) : curr_x(x_pos), curr_y(y_pos),name(n) {}
	~Piece() {}

	virtual void move(int dest_x, int dest_y) {
		setX(dest_x);
		setY(dest_y);
	}
//	virtual void Abstract() = 0;
	//virtual std::string toString() = 0;
	virtual std::string toString() = 0;
	void killpiece()
	{
		isDead = true;
	}
	void setWhite()
	{
		isWhite = true;
	}
	/*getters*/
	int getX()
	{
		return curr_x;
	}
	int getY()
	{
		return curr_y;
	}
	const std::string getName()
	{
		return name;
	}
	bool get_isWhite()
	{
		return isWhite;
	}
	/*setters*/
	void setX(int dest_x) { curr_x = dest_x; }
	void setY(int dest_y) { curr_x = dest_y; }
	//virtual void validMove(int destX, int destY) = 0;

};