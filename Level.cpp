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
Level::bool getStatus() {return player.getStatus();}

Level::void addHance() {
    Hance h = new Hance();
    hances.push_back(h);
    for (size_t i=hances.size();i>0; i--) {
        levelOne[13][8] = hances.at(i);
        break;
    }

}

Level::void addStann(Stann player) {
    levelOne[1][1] = player;
    for (int i = 0; i< 15;i++ ) {
        for(int j=0; j<10;j++ ) {
            if (player.isLocated(levelOne[i][j])) {
                //levelOne[i][j] = player.getId();
            }
        }
    }
}

Level::void displayGame() {

    for(int i = 0;i<15;i++) {
        for (int j=0;j<10;j++) {
            if (player.isLocated(levelOne[i][j])) {
                cout<<player.getId();
            }
            for (size_t k = 0; k<hances.size();k++) {
                if (hances.at(k).isLocated(levelOne[i][j])) {
                    cout<<hance.getId();
                }
            }
            cout<<levelOne[i][j]<<endl;
            cout<<endl;
            cout<<"Stann's position: ";
        }
    }
}
