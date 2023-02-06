/***********************************************************************************************************
 * Programmer: Sophie Smith
 * Instructor Name: Lebowitz
 * Section: MW 2-4:20 pm
 * Date: 1/26/23
 * Assignment: Assignment 1 - Recursion
 * Description:
 * This program takes a word and uses a recursive function to see if the word inputted is a Palindrome. 
 * It ignores white spaces, capital letters and punctuation.
 ***********************************************************************************************************/
#include<iostream>
#include<string>

using namespace std;

//function prototype
bool isPalindrome(string palindrome, int start, int end);

// ==== main ================================================================================================
//
// ===========================================================================================================
int main()
{
    //declare variables
    string palindrome;      //string varibale for user input to check the phrase is palindrome or not

    //get user input
    cout << "Enter a word (exit to quit): " << endl;
    getline(cin, palindrome);

    //if user enters "exit" the program will terminate
    if (palindrome == "exit")
    {
        system("exit");
    }

    //call the recursive function isPalindrome
    if (isPalindrome(palindrome, 0, palindrome.length() - 1)) {
        cout << palindrome << " is a palindrome" << endl;
    } else {
        cout << palindrome << " is not a palindrome" << endl;
    }

    return 0;
}

// ======= isPalindrome ==================================================================================
// Description:
// This is a recursive function that will check if a phrase or word is a Palindrome by comparing the 
// start of the phrase with the end. It will also ignore punctuation and capitalizations
//
// Input:
// string palindrome - string variable from main function, contains the user input
// int start - int variable to keep track of beginning of word or phrase, and will be used to compare
// int end - int variable to keep track of end of word or phrase, used to compare
//
// Output:
// saves to palindrome in main and where the recursive function is called in main to be 
// outputs whether or not it is/is not a palindrome
// =======================================================================================================
bool isPalindrome(string palindrome, int start, int end)
{
    if (start >= end) {
        return true;
    }
    // check if the current characters are alphanumeric
    if (!isalnum(palindrome[start])) {
        return isPalindrome(palindrome, start + 1, end);
    }
    if (!isalnum(palindrome[end])) {
        return isPalindrome(palindrome, start, end - 1);
    }
    if (tolower(palindrome[start]) != tolower(palindrome[end])) {
        return false;
    }
    return isPalindrome(palindrome, start + 1, end - 1);
}   //end of isPalindrome

/***********************************************************************************************************
 * Description: Outputs the word entered and whether it is a palindrome or not.
 * Input: Racecar, Dad, Mom, Was it a cat I saw?, Saddleback College, CS 1D, No lemon, no melon,
 * a man a plan a canal Panama, The rain in Spain, Radar
 * Output:
Enter a word (exit to quit): 
Racecar
Racecar is a palindrome

Enter a word (exit to quit): 
Dad
Dad is a palindrome

Enter a word (exit to quit): 
Mom
Mom is a palindrome

Enter a word (exit to quit): 
Was it a cat I saw?
Was it a cat I saw? is a palindrome

Enter a word (exit to quit): 
Saddleback College
Saddleback College is not a palindrome

Enter a word (exit to quit): 
CS 1D
CS 1D is not a palindrome

Enter a word (exit to quit): 
No lemon, no melon
No lemon, no melon is a palindrome

Enter a word (exit to quit): 
a man a plan a canal Panama
a man a plan a canal Panama is a palindrome

Enter a word (exit to quit): 
The rain in Spain
The rain in Spain is not a palindrome

Enter a word (exit to quit): 
Radar
Radar is a palindrome

Enter a word (exit to quit): 
exit
***********************************************************************************************************/