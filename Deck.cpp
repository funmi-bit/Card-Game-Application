#include <algorithm>
#include <random>  // for std::default_random_engine and std::random_device
#include "Deck.h"

void Deck::shuffle() {

    std::random_device rd;

    std::default_random_engine rng(rd());

    // Shuffle the deck using the random engine
    std::shuffle(std::begin(deckCards),std::end(deckCards), rng);
}

void Deck::dealCard(int card) {
    for (int i = 0; i < 50; ++i) {
        if (deckCards[i] == card) {
            deckCards[i] = -1;
            break;
        }
    }
}

int Deck::getRemainingCards() {
    int count = 0;
    for (int i = 0; i < 50; ++i) {
        if (deckCards[i] != -1) {
            count++;
        }
    }
    return count;
}
