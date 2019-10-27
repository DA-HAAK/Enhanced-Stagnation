#include "Hance.h"

Hance::Hance()
{
    difficulty = 1;
    speed = 1;
    health = 1;
    pos = new Position(13, 8);
    dir = getRandomDir(1,4);
}

Hance::~Hance()
{
    //dtor
}
Hance::void wander() {
    dir = getRandomDir(1,4);
    if (dir == 'w' && isValidPos(0,-1)) {pos.shift(0,-1);}
    else if (dir == 's' && is ValidPos(1,0)) {pos.shift(1,0);}
    else if (dir == 'd' && is ValidPos(0,1)) {pos.shift(0,1);}
    else if (dir == 'a' && is ValidPos(0,-1)) {pos.shift(0,-1)}
}

Hance::char getRandomDir(unsigned minimum, unsigned maximum) {
    srand(static_cast<unsigned>(time(nullptr)));
    int rand = rand() % (max_value - min_value + 1) + min_value;
    if(rand == 1) {return 'w';}
    else if(rand == 2) {return 's';}
    else if(rand == 3) {return 'd';}
    else if(rand == 4) {return 'a';}
    return;//might be bad
}
Hance::bool isValidPos(int r, int c) {
    if (r == -1 && pos.getRow()==1) {return false;}
    else if (r == 1 && pos.getRow() ==13) {return false;}
    else if (c== -1 && pos.getCol() == 1) {return false;}
    else if (c==1 && pos.getCol() == 13) {return false;}
    else {return true;}
}
Hance::char getId() {
    return 'H';
}
Hance::bool isLocated(Position p) {
    if (pos == p) {return true;}
}
Hance::char getDir() { return dir;}
