#pragma once
#include"Piece.h"

class Rook: public Piece{
    Rook(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Rook") {}
    ~Rook() {}
    void abstract() {return;}
    bool checkMove(int dest_x, int dest_y);
};
