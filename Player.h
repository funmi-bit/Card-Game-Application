#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    virtual void takeCard(int card) = 0;
    virtual int getScore() const = 0;
    virtual std::string getPlayerName() const = 0;
    virtual void setPlayerName(const std::string& name) = 0;
    virtual ~Player() {}
};
