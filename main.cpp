#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CardGame.h"
#include "Player.h"
#include "Deck.h"

using namespace std;

int main() {
    srand(time(0));

    CardGame myCardGame;
    myCardGame.startGame();

    return 0;
}
