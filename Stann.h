#ifndef STANN_H
#define STANN_H

#include <iostream>
#include <windows.h>
using namespace std;

class Stann
{
    public:
        Stann();
        virtual ~Stann();
        char getId();
        void healthDown();
        /**
        returns the the status of the character which is the bool variable alive
        @return whether Stann is alive or not
        */
        bool getStatus();
        void changePos(Position p, char dir);
        bool isValidPos(int r, int c);

    protected:

    private:
        Position pos;
        char dir;
        int health;
        int speed;
        bool alive;
};

#endif // STANN_H
