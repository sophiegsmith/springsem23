/***********************************************************************************************************
 * File: Card.h
************************************************************************************************************
* Description: This is a base class that contains enums to represent 4 faces of the card and its ranks. 
It also contains a struct to represent a card with a suit and rank. The class Card contains these 
attributes and methods:
* Card()
* Card(suits suit, ranks rank)
* setSuit()
* setRank()
* getSuit()
* getRank()
* print()
************************************************************************************************************/
#ifndef CARD_H_
#define CARD_H_

#include<iostream>
#include<string>

using namespace std;

//enum to represent the suits of the cards
enum suits{SPADES, HEARTS, CLUBS, DIAMONDS};

//enum to represent the ranks of the cards
enum ranks{TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

class Card
{
    //a struct to represent a card containing data members such as the enum types of suits and ranks
    struct cardStruct
        {
            suits suit; // suit of the card
            ranks rank; // rank of the card
        };
private:
    cardStruct mycard;      //type struct representing suit and rank of card
public:
    Card();
    //Default Constructor: Class card
    // The default constructor sets inital values of all the attributes of the class. 
    // It also creates a Card object with the initial values

    Card(suits suit, ranks rank);
    //Constructor: Class Card
    // This constructor sets initial values with the values

    void setSuit(suits suit);
    // Method: getSuit
    // The method setSuit receives enum value (suits) and updates the suit attribute. It also update suit value for card object
    // it returns nothing

    void setRank(ranks rank);
    // Method: setRank
    // The method setRuit receives enum value (ranks) and updates the suit attribute. It also update rank value for card object
    // it returns nothing

    suits getSuit() const;
    // Method: getSuit
    // The method getSuit will return the suit of the card object

    ranks getRank() const;	
    // Method: getRank
    // The method getRank will return the rank of the card object
    
    void print() const;
    //Method: print
    // This method will print the attributes of the Card object
};
#endif