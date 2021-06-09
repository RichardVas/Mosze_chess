#pragma once
#include"Piece.h"

class Queen: public Piece{
    Queen(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Queen") {}
    ~Queen() {}
    void abstract() {return;}
    bool checkMove(int dest_x, int dest_y);
};
