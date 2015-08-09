
#include "deck.h"

Deck::Deck()
{
    for (unsigned int i(0); i < SUIT_MAX; ++i)
    {
        for (unsigned int j(0); j < RANK_MAX; ++j)
        {
            Card card(i, j);
            m_deck.push_back(card);
        }
    }
}


void Deck::print_Deck() const
{
    unsigned int count(1);

    for (unsigned int i(0); i < m_deck.size(); ++i)
    {
        std::cout << m_deck[i].Card2Str() << " ";
        if ( count == 13 )
        {
          std::cout << std::endl;
          count = 0;
        }
        ++count;
    }
}

void Deck::shuffle_Deck()
{
    std::random_shuffle ( m_deck.begin(), m_deck.end() );
}

void Deck::getOneCard()
{   
    Card cd(m_deck.back().get_suit(), m_deck.back().get_rank());
    m_deck.pop_back();
    std::cout << cd.Card2Str() << std::endl;
}

void Deck::getHand()
{
    for (unsigned int i(0); i < 5; ++i)
    {
        m_hand.push_back(m_deck[i]);
    }
    
    string s1 [5];
    string s=" ";
    
    for (unsigned int i(0); i < 5; ++i)
    {
        s=m_hand[i].Card2Str();
        s1[i]=s.substr(1);
        std::cout << m_hand[i].Card2Str() << " ";
    }
    std::cout << std::endl;

    string swap=" ";
    std::vector<Card> swap2;
      for (unsigned int i(0); i < 5; i++)
      {
        for (unsigned int j(0); j < 4-i; j++)
        {
          if (s1[j] > s1[j+1]) /* For decreasing order use < */
          {
            swap = s1[j];
            s1[j]   = s1[j+1];
            s1[j+1] = swap;
            Card swap2 = m_hand[j];
            m_hand[j] = m_hand[j+1];
            m_hand[j+1] = swap2;
          }
        }
      }
      
      for (unsigned int i(0); i < 5; ++i)
    {
        std::cout << m_hand[i].Card2Str() << " ";
    }
    std::cout << std::endl;
    
}
