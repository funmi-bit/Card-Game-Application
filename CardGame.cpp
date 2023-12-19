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
void CardGame::playRound() {
    for (int i = 0; i < 3; ++i) {
        int randomIndex = rand() % 50;
        int randomCard = myDeck.deckCards[randomIndex];

        if (myDeck.deckCards[randomIndex] != -1) {
            myDeck.dealCard(randomCard);
            players[i]->takeCard(randomCard);

            int remainingCards = myDeck.getRemainingCards();
          cout << players[i]->getPlayerName() << " has number " << randomCard << " card at hand" << endl;
            cout << "Remaining cards in the deck: " << remainingCards << endl << endl << endl << endl;
            
        } else {
            cout << "No cards left in the deck." << endl;
        }
    }

    currentRound++;
    if (currentRound < 5) {
        playRound();
    } else {
        determineWinner();
    }
}

void CardGame::determineWinner() {
    int maxScore = -1;
    int winnerIndex = -1;

    for (int i = 0; i < 3; ++i) {
        int playerScore = players[i]->getScore();
        cout << players[i]->getPlayerName() << " Score: " << playerScore << endl << endl;

        if (playerScore > maxScore) {
            maxScore = playerScore;
            winnerIndex = i;
        }
    }
        cout << "---------------Game Over-------------" << endl;
    cout << "Winner: " << players[winnerIndex]->getPlayerName() << endl;