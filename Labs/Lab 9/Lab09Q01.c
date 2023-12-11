/*
  Description: a program to demonstrate pointers, and dereferencing pointers and addresses
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

  num1 = 5;
  char1 = 'a';

  ptr1 = &num1;
  ptr2 = &char1;

  printf("num1 = %d\n", num1);
  printf("num1 address = %p\n", &num1);

  printf("char1 = %c\n", char1);
  printf("char1 address = %p\n", &char1);

  printf("ptr1 = %p\n", ptr1);
  printf("ptr2 = %p\n", ptr2);

  printf("ptr1 dereferenced = %d\n", *ptr1);
  printf("ptr2 dereferenced = %c\n", *ptr2);

  return 0;
}