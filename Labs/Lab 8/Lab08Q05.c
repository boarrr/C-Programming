/*
  Description: A demonstration of pointers and addresses
  Author: Ryan Pitman
  Date: 20/11/2023
*/

#include <stdio.h>

int main(void)
{

  // What happens if hard coding a pointer address?
  // int* ptr = 0x7ffeeddccbba;


  // Print the contents of that address?
  // printf("The contents of the address 0x7ffeeddccbba is: %d\n", *ptr);

  int var1;
  int* ptr1 = &var1;

  scanf("%d", &var1);

  printf("The contents of the address %p is: %d\n", ptr1, *ptr1);

  // Iterate the pointer by 1
  printf("The iterated contents of the address %p is: %d\n", ptr1, *(ptr1 + 1));

  // Assign a value to a random address
  *(ptr1 + 500) = 50;
  

  printf("The contents of the address %p is: %d\n", ptr1, *(ptr1 + 500));

  return 0;
}