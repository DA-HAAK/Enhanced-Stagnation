#ifndef POSITION_H
#define POSITION_H


class Position
{
  public:
    Position();
    virtual ~Position();

    unsigned int getRow();
    unsigned int getCol();
    void shift(int r, int c);
  protected:

  private:
    unsigned int row;
    unsigned int col;
};

#endif // POSITION_H
