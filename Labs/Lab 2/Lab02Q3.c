/*
  Description: A program to demonstrate the modulus operator in basic arithmetic 
  Author: Ryan Pitman
  Date: 02/10/2023
*/

#include <stdio.h>

int main(void)
{
  int operation1, operation2, operation3;
  int operation4, operation5, operation6;

  operation1 = 2 % 2;
  operation2 = 3 % 2;
  operation3 = 5 % 2;
  operation4 = 7 % 3;
  operation5 = 100 % 33;
  operation6 = 100 % 7;
  

  printf("2 %% 2 = %d\n", operation1);
  printf("3 %% 2 = %d\n", operation2);
  printf("5 %% 2 = %d\n", operation3);
  printf("7 %% 3 = %d\n", operation4);
  printf("100 %% 33 = %d\n", operation5);
  printf("100 %% 7 = %d\n", operation6);

  return 0;
}