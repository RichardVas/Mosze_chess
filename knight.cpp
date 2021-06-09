#include "knight.h"

bool Knight::checkMove(int dest_x, int dest_y) {
    /*a huszárnak egy lépéssel mindig 2 mezőt kell mennie egy irányba, és egyet a másik irányba tetszőleges sorrendben, és átléphet más figurák felett*/
    bool res=false;
    if(((this->getX+1)||(this->getX-1)==dest_x && (this->getY+2)||(this->getY-2)==dest_y) || ((this->getX+2)||(this->getX-2)==dest_x && (this->getY+1)||(this->getY-1)==dest_y)){
        res=true;
    }
return res;
}
