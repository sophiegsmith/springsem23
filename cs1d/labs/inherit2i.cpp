#include <iostream> 
#include <string> 
#include "inherit2.h" 
 
using namespace std; 
 
 
void personType::print() const 
{ // prints the first and last name
 cout<<firstName<<" "<<lastName; 
} 
 // setter for person name
void personType::setName(string first, string last) 
{ 
 firstName = first; 
 lastName = last; 
} 
// gettter for person name
void personType::getName(string& first, string& last) 
{ 
 first = firstName; 
 last = lastName; 
} 
 
 //constructor with parameters 
personType::personType(string first, string last) 
{ 
 firstName = first; 
 lastName = last; 
} 

personType::personType()   //default constructor 
{ firstName = ""; 
 lastName = ""; 
}

