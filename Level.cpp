#include "Level.h"

Level::Level()
{
    //ctor
}
Level::Level(int numHances) {

}
{
    //ctor
}
Level::~Level()
{
    //dtor
}
/**
get the status of the player
@return whether the player is alive or not
*/
Level::bool getStatus() {return player.getStatus();}
/**
add a hance to the level
*/
Level::void addHance() {
    Hance h = new Hance();
    hances.push_back(h);
    for (size_t i=hances.size();i>0; i--) {
        levelOne[13][8] = hances.at(i);
        break;
    }
}
/**
add Stann to the level
@param player the player Stann
*/
Level::void addStann(Stann player) {
    levelOne[1][1] = player;
    for (int i = 0; i< 15;i++ ) {
        for(int j=0; j<10;j++ ) {
            if (player.isLocated(levelOne[i][j]) && levelOne[i][j] != 'X' && levelOne[i][j] != hance.getId()) {
                //levelOne[i][j] = player.getId();
            }
        }
    }
}
/**
display the game
*/
Level::void displayGame() {

    for(int i = 0; i < 15; i++) {
        for (int j=0; j < 10; j++) {
            if (player.isLocated(levelOne[i][j])) {
                cout << player.getId();
            }
            for (size_t k = 0; k<hances.size();k++) {
                if (hances.at(k).isLocated(levelOne[i][j])) {
                    cout << hance.getId();
                }
            }
            cout << levelOne[i][j] << endl;
            cout << endl;
            cout << "Stann's position: ";
        }
    }
}
