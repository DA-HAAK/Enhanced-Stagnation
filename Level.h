#ifndef LEVEL_H
#define LEVEL_H
#include <vector>
#include <iostream>
#include "Stann.h"
#include "Hance.h"

using namespace std;

class Level
{
    public:
        const int COL = 10;
        const int ROW = 15;
        char levelOne[15][10] =  { ('X','X','X','X','X','X','X','X','X','X')
                                   ('X',' ',' ',' ',' ',' ',' ',' ',' ','X')
                                   ('X',' ','X','X',' ',' ','X','X',' ','X')
                                   ('X',' ','X',' ',' ',' ',' ','X',' ','X')
                                   ('X',' ',' ',' ','X','X',' ',' ',' ','X')
                                   ('X',' ',' ',' ',' ',' ',' ',' ',' ','X')
                                   ('X',' ',' ',' ',' ',' ',' ',' ',' ','X')
                                   ('X','X',' ',' ','X','X',' ',' ','X','X')
                                   ('X',' ',' ',' ',' ',' ',' ',' ',' ','X')
                                   ('X',' ',' ',' ',' ',' ',' ',' ',' ','X')
                                   ('X',' ',' ',' ','X','X',' ',' ',' ','X')
                                   ('X',' ','X',' ',' ',' ',' ','X',' ','X')
                                   ('X',' ','X','X',' ',' ','X','X',' ','X')
                                   ('X',' ',' ',' ',' ',' ',' ',' ',' ','X')
                                   ('X','X','X','X','X','X','X','X','X','X')};

        Level();
        virtual ~Level();
        /**
        get the status of the player
        @return whether the player is alive or not
        */
        bool getStatus();
        /**
        display the game
        */
        void displayGame();
        /**
        add Stann to the level
        @param player the player Stann
        */
        void addStann(Stann player);
        /**
        add a hance to the level
        */
        void addHance();

    protected:

    private:
        Stann player;
        Hance hance;
        vector<Hance> hances[];

};

#endif // LEVEL_H
