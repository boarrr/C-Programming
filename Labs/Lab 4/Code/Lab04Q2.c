/*
  Description: A program to take an input between 1 and 100 from the user and return if it is odd or even via modulus
  Author: Ryan Pitman
  Date: 16/10/2023
*/

#include <stdio.h>

int main(void)
{
  int userInt;


  // Get input
  printf("Enter a number between 1 and 100: ");
  scanf("%d", &userInt);

  // If is not between 1 and 100
  if (userInt < 1 || userInt > 100)
  {
    printf("The number %d is not between 1 and 100\n", userInt);
  }
  else
  {
    // If divisable by 2 with no remainder, it is even
    if (userInt % 2 == 0)
    {
      printf("The number %d is even\n", userInt);
    }
    else
    {
      printf("The number %d is odd\n", userInt);
    }
  }
}