#include "Game.h"
#include "Stann.h"

Game::Game()
{
    level = *new Level();//ask user for level
    level.displayGame();
    setUpPlayer();
    setUpHance();
}
/*
Game::~Game()
{
    //dtor
}
*/
/**
gets the status of the game (playing or finished)
@return the status of the game
*/
bool Game::getStatus() {
    return level.getStatus();
}
/**
increases the difficulty via adding a hance to the playing field
*/
void Game::increaseDifficulty() {
    level.addHance(hance);
}
/**
sets up the player Stann
*/
void Game::setUpPlayer() {
    level.addStann(Stann p);
}
/**
sets up the bad guy, Hance
*/
void Game::setUpHance() {
    Hance badGuy = createHance();
    level.addHance(badGuy);
    hances.push_back(badGuy);
}
/**
updates the position of Stann
*/
void Game::updateStann(char dir) {
    player.changePos(dir);
    void checkForCollision(dir);
}
/**
updates the number of Hance and the position of the Hance
*/
void Game::updateHance() {
     unsigned tik = score % 4;
    if(tik==0) {level.addHance();}
    hance.wander();
}
//Game::void update() {updateStann(); updateHance();}
/**
create a new Hance at the Hance spawn point
*/
Hance Game::createHance() {
    return *new Hance(5, 8);
}
/**
checks for collision between Hance and Stann
@param p the position
*/
void Game::checkForCollision(Position p) {
    for (size_t i = 0; i < hances.size(); i++) {
        if (player.getPosition() == hances.at(i) ) {
            if(player.getDir() =='w' && hances.at(i).getDir() == 's') {hances.at(i).erase();}
            else { player.healthDown(); hances.at(i).erase();}
            if(player.getDir() =='a' && hances.at(i).getDir() == 'd') {hances.at(i).erase();}
            else { player.healthDown(); hances.at(i).erase();}
            if(player.getDir() =='s' && hances.at(i).getDir() == 'w') {hances.at(i).erase();}
            else { player.healthDown(); hances.at(i).erase();}
            if(player.getDir() =='d' && hances.at(i).getDir() == 'a') {hances.at(i).erase();}
            else { player.healthDown(); hances.at(i).erase();}
        }
    }
)
/**
increases the score
*/
void Game::IncreaseScore() {score++;}
