#ifndef POSITION_H
#define POSITION_H


class Position
{
  public:
    Position();
    virtual ~Position();

    unsigned int getrow();
    unsigned int getcol();

  protected:

  private:
    unsigned int row;
    unsigned int col;
};

#endif // POSITION_H
