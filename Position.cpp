#include "Position.h"

Position::Position()
{
  //ctor
  row = 0;
  col = 0;
}
/**
get the position of the character
@param r the row
@param c the column
*/
Position::Position(int r, int c) {row = r; col = c;}
/**
get the row of the character
@return the row
*/
unsigned int Position::getRow() { return row; }
/**
get the column of the character
@return the column
*/
unsigned int Position::getCol() { return col; }

Position::~Position()
{
  //dtor
}
/**
shift the row and column
@param r the row
@param c the column
*/
void Position::shift(int r, int c) {
    row += r;
    col += c;
}
