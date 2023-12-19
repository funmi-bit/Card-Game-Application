#include "Player.h"
ConcretePlayer::ConcretePlayer(const std::string& name) : playerName(name), cardAtHand(0), score(0) {}

void ConcretePlayer::takeCard(int card) {
    cardAtHand = card;
    score += card;
}

int ConcretePlayer::getScore() const {
    return score;
}

std::string ConcretePlayer::getPlayerName() const {
    return playerName;
}

void ConcretePlayer::setPlayerName(const std::string& name) {
    playerName = name;
}