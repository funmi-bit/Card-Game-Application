#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CardGame.cpp"
#include "Deck.cpp"
#include "Player.cpp"

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator

    Player PlayerOne;
    Player PlayerTwo;
    Player PlayerThree;
    PlayerOne.playerName = "playerOne";
    PlayerTwo.playerName = "playerTwo";
    PlayerThree.playerName = "playerThree";

    Deck myDeck; // Creates a deck of cards
    myDeck.shuffle(); // Shuffles the deck

    // Generate a random index to access a random number from the array
    int randomIndex = rand() % 50;
    int randomCard = myDeck.deckCards[randomIndex];

    if (myDeck.deckCards[randomIndex] != -1) {
        // Mark the chosen card as dealt
        myDeck.dealCard(randomCard);

        // Update remaining cards count
        int remainingCards = myDeck.getRemainingCards();

        cout << PlayerOne.playerName << " has number " << randomCard << " card at hand" << endl;
        cout << "Remaining cards in the deck: " << remainingCards << endl;

      cout << PlayerTwo.playerName << " has number " << randomCard << " card at hand" << endl;
      cout << "Remaining cards in the deck: " << remainingCards- 1 << endl;

      cout << PlayerThree.playerName << " has number " << randomCard << " card at hand" << endl;
      cout << "Remaining cards in the deck: " << remainingCards -2 << endl;
    } else {
        cout << "No cards left in the deck." << endl;
    }

    return 0; // Indicates successful program execution
}#include <iostream>
using namespace std;