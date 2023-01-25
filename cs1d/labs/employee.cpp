#include <iostream> 
 
#include "inherit2.h" 
#include "partTimeEmployee.h" 
 
using namespace std; 
 
int main() 
{ 
 personType newPerson; 
 partTimeEmployee newEmployee("Sophie","Smith",7.50,56); 
 partTimeEmployee employee; 
       newEmployee.print(); 
 employee.setNameRateHours("Souzen", "Khan",9.75, 45); 
 employee.print(); 
 
 return 0; 
} 
 