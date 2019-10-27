#include "Hance.h"
#include <cstdlib>
#include <ctime>
Hance::Hance()
{
    difficulty = 1;
    speed = 1;
    health = 1;
    pos = *new Position(13, 8);
    dir = getRandomDir(1,4);
}

Hance::~Hance()
{
    //dtor
}
/**
get the direction that the Hance will go
*/
void Hance::wander() {
    dir = getRandomDir(1,4);
    if (dir == 'w' && isValidPos(0,-1)) {pos.shift(0,-1);}
    else if (dir == 's' && isValidPos(1,0)) {pos.shift(1,0);}
    else if (dir == 'd' && isValidPos(0,1)) {pos.shift(0,1);}
    else if (dir == 'a' && isValidPos(0,-1)) {pos.shift(0,-1);}
}
/**
get a random direction for the Hance to go
@param minimum the minimum random value
@param maximum the maximum random value
@return a char that corresponds to a number that tells the direction the Hance might go
*/
char Hance::getRandomDir(unsigned minimum, unsigned maximum) {
    srand(static_cast<unsigned>(time(nullptr)));
    int random = (rand() % (maximum - minimum + 1)) + minimum;
    if(random == 1) {return 'w';}
    else if(random == 2) {return 's';}
    else if(random == 3) {return 'd';}
    else if(random == 4) {return 'a';}
    return 'd';//might be bad
}
/**
find if the way the Hance wants to go is valid
@param r the row that the Hance will land
@param c the column that the Hance will land
@return whether or not the path is valid
*/
bool Hance::isValidPos(int r, int c) {
    if (r == -1 && pos.getRow()==1) {return false;}
    else if (r == 1 && pos.getRow() ==13) {return false;}
    else if (c== -1 && pos.getCol() == 1) {return false;}
    else if (c==1 && pos.getCol() == 13) {return false;}
    return true;
}
/**
get the character for the Hance that will be displayed
@return the letter 'H'
*/
char Hance::getId() {
    return 'H';
}
/**
find if position is logical
@return whether or not it makes sense
*/
bool Hance::isLocated(Position p) {
    if (pos.getCol() == p.getCol()&&pos.getRow() == p.getRow()) {return true;}
    return false;
}
/**
get the direction in which a character is heading
@return the direction in a char value
*/
char Hance::getDir() { return dir;}
