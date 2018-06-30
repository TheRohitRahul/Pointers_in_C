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

  // This is the value that is assigned to the variable in line 18
  std::cout << "\nThe value of i is : " << i;

  /*
  Let's break down this statement a little bit :
  * operator would give us the value stored at an address
  but in order for it to give us the value we need to supply it a valid address
  In this case the & operator is giving us the address of the variable i and we are
  feeding this address to the * operator and it is giving us the value which is at
  the address corresponding to i. So the result of line 24 and line 35 should
  be the same
  */
  std::cout << "\nThe Value of i is : "<< *(&i);

  std::cout <<"\n";
  return 0;

}
