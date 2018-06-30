/*
The address of a variable could be stored in another variable but it has to be declared as such
*/

#include <iostream>

int main(void){
  int some_variable = 50;

  /*
  This is how you declare a pointer variable this statement says that :
  I'm declaring a variable which will contain the address of another variable and that variable is going to be
  of type integer

  */
  int * pointer_to_some_variable;

  // This is how we will assign the address of some_variable to pointer_to_some_variable
  pointer_to_some_variable = &some_variable;


  // Here we will use "some_variable" to get the value and the address
  std::cout << "\nThe value is : "<< some_variable;
  std::cout << "\nThe Address to some_variable is : "<< &some_variable;

  // Similarly we should be able to retrieve the same things from pointer to some_variable
  std::cout << "\nThe value is : "<< *pointer_to_some_variable;
  std::cout << "\nThe Address to some_variable is : " << pointer_to_some_variable;

  return 0;

}
