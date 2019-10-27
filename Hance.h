#ifndef HANCE_H
#define HANCE_H
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;


class Hance
{
    public:
        Hance();
        virtual ~Hance();
        void wander();
        char getRandomDir(int minimum, int maximum);
        bool isValidPos(int r, int c);
        char getId();
        bool isLocated(Position p);
        char getDir();
    protected:

    private:
        int speed;
        int health;
        Position pos;
        char dir;
        int difficulty;
};

#endif // HANCE_H
