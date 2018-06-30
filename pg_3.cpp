/*

*/

#include <iostream>

int main(void){

  int some_variable = 4;
  int *pointer_to_some_variable ;
  int **pointer_to_pointer_to_some_variable;

  pointer_to_some_variable = &some_variable;
  pointer_to_pointer_to_some_variable = & pointer_to_some_variable;

  std::cout << "\nsome variable is : " << some_variable;
  std::cout << "\nsome variable is : " << *pointer_to_some_variable;
  std::cout << "\nSome variable is : " << **pointer_to_pointer_to_some_variable;

  std::cout << "\n";

  std::cout << "\nAddress to some variable is : " << &some_variable;
  std::cout << "\nAddress to some variable is : " << pointer_to_some_variable;
  std::cout << "\nAddress to some variable is : " << *pointer_to_pointer_to_some_variable;

  std::cout << "\n";

  std::cout << "\nAddress to pointer to some variable is : " << &pointer_to_some_variable;
  std::cout << "\nAddress to pointer to some variable is : " << pointer_to_pointer_to_some_variable;

  std::cout << "\n";

  std::cout << "\nAddress to pointer to pointer to some variable is : " << &pointer_to_pointer_to_some_variable;

  std::cout << "\n";
}
