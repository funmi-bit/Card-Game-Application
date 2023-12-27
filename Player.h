// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Abstract base class representing a player in the card game
class Player {
public:
    virtual void takeCard(int card) = 0;
    virtual int getScore() const = 0;
    virtual std::string getPlayerName() const = 0;
    virtual void setPlayerName(const std::string& name) = 0;
    virtual ~Player() {}
};

// Concrete implementation of the player
class ConcretePlayer : public Player {
public:
    std::string playerName;
    int cardAtHand;
    int score;

    // Constructor initializes a ConcretePlayer with a given name
    ConcretePlayer(const std::string& name);

    // Takes a card and updates the player's hand and score
    void takeCard(int card) override;

    // Returns the player's current score
    int getScore() const override;

    // Returns the player's name
    std::string getPlayerName() const override;

    // Sets the player's name
    void setPlayerName(const std::string& name) override;
};

#endif // PLAYER_H
