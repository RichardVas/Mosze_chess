#include "knight.h"

bool Knight::checkMove(int dest_x, int dest_y) {
    /*a huszárnak egy lépéssel mindig 2 mezőt kell mennie egy irányba, és egyet a másik irányba tetszőleges sorrendben, és átléphet más figurák felett*/
    bool res=false;
    int dist=abs((this->getX-dest_x)+(this->getY-dest_y));
    if(dist==3 && this->getX-dest_x!=0 && this->getY-dest_y!=0){
        res=true;
    }
    else{
        std::cout << "rossz lepes\n";
    }
return res;
}
