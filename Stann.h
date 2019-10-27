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
        /**
        returns the ID for Stann to be printed to the screen
        @return the char ID for Stann
        */
        char getId();
        void healthDown();
        /**
        returns the the status of the character which is the bool variable alive
        @return whether Stann is alive or not
        */
        bool getStatus();
        /**
        changes the position of Stann
        @param dir the direction that Stann will go
        */
        void changePos(Position p, char dir);
        /**
        finds if the direction gone is valid or not
        @param r the row where Stann would go
        @param c the row where Stann would go
        @return whether or not Stann can be located at the coordinates
        */
        bool isValidPos(int r, int c);
        /**
        checks to see if logic is true
        @param p the position
        @return whether the logic is true
        */
        bool isLocated(Position pos);
        /**
        gets the direction
        @return the direction
        */
        char getDir();
    protected:

    private:
        Position pos;
        char dir;
        int health;
        int speed;
        bool alive;
};

#endif // STANN_H
