#include <iostream>
#include <windows.h>
#include "Game.h"
#include <conio.h>

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



    Game game = *new Game();
    bool playing = game.getStatus();
    unsigned int time = 0;

    while(playing) {
        if(_kbhit) {
            char current = _getch();
            if (current == 'w') {game.updateStann('w');game.updateHance();}
            else if (current == 's') {game.updateStann('s');game.updateHance();}
            else if (current == 'a') {game.updateStann('a');game.updateHance();}
            else if (current == 'd') {game.updateStann('d');game.updateHance();}
            else {
                playing = false;
            }
            time++;
            game.increaseScore();
        }
    }
    cout << "You died!" << endl;
    cout << endl;
    cout << "Your score: " << time;
}
