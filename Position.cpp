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
Position::Position(int r, int c){row = r; col = c;}
/**
get the row of the character
@return the row
*/
Position::unsigned int getrow() { return row; }
/**
get the column of the character
@return the column
*/
Position:: unsigned int getcol() { return col; }

Position::~Position()
{
  //dtor
}
/**
shift the row and column
@param r the row
@param c the column
*/
Position::void shift(int r, int c) {
    row += r;
    col += c;
}
