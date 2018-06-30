/*
The Operator * is known as the Value at operator , this would give you the value at a perticular address
The Operator & is known as the Address of operator , this would give you the address of a variable
*/

#include <iostream>

int main(void){

  /*
  When you write this statement the compiler would

  1. Reserve a memory space that would store an integer
  2. Associate the name i with the space that was created
  3. Store the value 3 in it

  */
  int i = 3;

  // This address will vary across multiple runs of this code (is decided dynamically)
  std::cout << "\nAddress of i is : " << &i;

  // This is the value that is assigned to the variable
  std::cout << "\nThe value of i is : " << i;

  // Here we are saying "give me the value stored at the address of i"
  std::cout << "\nThe Value of i is : "<< *(&i);

  std::cout <<"\n";
  return 0;

}
