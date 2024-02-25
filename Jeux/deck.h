#ifndef DECK_H
#define DECK_H

#include "carte.h"
#include <vector>

class Deck
{
public:
    Deck();
    void shuffle();
    bool isEmpty() const;
    Carte DistribuerCarte();
    void resetDeck();




private:
    std::vector<Carte> cartes;
    int IndexeCarte; /* entier qui represente l'index de la prochaine carte à distribuer dans le paquet.*/


};

#endif // DECK_H
