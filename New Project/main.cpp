#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>

#include "card.h"
#include "deck.h"

int main()
{
    srand (time(NULL));

    Deck _deck; 
    _deck.print_Deck();
    std::cout << std::endl;
    
    _deck.shuffle_Deck();
    _deck.print_Deck();
    std::cout << std::endl;
    
    _deck.getHand();
    return 0;
}
