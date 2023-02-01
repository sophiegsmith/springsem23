/***********************************************************************************************************
 * File: Card.cpp
************************************************************************************************************
* Description: This file contains the description for the attributes and methods declared in Card class
************************************************************************************************************/
#include"Card.h"

/*************  Card()  ************************************************************************************
 * Description: Default Constructor
 * Input: no input
 * Output: creates a Card object with default values
************************************************************************************************************/
Card::Card()
{
    mycard.rank = TWO;
    mycard.suit = SPADES;
}

/*************  Card()  ************************************************************************************
 * Description: Constructor
 * Input: no input
 * Output: creates a Card object with the values that are modified
************************************************************************************************************/
Card::Card(suits suit, ranks rank)
{
	this->mycard.suit = suit;
	this->mycard.rank = rank;
}

/*************  setSuit  **********************************************************************************
 * Description: Setter Method
 * Input: enum suits
 * Output: sets the object to a suit
************************************************************************************************************/
void Card::setSuit(suits suit)
{
	this->mycard.suit = suit;
}

/*************  setRank  ************************************************************************************
 * Description: Settter Method
 * Input: enum ranks
 * Output:  sets the object to a rank
************************************************************************************************************/
void Card::setRank(ranks rank)
{
	this->mycard.rank = rank;
}

/*************  getSuit  ************************************************************************************
 * Description: "Getter" Method
 * Input: 
 * Output: returns the suit value to card object
************************************************************************************************************/
suits Card::getSuit() const
{
	return mycard.suit;
}

/*************  getRank  ************************************************************************************
 * Description: "Getter" Method
 * Input:
 * Output: returns the rank value to card object
************************************************************************************************************/
ranks Card::getRank() const
{
	return mycard.rank;
}

/*************  print  ************************************************************************************
 * Description: Method for print
 * Input:
 * Output: switch statement for the enum suits and ranks to be assigned with the right values to be outputted
************************************************************************************************************/
void Card::print() const
{
    switch (mycard.rank)
    {
        case TWO:
            cout << "2";
            break;
        case THREE:
            cout << "3";
            break;
        case FOUR:
            cout << "4";
            break;
        case FIVE:
            cout << "5";
            break;
        case SIX:
            cout << "6";
            break;
        case SEVEN:
            cout << "7";
            break;
        case EIGHT:
            cout << "8";
            break;
        case NINE:
            cout << "9";
            break;
        case TEN:
            cout << "10";
            break;
        case JACK:
            cout << "J";
            break;
        case QUEEN:
            cout << "Q";
            break;
        case KING:
            cout << "K";
            break;
        case ACE:
            cout << "A";
            break;
        break;
    }

    switch (mycard.suit)
    {
        case SPADES:
            cout << "S";
            break;
        case HEARTS:
            cout << "H";
            break;
        case CLUBS:
            cout << "C";
            break;
        case DIAMONDS:
            cout << "D";
            break;
    }
}