#ifndef CARDGAME_H
#define CARDGAME_H
#include <iostream>
#include "Player.h"
#include "Deck.h"
class CardGame {
public:
    int currentRound;
    Deck myDeck;
    Player* players[3];

    CardGame();
    void startGame();
    void playRound();

    void determineWinner();
    ~CardGame();
};

#endif // CARDGAME_H