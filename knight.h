#pragma once
#include"Piece.h"

class Knight: public Piece{
    Knight(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Knight") {}
    ~Knight() {}
    void abstract() {return;}
    bool checkMove(int dest_x, int dest_y);
};
