/***********************************************************************************************************
 * File: Deck.h
************************************************************************************************************
* Description: This is a derived class from Card class. The deck class contains these attributes:
* Deck()
* initialDeck()
* perfectshuffle()
* printDeck()
* compare()
************************************************************************************************************/
#ifndef DECK_H_
#define DECK_H_

#include"Card.h"
#include<iomanip>

class Deck{
private:
    static const int DECKOFCARDS = 52;
    Card deckofcards[DECKOFCARDS];
public:
    Deck();
    //The default constructor sets initalizes Deck object with the ranks and suits in order

    void initialDeck();
    // Method: initialDeck
    // arranges deck object with suits {spades, hearts, clubs, diamonds} and ranks {2,3,4...A}

    void perfectshuffle();
    // Method: perfectshuffle
    // splits the deck in half and to perform perfect shuffle

    void printDeck();
    // Method: printDeck
    // prints the deck in order with ranks and suits starting at spades

    bool compare(Deck comparedeck);
    // Method: bool compare
    // this method is to compare Deck object and compares the caller's contents to the contents of the received Deck object. 
    //Returns a boolean variable.

};
#endif