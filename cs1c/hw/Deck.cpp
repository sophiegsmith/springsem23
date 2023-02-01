/***********************************************************************************************************
 * File: Deck.cpp
************************************************************************************************************
* Description: This file contains the description for the attributes and methods declared in Deck class
************************************************************************************************************/
#include"Deck.h"

/*************  Deck  **************************************************************************************
 * Description: This constructor sets the initial values of all attributes of Card by calling the member 
 * function initialDeck.
 * Input: initialDeck has to have a function definition.
 * Output: This function will create a Deck object with initiated values.
************************************************************************************************************/
Deck::Deck()
{
    initialDeck();
}

/*************  initialDeck  ************************************************************************************
 * Description: This method initializes values of a constructed Card array.
 * Input: Card object and its member functions setSuit and setRank need to be defined
 * Output:  This function will initialize values of a Deck object.
************************************************************************************************************/
void Deck::initialDeck()
{
    int i = 0;
    int suit;
    int rank;
    for(suit = SPADES; suit < 4; suit++)
    {
        for(rank = TWO; rank < 13; rank++)
        {
            deckofcards[i].setSuit(suits(suit));
            deckofcards[i].setRank(ranks(rank));
            i++;
        }
    }
}

/*************  perfectshuffle  *****************************************************************************
 * Description: This method performs a perfect shuffle on an existing deck
 * Input: deckofcards: deck of cards, Card object needs to be defined
 * Output: returns nothig
************************************************************************************************************/
void Deck::perfectshuffle()
{
	const int TEMP_DECKSIZE = 52;
	const int HALF_DECKSIZE = 26;

	int i1; //index1
	int i2; //index2
	int temp; 

	Card tempDeck[TEMP_DECKSIZE];

	temp = 0;
	i2 = HALF_DECKSIZE;
	for (i1 = 0; i1 < HALF_DECKSIZE; i1++)
	{
		tempDeck[temp] = deckofcards[i1];
		temp++;

		tempDeck[temp] = deckofcards[i2];
		temp++;
		i2++;
	}

	for (i1 = 0; i1 < DECKOFCARDS; i1++)
	{
		deckofcards[i1] = tempDeck[i1];
	}
}

/*************  printDeck  *********************************************************************************
 * Description: This method nothing but prints all contents of all indexes in the Card array
 * Input: deckofcards: deck of cards, Card object needs to be defined
 * Output: This function will print all contents of the Card array
************************************************************************************************************/
void Deck::printDeck()
{
    for (int i = 0; i < DECKOFCARDS; i++)
    {
        cout << setw(2);
        deckofcards[i].print();
        cout << ", ";
    }
}

/*************  compare  ************************************************************************************
 * Description: this method is to compare Deck object and compares the caller's contents to the contents of 
 * the received Deck object. Returns a boolean variable.
 * Input: deckofcards: deck of cards, comparedeck: deck to be compared
 * Output: this will return bool variable
************************************************************************************************************/
bool Deck::compare(Deck comparedeck)
{
    for (int i = 0; i < DECKOFCARDS; i++)
    {
        if((deckofcards[i].getRank() != comparedeck.deckofcards[i].getRank()) 
            || (deckofcards[i].getSuit() != comparedeck.deckofcards[i].getSuit()))
            {
                return false;
            }
    }
    return true;
}