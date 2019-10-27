#include "Stann.h"

Stann::Stann()
{
    alive = true;
    health = 3;
    speed = 1;
    pos = new Position(1,1);
    dir = 'd';

}

Stann::~Stann()
{
    //dtor
}
/**
returns the ID for Stann to be printed to the screen
@return the char ID for Stann
*/
Stann::char getID() {
    if (dir == 'd') {return '>';}
    else if (dir == 's') {return 'v';}
    else if (dir == 'a') {return '<';}
    else {return '^';}
}
/**
gets the health of Stann
@return the status of Stann's health
*/
Stann::bool getHealth() {return alive;}

Stann::void healthDown() {health--;}

Stann::void changePos(char dir) {
    if (dir == 'w' && isValidPos(0,-1)) {row--;}
    else if (dir == 's' && is ValidPos(1,0)) {row++;}
    else if (dir == 'd' && is ValidPos(0,1)) {col++;}
    else if (dir == 'a' && is ValidPos(0,-1)) {col++;}
}

Stann::bool isValidPos(int r, int c) {
    if (r == -1 && pos.getRow()==1) {return false;}
    else if (r == 1 && pos.getRow() ==13) {return false;}
    else if (c== -1 && pos.getCol() == 1) {return false;}
    else if (c==1 && pos.getCol() == 13) {return false;}
    else {return true;}
    }
}
