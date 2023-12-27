// CardGame.cpp
#include "CardGame.h"

using namespace std;

// Constructor initializes the game with three players and sets the current round to 0
CardGame::CardGame() : currentRound(0) {
    players[0] = new ConcretePlayer("PlayerOne");
    players[1] = new ConcretePlayer("PlayerTwo");
    players[2] = new ConcretePlayer("PlayerThree");
}

// Starts the game by shuffling the deck and initiating the first round
void CardGame::startGame() {
    myDeck.shuffle();
    playRound();
}

// Handles the logic for each round of the game
void CardGame::playRound() {
    for (int i = 0; i < 3; ++i) {
        int randomIndex = rand() % 50;
        int randomCard = myDeck.deckCards[randomIndex];

        if (myDeck.deckCards[randomIndex] != -1) {
            myDeck.dealCard(randomCard);

            if (i == 0) {
                // PlayerOne picks a card
                cout << players[i]->getPlayerName() << ", choose a card from 0 to 9: ";
                int userSelectedCard;
                cin >> userSelectedCard;

                // Validate user input for playerOne
                if (userSelectedCard >= 0 && userSelectedCard <= 9) {
                    players[i]->takeCard(userSelectedCard);
                    cout << players[i]->getPlayerName() << " has chosen card " << userSelectedCard << endl;
                } else {
                    cout << "Invalid card selection. Please choose a card from 0 to 9." << endl;
                    // If input is invalid, decrement the loop counter to repeat the iteration for the same player
                    --i;
                }
            } else {
                // PlayerTwo and PlayerThree get a random card
                int randomCardForOtherPlayers = rand() % 10;
                players[i]->takeCard(randomCardForOtherPlayers);
                cout << players[i]->getPlayerName() << " has chosen card " << randomCardForOtherPlayers << endl;
            }

            int remainingCards = myDeck.getRemainingCards();
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

// Determines the winner of the game based on the players' scores
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

    // Clean up memory
    for (int i = 0; i < 3; ++i) {
        delete players[i];
    }
}

// Destructor
CardGame::~CardGame() {
    
}
