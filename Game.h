#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <windows.h>
#include "Hance.h"
#include "Stann.h"
#include "Level.h"

using namespace std;

class Game
{
    public:
        Game();
        virtual ~Game();
        /**
        gets the status of the game (playing or finished)
        @return the status of the game
        */
        bool getStatus();
        /**
        increases the difficulty via adding a hance to the playing field
        */
        void increaseDifficulty();
        /**
        sets up the player Stann
        */
        void setUpPlayer();
        /**
        sets up the bad guy, Hance
        */
        void setUpHance();
        /**
        updates the position of Stann
        */
        void updateStann(char dir);
        /**
        updates the number of Hance and the position of the Hance
        */
        void updateHance();

        //void update();
        /**
        create a new Hance at the Hance spawn point
        */
        Hance createHance();
        /**
        checks for collision between Hance and Stann
        @param p the position
        */
        void checkForCollision(Position p);
        /**
        increases the score
        */
        void increaseScore();
    protected:

    private:
        Level level;
        int score;
        Stann player;
        Hance hance;
        vector<Hance> hances[];

};

#endif // GAME_H
