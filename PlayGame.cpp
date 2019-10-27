#include <iostream>
#include <windows.h>
#include "Game.h"

using namespace std;

int main() {
    cout << "///////////////////////////////////////////////////////" << endl <<
            "            Welcome to Enhanced Stagnation             " << endl <<
            "///////////////////////////////////////////////////////" << endl <<
            endl;
    cout << "Controls:" << endl <<
            endl <<
             "             [w]       =           [up]                " << endl <<
             "         [a] [s] [d]   =   [left] [down] [right]       " << endl <<
            endl;
     cout << "Press any other keys to quit." << endl <<
             "-------------------------------------------------------" << endl <<
             "Goal:" << endl <<
             endl <<
             "Survive as long as you can." << endl <<
              "-------------------------------------------------------" << endl;
     cout << "Gameplay:" << endl <<
             endl <<
             "The player Stann ( a variant of 'v', '<', '>', or '^' )" << endl <<
             "can go in any direction for one space per turn, but the" << endl <<
             "same goes for the Hance, who are innumerable and have  " << endl <<
             "decided to make Stann their next meal. They are the    " << endl <<
             "enhanced, for they can steadily create more of their   " << endl <<
             "ilk, while stand-still Stann is stuck in the stagnation" << endl <<
             "of being unable to heal or increase in number. But he  " << endl <<
             "still stands steadfast and fights to stay alive, his   " << endl <<
             "point being an impenetrable sheild, impervious to the  " << endl <<
             "damage that the Hance try to burden him with.          " << endl;
     cout << endl <<
             "See how long you can make Stann survive this onslaught." <<
             endl <<
             endl;
    cout << "////////////////////////////////////////////////////////" << endl <<
            "Press any enter to start your battle.   " << endl <<
            "////////////////////////////////////////////////////////" << endl;
    string dummy;
    getline(cin, dummy);
            
    

    Game game = new Game();
    bool playing = game.getStatus();

    while(playing) {
        if(_kbhit) {
            char current = _geth();
            if (current == 'w') {game.update('w');}
            else if (current == 's') {game.update('s');}
            else if (current == 'a') {game.update('a');}
            else if (current == 'd') {game.update('d');}
            else {
                playing = false;
            }
        }
    }
}
