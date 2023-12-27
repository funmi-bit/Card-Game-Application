// Player.cpp
#include "Player.h"

// Constructor for ConcretePlayer
ConcretePlayer::ConcretePlayer(const std::string& name) : playerName(name), cardAtHand(0), score(0) {}

// Takes a card and updates the player's hand and score
void ConcretePlayer::takeCard(int card) {
    cardAtHand = card;
    score += card;
}

// Returns the player's current score
int ConcretePlayer::getScore() const {
    return score;
}

// Returns the player's name
std::string ConcretePlayer::getPlayerName() const {
    return playerName;
}

// Sets the player's name
void ConcretePlayer::setPlayerName(const std::string& name) {
    playerName = name;
}
