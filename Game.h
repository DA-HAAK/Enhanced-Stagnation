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
        bool getStatus();
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
