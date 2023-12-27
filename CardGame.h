// CardGame.h
#ifndef CARDGAME_H
#define CARDGAME_H

#include <iostream>
#include "Player.h"
#include "Deck.h"

// Class representing a card game
class CardGame {
public:
    int currentRound;
    Deck myDeck;
    Player* players[3];

    CardGame();  // Constructor
    void startGame();
    void playRound();
    void determineWinner();
    ~CardGame();  // Destructor
};

#endif // CARDGAME_H
