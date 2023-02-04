//
// Created by Johnny on 2/3/2023.
//

#include "Deck.h"
#include <random>

Deck::Deck() {

    makeDeck();
    shuffle(deck);
    dealHand(hand);

}

void Deck::makeDeck() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (i == 0)card.suit = CLUB;
            if (i == 1)card.suit = SPADE;
            if (i == 2)card.suit = HEART;
            if (i == 3)card.suit = DIAMOND;
            if(j == 0) {
                card.rank = ACE;
                deck.push_back(card);
            }
            else if (j == 1) {
                card.rank = TWO;
                deck.push_back(card);
            }
            else if (j == 2) {
                card.rank = THREE;
                deck.push_back(card);
            }
            else if (j == 3) {
                card.rank = FOUR;
                deck.push_back(card);
            }
            else if (j == 4) {
                card.rank = FIVE;
                deck.push_back(card);
            }
            else if (j == 5) {
                card.rank = SIX;
                deck.push_back(card);
            }
            else if (j == 6) {
                card.rank = SEVEN;
                deck.push_back(card);
            }
            else if (j == 7) {
                card.rank = EIGHT;
                deck.push_back(card);
            }
            else if (j == 8) {
                card.rank = NINE;
                deck.push_back(card);
            }
            else if (j == 9) {
                card.rank = TEN;
                deck.push_back(card);
            }
            else if (j == 10) {
                card.rank = JACK;
                deck.push_back(card);
            }
            else if (j == 11) {
                card.rank = QUEEN;
                deck.push_back(card);
            }
            else if (j == 12) {
                card.rank = KING;
                deck.push_back(card);
            }
        }
    }
}

void Deck::shuffle(std::vector<Card> &deck) {
    std::shuffle(deck.begin(),deck.end(), std::mt19937(std::random_device()()));
}

void Deck::print(std::vector<Card> &hand) {
    for (auto i : hand) {
        std::cout << "Suit: " << i.suit << "  Rank: " << i.rank << std::endl;
    }
}

void Deck::print() {
    std::cout << "This is not your hand: \n";
    print(hand);
}

void Deck::dealHand(std::vector<Card> &hand) {
    for (int i = 0; i < 5; i++) {
        hand.push_back(deck[i]);
    }
}

int Deck::randomNumber() {
    std::srand(time(0));
    return rand() % 10;
}
