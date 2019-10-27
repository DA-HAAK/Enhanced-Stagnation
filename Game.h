#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <windows.h>
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
        
        */
        void setUpPlayer();
        void setUpHance();
        void updateStann(char dir);
        void updateHance();
        void update();
        Hance createHance();
        void checkForCollision(Position p);
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
