#include "Game.h"
#include "Stann.h"

Game::Game()
{
    level = new Level();//ask user for level
    level.initializeWorld();
    level.draw();
}

Game::~Game()
{
    //dtor
}

/**
gets the status of the game (playing or finished)
@return the status of the game
*/
Game::bool getStatus() {
    return level.getStatus();
}
/**
increases the difficulty via adding a hance to the playing field
*/
Game::void increaseDifficulty() {
    level.addHance(hance);
}
/**

*/
Game::void setUpPlayer() {
    level.setUpPlayer(Stann p);
}

Game::void setUpHance() {
    badGuy = createHance(13,8);
    level.addHance(hance);
}
Game::void updateStann(char dir) {
    player.changePos(dir);
}
Game::void updateHance() {
    //hance.wander
}
Game::void update() {updateStann(); updateHance();}
