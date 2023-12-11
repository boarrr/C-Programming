/*
  Description: A program to take input of two integers, and find the sum using pointers only
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>

int main(void)
{
  int input1, input2, sum = 0;

  int* ptr1 = &input1;
  int* ptr2 = &input2;
  int* ptr3 = &sum;

  printf("Enter two integers: ");
  scanf("%d %d", ptr1, ptr2);

  *ptr3 = *ptr1 + *ptr2;

  printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, *ptr3);

  return 0;
}