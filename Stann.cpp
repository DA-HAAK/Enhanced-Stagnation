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
Stann::bool getStatus() {
    if (health > 0) {alive = true;}
    else { alive = false;}
    return alive;
/**
deals damage to Stann's health
@return Stann's health, but lessened by one
*/
Stann::void healthDown() {health--;}
/**
changes the position of Stann
@param dir the direction that Stann will go
*/
// if this doesn't work, it is the else statement at the end that is causing problems probably
Stann::void changePos(char dir) {
    if (dir == 'w' && isValidPos(0,-1)) {pos.shift(0,-1);}
    else if (dir == 's' && is ValidPos(1,0)) {pos.shift(1,0);}
    else if (dir == 'd' && is ValidPos(0,1)) {pos.shift(0,1);}
    else if (dir == 'a' && is ValidPos(0,-1)) {pos.shift(0,-1)}
}
}
/**
finds if the direction gone is valid or not
@param r the row where Stann would go
@param c the row where Stann would go
@return whether or not Stann can be located at the coordinates
*/
Stann::bool isValidPos(int r, int c) {
    if (r == -1 && pos.getRow() == 1) {return false;}
    else if (r == 1 && pos.getRow() == 13) {return false;}
    else if (c== -1 && pos.getCol() == 1) {return false;}
    else if (c==1 && pos.getCol() == 13) {return false;}
    else {return true;}
    }
}

Stann::bool isLocated(Position p) {
    if (pos == p) {return true;}
}

