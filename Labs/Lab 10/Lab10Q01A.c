/*
  Description: A program to replace blank elements in an array of characters with an underscore, using pointer notation
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>

int main(void)
{
  char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
  char* ptr = chars;


  // Replace spaces with underscores
  for (int i = 0; i < 8; i++)
  {
    if (*(ptr + i) == ' ')
    {
      *(ptr + i) = '_';
    }
  }

  // Display contents of chars
  for (int i = 0; i < 8; i++)
  {
    printf("%c ", *(ptr + i));
  }

  return 0;
}