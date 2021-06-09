#include "bishop.h"

bool Bishop::checkMove(int dest_x, int dest_y) {
    /*a futó léphet bármerre átlósan*/
    bool res=true;
    if(abs(this->getX-dest_x)!=abs(this->getY-dest_y)){
        res=false;
        std::cout << "rossz lepes\n";
    }
return res;
}
