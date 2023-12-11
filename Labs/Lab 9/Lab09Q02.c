/*
  Description: a program to demonstrate pointers, and dereferencing pointers and addresses, part 2, including a new pointer
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>

int main(void)
{
  int num1;
  char char1;
  int* ptr1;
  char* ptr2;

  int* ptr3;

  num1 = 5;
  char1 = 'a';

  ptr1 = &num1;
  ptr2 = &char1;

  ptr3 = &char1;


  printf("num1 = %d\n", num1);
  printf("num1 address = %p\n", &num1);

  printf("char1 = %c\n", char1);
  printf("char1 address = %p\n", &char1);

  printf("ptr1 = %p\n", ptr1);
  printf("ptr2 = %p\n", ptr2);

  printf("ptr1 dereferenced = %d\n", *ptr1);
  printf("ptr2 dereferenced = %c\n", *ptr2);


  // This works because the address of char1 is stored in ptr3, and ptr3 is a pointer to an int, so it is able to be dereferenced as an int
  printf("ptr3 = %p\n", ptr3);
  printf("ptr3 dereferenced = %d\n", *ptr3);
  printf("ptr3 dereferenced = %c\n", *ptr3);

  return 0;
}