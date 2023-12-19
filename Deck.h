#ifndef DECK_H
#define DECK_H

#include <algorithm>

class Deck {
public:
int deckCards[50] = {
    0,0,0,0,0,1,1,1,1,1,
    2,2,2,2,2,3,3,3,3,3,
    4,4,4,4,4,5,5,5,5,5,
    6,6,6,6,6,7,7,7,7,7,
    8,8,8,8,8,9,9,9,9,9
};
    void shuffle();
    void dealCard(int card);
    int getRemainingCards();
};

#endif // DECK_H