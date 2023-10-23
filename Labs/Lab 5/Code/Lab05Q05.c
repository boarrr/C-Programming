/*
  Description: A program to display all even numbers from 1 and 100, seperated by commas
  Author: Ryan Pitman
  Date: 23/10/2023
*/

#include <stdio.h>

int main(void)
{
  short max = 100;

  for (short i = 1; i < max; i++)
  {
    if (i % 2 == 0)
    {
      printf("%hd,", i);
    }
  }

  printf("%hd\n", max);

  return 0;
}