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
        bool getStatus();
        void displayGame();
        void addStann(Stann player);
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
