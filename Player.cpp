#include <algorithm>
#include <random>  // for std::default_random_engine and std::random_device
#include "Deck.h"

// Class representing a player in a card game
class Player {
public:
    string playerName;  // Name of the player
    int cardAtHand;     // Card currently held by the player
    int score;          // Player's score in the game

    // Function to make the player take a card
    void takeCard(int card) {
        // This function sets the card at hand to the provided card
        cardAtHand = card;
    }

    // Function to get the player's score
    int getScore() {
        // Returns the player's score
        return score;
    }
};