/*
The size of the pointer that you will get would always be same.

It won't matter if it points to int or double or char .

The size of the pointer should be large enough to address the entire memory
but it does not need to be any larger than that

If you have a 64 bit Machine then the size would be 8 bytes
If you have a 32 bit Machine then the size would be 4 bytes

*/

#include <iostream>

int main(void){

  //If you have a 64 bit machine then int variable would take 4 bytes
  int some_variable = 4;
  //If you have a 64 bit machine then double variable would take 8 bytes
  double another_variable = 5.0000;

  int *pointer_to_some_variable = &some_variable;
  double *pointer_to_another_variable = &another_variable;
  char *pointer_to_yet_another_variable;

  pointer_to_yet_another_variable = "a";

  // You can examine the values to see that the size of the memory taken by these pointers is indeed different
  std::cout <<"\nAddress of some variable is : " << pointer_to_some_variable;
  std::cout << "\nAddress to another variable is : "<< pointer_to_another_variable;
  std::cout << "\nAddress to yet another variable is : "<< &pointer_to_yet_another_variable;

  std::cout <<"\n";

  /*
  You would see that the size of the pointers are the same dispite pointing to different datatypes
  */
  std::cout <<"\nsize of some variable pointer is : " << sizeof(pointer_to_some_variable);
  std::cout << "\nsize of another variable pointer is : "<< sizeof(pointer_to_another_variable);
  std::cout << "\nsize of yet another variable pointer is : "<< sizeof(pointer_to_yet_another_variable);

  std::cout <<"\n";


  return 0;
}
