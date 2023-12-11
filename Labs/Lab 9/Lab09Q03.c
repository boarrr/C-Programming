/*
  Description: A program using pointers to display float variables
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>

int main(void)
{
  float input1 = 42.0, input2 = 6.9;

  float* ptr1 = &input1;
  float* ptr2 = &input2;

  printf("input1 address = %p\n", &input1);
  printf("input2 address = %p\n\n", &input2);

  printf("ptr1 address = %p\n", ptr1);
  printf("ptr2 address = %p\n", ptr2);

  printf("ptr1 contains = %p\n", ptr1);
  printf("ptr2 contains = %p\n\n", ptr2);

  printf("ptr1 dereferenced = %f\n", *ptr1);
  printf("ptr2 dereferenced = %f\n", *ptr2);

  return 0;
}