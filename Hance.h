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
        /**
        get the direction that the Hance will go
        */
        void wander();
        /**
        get a random direction for the Hance to go
        @param minimum the minimum random value
        @param maximum the maximum random value
        @return a char that corresponds to a number that tells the direction the Hance might go 
        */
        char getRandomDir(unsigned minimum, unsigned maximum);
        /**
        find if the way the Hance wants to go is valid
        @param r the row that the Hance will land
        @param c the column that the Hance will land
        @return whether or not the path is valid
        */
        bool isValidPos(int r, int c);
        /**
        get the character for the Hance that will be displayed
        @return the letter 'H'
        */
        char getId();
        /**
        find if position is logical
        @return whether or not it makes sense
        */
        bool isLocated(Position p);
        /**
        get the direction in which a characer is heading
        @return the direction in a char value
        */
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
