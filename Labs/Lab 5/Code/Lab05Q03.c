/*
  Description: Take input of a number between 1 -5 from user, and display all numbers from 1 - 20 evenly divisible by this number
  Author: Ryan Pitman
  Date: 23/10/2023
*/

#include <stdio.h>

int main()
{
  short userInput = 0;

  do
  {
    printf("Enter a number between 1 and 5: ");
    scanf("%hd", &userInput);
  } while (userInput < 1 || userInput > 5);
  
  printf("Numbers between 1 and 20 evenly divisible by %hd:\n", userInput);
  for (short i = 1; i < 20; i++)
  {
    if (i % userInput == 0)
    {
      printf("%hd\n", i);
    }
  }

  return 0;
}