#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

// Class representing a deck of cards
class Deck {
public:
    int deckCards[50] = {
        0,0,0,0,0,1,1,1,1,1,
        2,2,2,2,2,3,3,3,3,3,
        4,4,4,4,4,5,5,5,5,5,
        6,6,6,6,6,7,7,7,7,7,
        8,8,8,8,8,9,9,9,9,9
    };

    // Function to shuffle the deck
    void shuffle() {
        // Shuffles the order of cards in the deck
        // For simplicity, we're using a basic shuffling method here
        // In a real-world scenario, you might use a more sophisticated algorithm
        random_shuffle(begin(deckCards), end(deckCards));
    }

    // Function to deal a card from the deck
    void dealCard(int card) {
        // Simulates taking a specific card from the deck
        // Marks the card as dealt, assuming -1 is not a valid card
        for (int i = 0; i < 50; ++i) {
            if (deckCards[i] == card) {
                deckCards[i] = -1;
                break;
            }
        }
    }

    // Function to get the number of remaining cards in the deck
    int getRemainingCards() {
        // Counts and returns the number of cards that haven't been dealt
        int count = 0;
        for (int i = 0; i < 50; ++i) {
            if (deckCards[i] != -1) {
                count++;
            }
        }
        return count;
    }
};