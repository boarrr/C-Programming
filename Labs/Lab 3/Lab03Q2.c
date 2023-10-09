/*
  Description: A program to take two characters as input, and display different delimiter usage
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

int main()
{
  char char1 = ' ';
  char char2 = ' ';


  // Take input from user
  printf("Enter two characters, seperated by an enter key!:\n");
  scanf("%c %c", &char1, &char2);

  // Display output
  printf("Your characters are: '%c' & '%c'\n", char1, char2);
  printf("\nIf we use %%d for output, this is the result: '%d' & '%d'\n", char1, char2);

  return 0;
}

