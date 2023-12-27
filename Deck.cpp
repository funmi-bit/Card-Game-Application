#include <algorithm>
#include <random>  // for std::default_random_engine and std::random_device
#include "Deck.h"

// Shuffles the deck of cards
void Deck::shuffle() {

    // Seed the random number generator with a random device
    std::random_device rd;

    // Create a random number engine using the random device
    std::default_random_engine rng(rd());

    // Shuffle the deck using the random engine
    std::shuffle(std::begin(deckCards), std::end(deckCards), rng);
}

// Deals a specific card from the deck
void Deck::dealCard(int card) {
    // Iterate through the deck to find and mark the dealt card
    for (int i = 0; i < 50; ++i) {
        if (deckCards[i] == card) {
            deckCards[i] = -1; // Mark the dealt card
            break;
        }
    }
}

// Returns the number of remaining cards in the deck
int Deck::getRemainingCards() {
    int count = 0;

    // Count the remaining undealt cards in the deck
    for (int i = 0; i < 50; ++i) {
        if (deckCards[i] != -1) {
            count++;
        }
    }

    return count;
}
