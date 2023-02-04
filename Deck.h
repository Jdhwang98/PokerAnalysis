//
// Created by Johnny on 2/3/2023.
//

#ifndef POKERANALYSIS_DECK_H
#define POKERANALYSIS_DECK_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include "Card.h"

class Deck {
private:
    Card card;
    std::vector<Card> deck;
    std::vector<Card> hand;
    void print(std::vector<Card> &deck);
    void shuffle(std::vector<Card> &hand);
    void dealHand(std::vector<Card> &hand);
    void makeDeck();
    int randomNumber();

public:
    Deck();
    void print();
};


#endif //POKERANALYSIS_DECK_H
