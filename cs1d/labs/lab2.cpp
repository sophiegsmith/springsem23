/***********************************************************************
* NAME     : Souzen Khan and Sophie Smith
* CLASS    : CS1D
* SECTION  : MW 2:00p
* LAB 2	   : GitHub, Doxygen, Graphiz
* DUE DATE : 1/24/2023
*************************************************************************
* Description: 
Lab 2 is broken into parts. Part A of this assignment is to test our 
GitHub using the program below labeled part a by seeing whether it is in
a repository. 
*************************************************************************/
/* PART A */
#include <iostream> 
using namespace std; 
int hello1Function(string name1); 
int hello2Function(string name2); 
int main() 
{ 
    string name1 = "Sophie Smith"
    hello1Function(name1); 
    string name2 = "Souzen Khan"; 
    hello2Function(name2); 
    return 0; 
} 

int hello1Function(string name1) 
{ 
    cout << "Hello World " << name1 << endl; 
    return 0; 
} 

int hello2Function(string name2) 
{ 
    cout << "Hello World " << name2 << endl; 
    return 0; 
} 
/*
* Description:
* This part of the lab's output will output hello world and my partner and i's names
* Output: 
Hello World Sophie Smith
Hello World Souzen Khan
*/