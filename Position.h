#ifndef POSITION_H
#define POSITION_H

#include <iostream>

using namespace std;

class Position
{
  public:
    Position();
    virtual ~Position();
    Position(int r, int c);
    /**
    get the row of the character
    @return the row
    */
    unsigned int getRow();
    /**
    get the column of the character
    @return the column
    */
    unsigned int getCol();
    /**
    shift the row and column
    @param r the row
    @param c the column
    */
    void shift(int r, int c);
  protected:

  private:
    unsigned int row;
    unsigned int col;
};

#endif // POSITION_H
