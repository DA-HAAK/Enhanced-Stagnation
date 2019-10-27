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
    protected:

    private:
        Level level;
        int score;
        Stann player;
        Hance hance;

};

#endif // GAME_H
