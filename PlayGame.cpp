#include <iostream>
#include <windows.h>
#include "Game.h"

using namespace std;

int main() {
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
