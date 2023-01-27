/***********************************************************************************************************
 * Programmer: Sophie Smith
 * Instructor Name: Lebowitz
 * Section: MW 2-4:20 pm
 * Date: 1/26/23
 * Description:
 * This program takes a word and uses a recursive function to see if the word inputted is a Palindrome. 
 * It ignores white spaces, capital letters and punctuation.
 ***********************************************************************************************************/
#include<iostream>

using namespace std;

//function prototype

//main function --> driver function
int main()
{
    //declaring variables
    string palindrome;      //user input for sentence that is/is not a palindrome


    //get user input
    cout << "Enter a word (exit to quit): " << endl;
    cin >> palindrome;

    //check if user wants to exit the program
    if(palindrome == "exit")
    {
        system("clear");        //this will terminate the program
    }

    return 0;
} //end of main

/***********************************************************************************************************
 * Description: Outputs the word entered and whether it is a palindrome or not.
 * * Output:
 ***********************************************************************************************************/