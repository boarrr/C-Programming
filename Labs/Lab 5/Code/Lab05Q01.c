/*
  Description: A program to display numbers 1 - 10 in descending order, seperated by a comma
  Author: Ryan Pitman
  Date: 23/10/2023
*/

#include <stdio.h>

int main(void)
{
  int num = 10;

  while (num > 1)
  {
    printf("%d,", num);
    --num;
  }
  printf("%d\n", num);

  return 0;
}