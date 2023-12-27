#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CardGame.h"
#include "Player.h"
#include "Deck.h"

using namespace std;

int main() {
    // random number generator with the current time
    srand(time(0));
    // instance of the crd game
    CardGame myCardGame;
    // starting the game
    myCardGame.startGame();

    return 0;
}