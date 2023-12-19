#include "CardGame.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>

using namespace std;

CardGame::CardGame() : currentRound(0) {
    players[0] = new ConcretePlayer("PlayerOne");
    players[1] = new ConcretePlayer("PlayerTwo");
    players[2] = new ConcretePlayer("PlayerThree");
}
void CardGame::startGame() {
    myDeck.shuffle();
    playRound();
}