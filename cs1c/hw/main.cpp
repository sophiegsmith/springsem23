/***********************************************************************************************************
 * Programmer: Sophie Smith
 * Instructor Name: Bodhanwala
 * Section: MW 7:30-9:50pm
 * Date: 2/1/23
 ***********************************************************************************************************
 * Attached: Assignment Perfect Shuffle
 * File: main.cpp
 ***********************************************************************************************************
 * Program: Perfect Shuffle
 ***********************************************************************************************************
 * Description: 
 * This program is supposed to conduct a Perfect Shuffle. A perfect shuffle is a evebt that happens 
 * when you split the deck in half and then interleaving the cards from each half deck. If you keep 
 * performing a perfect shuffle on a deck of cards, 52 in total with 4 suits and 13 ranks, it will 
 * eventually return back to the original deck. Additionally, the program requires a printing of an initial 
 * deck, printing output after the first perfect shuffle, a shuffle count, comparison of first deck and the
 * shuffled deck to see if they are the same, and a printing of the final shuffled deck if its back in its 
 * original configuration. 
 * This program includes inheritance, enums, arrays, and a hiearchy that follows:
 * class Card - base class
 * class Deck - derives from base class
************************************************************************************************************/
#include<iostream>
#include"Card.h"
#include"Deck.h"

using namespace std;


int main()
{
    cout<< "PERFECT SHUFFLE" << endl << endl;

    int shufflecount;

    //make a Deck object
    Deck deck1;     //this object will be for the initial deck of cards
    Deck deck2;     //this object will be to compare to deck1 object after perfect shuffling

    //print the original deck of cards
    cout << "Original Deck" << endl;
    deck1.printDeck();
    cout << endl << endl;

    //conduct perfect shuffling
    cout << "Perform Perfect Shuffling....." << endl << endl;
    deck2.perfectshuffle();
    cout << "Deck after 1st Perfect Shuffle " << endl;
    deck2.printDeck();
    cout << endl << endl;

    //initialize int variable shuffle count to `1
    shufflecount = 1;
    cout << "Shuffle Count: " << shufflecount << endl;
    while(deck2.compare(deck1)==false)
    {
        deck2.perfectshuffle();
        shufflecount++;
        cout << "Shuffle Count: " << shufflecount << endl;
    }
    
    cout << "\nThe number of shuffles it took for the deck to return to its initial configuration is: " << shufflecount << endl;

    //print the final deck if it is a perfect shuffle
    cout << "\nThe final deck after perfect shuffle is: " << endl;
    deck2.printDeck();

    return 0;
}//end of main

/***********************************************************************************************************
 * Output:
PERFECT SHUFFLE

Original Deck
 2S,  3S,  4S,  5S,  6S,  7S,  8S,  9S, 10S,  JS,  QS,  KS,  AS,  2H,  3H,  4H,  5H,  6H,  7H,  8H,  9H, 10H,  
 JH,  QH,  KH,  AH,  2C,  3C,  4C,  5C,  6C,  7C,  8C,  9C, 10C,  JC,  QC,  KC,  AC,  2D,  3D,  4D,  5D,  6D,  
 7D,  8D,  9D, 10D,  JD,  QD,  KD,  AD, 

Perform Perfect Shuffling.....

Deck after 1st Perfect Shuffle 
 2S,  2C,  3S,  3C,  4S,  4C,  5S,  5C,  6S,  6C,  7S,  7C,  8S,  8C,  9S,  9C, 10S, 10C,  JS,  JC,  QS,  QC, 
 KS,  KC,  AS,  AC,  2H,  2D,  3H,  3D,  4H,  4D,  5H,  5D,  6H,  6D,  7H,  7D,  8H,  8D,  9H,  9D, 10H, 10D,  
 JH,  JD,  QH,  QD,  KH,  KD,  AH,  AD, 

Shuffle Count: 1
Shuffle Count: 2
Shuffle Count: 3
Shuffle Count: 4
Shuffle Count: 5
Shuffle Count: 6
Shuffle Count: 7
Shuffle Count: 8

The number of shuffles it took for the deck to return to its initial configuration is: 8

The final deck after perfect shuffle is: 
 2S,  3S,  4S,  5S,  6S,  7S,  8S,  9S, 10S,  JS,  QS,  KS,  AS,  2H,  3H,  4H,  5H,  6H,  7H,  8H,  9H, 10H, 
 JH,  QH,  KH,  AH,  2C,  3C,  4C,  5C,  6C,  7C,  8C,  9C, 10C,  JC,  QC,  KC,  AC,  2D,  3D,  4D,  5D,  6D,  
 7D,  8D,  9D, 10D,  JD,  QD,  KD,  AD,
************************************************************************************************************/