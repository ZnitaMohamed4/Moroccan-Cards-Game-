#include "deck.h"
#include <algorithm>
#include <QRandomGenerator>

Deck::Deck()
{
    // Initialize the deck with all combinations of suits and ranks
    for (int suite = Hearts; suite <= Spades; ++suite)
    {
        for (int rang = One; rang <= Twelve; ++rang)
        {
            cartes.push_back(Carte(static_cast<Suit>(suite), static_cast<Rank>(rang)));
        }
    }

    // initialement, aucune carte n'a ete distribuee du paquet.
    IndexeCarte = 0;
}

void Deck::shuffle()
{
    // Shuffle the deck using the Fisher-Yates algorithm
    std::random_shuffle(cartes.begin(), cartes.end());


    // l'initialisation de l'index apres le melange assure que chaque carte a une chance egale
    //  d'etre la premiere a etre distribuee
    IndexeCarte = 0;
}

Carte Deck::DistribuerCarte()
{
    // Check if there are cards remaining in the deck
    if (!isEmpty())
    {
        // Generate a random index to select a card
        int randomIndex = QRandomGenerator::global()->bounded(
            static_cast<quint32>(IndexeCarte), static_cast<quint32>(cartes.size()));


        //  Cela garantit qu'une carte n'est pas selectionnee a nouveau.
        std::swap(cartes[IndexeCarte], cartes[randomIndex]);

        // Return the selected card and increment the index
        return cartes[IndexeCarte++];
    }
    else
    {
        // Return an invalid card if the deck is empty
        return Carte(InvalidSuit, InvalidRank);
    }
}

bool Deck::isEmpty() const
{
    // Check if all cards have been dealt
    return IndexeCarte >= cartes.size();
}


void Deck::resetDeck()
{
    // Reinitialize the deck with all combinations of suits and ranks
    cartes.clear();
    for (int suite = Hearts; suite <= Spades; ++suite)
    {
        for (int rang = One; rang <= Twelve; ++rang)
        {
            cartes.push_back(Carte(static_cast<Suit>(suite), static_cast<Rank>(rang)));
        }
    }

    // Reset the currentCardIndex
    IndexeCarte = 0;
}
