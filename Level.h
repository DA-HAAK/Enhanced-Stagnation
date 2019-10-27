#ifndef LEVEL_H
#define LEVEL_H
#include <vector>
#include <iostream>

using namespace std;

class Level
{
    public:
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
        vector<Hance> hances[][];
        const int COL = 10;
        const int ROW = 15;
        char levelOne[ROW][COL] = {(X,X,X,X,X,X,X,X,X,X),
                                   (X, , , , , , , , ,X),
                                   (X, ,X,X, , ,X,X, ,X),
                                   (X, ,X, , , , ,X, ,X),
                                   (X, , , ,X,X, , , ,X),
                                   (X, , , , , , , , ,X),
                                   (X, , , , , , , , ,X),
                                   (X,X, , ,X,X, , ,X,X),
                                   (X, , , , , , , , ,X),
                                   (X, , , , , , , , ,X),
                                   (X, , , ,X,X, , , ,X),
                                   (X, ,X, , , , ,X, ,X),
                                   (X, ,X,X, , ,X,X, ,X),
                                   (X, , , , , , , , ,X),
                                   (X,X,X,X,X,X,X,X,X,X)};
};

#endif // LEVEL_H
