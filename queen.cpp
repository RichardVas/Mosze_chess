#include "queen.h"

bool Queen::checkMove(int dest_x, int dest_y) {
    /*a királynő a saját oszlopában, sorában és az átlók mentén léphet tetszőlegesen, */
    bool res=false;
    if((this->getX-dest_x!=0)&&(this->getY-dest_y==0) || (this->getY-dest_y!=0)&&(this->getX-dest_x==0)||abs(this->getX-dest_x)==abs(this->getY-dest_y)){
        res=true;
    }
    else{
        std::cout << "rossz lepes\n";
    }
return res;
}
