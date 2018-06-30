/*
The Operator * is known as the Value at operator , this would give you the value at a perticular address
The Operator & is known as the Address of operator , this would give you the address of a variable
*/

#include <iostream>

int main(){

  int i = 3;

  // This would give us the Address of i
  std::cout << "\nThe Address of i is : " << &i;
  // This would give the value of i
  std::cout << "\nThe Value of i is : " << i;
  // Here we are saying "give me the value stored at the address of i"
  std::cout << "\nThe Value of i is : "<< *(&i);
  std::cout << "\n";
  return 0;

}
