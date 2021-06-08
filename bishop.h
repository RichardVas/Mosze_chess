#pragma once
#include"Piece.h"

class Bishop: public Piece{
    Bishop(int x_pos, int y_pos) : Piece(x_pos,y_pos,"Bishop") {}
    ~Bishop() {}
    void abstract() {return;}
    bool checkMove(int dest_x, int dest_y);
};
