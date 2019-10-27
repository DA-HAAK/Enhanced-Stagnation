#include "Position.h"

Position::Position()
{
  //ctor
  row = 0;
  col = 0;
}

Position::Position(int r, int c){row = r; col = c;}

Position::unsigned int getrow() { return row; }

Position:: unsigned int getcol() { return col; }

Position::~Position()
{
  //dtor
}
Position::void shift(int r, int c) {
    row +=r;
    col+=c;
}
