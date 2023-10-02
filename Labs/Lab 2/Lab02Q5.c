/*
  Description: A program to demonstrate basic arithmetic in C
  Author: Ryan Pitman
  Date: 02/10/2023
*/

#include <stdio.h>

int main() 
{
  int operation1, operation2, operation3, operation5;
  float operation4;

  operation1 = 15 + 10;
  operation2 = 15 - 10;
  operation3 = 15 * 10;
  operation4 = 15 / 10;
  operation5 = 15 % 3;


  printf("15 + 10 = %d\n", operation1);
  printf("15 - 10 = %d\n", operation2);
  printf("15 * 10 = %d\n", operation3);
  printf("15 / 10 = %.2f\n", operation4);
  printf("15 %% 3 = %d\n", operation5);

  return 0;
}