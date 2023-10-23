/*
  Description: A program do display the total of all odd integers from 1 to 99.
  Author: Ryan Pitman
  Date: 23/10/2023
*/

#include <stdio.h>

int main()
{
  int total = 0;

  for (short i = 1; i < 100; i++)
  {
    if (i % 2 != 0)
    {
      total += i;
    }
  }

  printf("The total of all odd integers from 1 to 99 is %d\n", total);

  return 0;
}