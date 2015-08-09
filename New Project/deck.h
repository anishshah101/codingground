#ifndef DECK_H
#define DECK_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include "card.h"

using namespace std;

class Deck
{ 
public:
      explicit Deck();
      void print_Deck() const;
      void shuffle_Deck();
      void getOneCard();
      void getHand();
private:
    std::vector<Card> m_deck;
    std::vector<Card> m_hand;
};

#endif