/*
  Description: A program to read a name from standard input, displayin it with a space between each letter.
  Author: Ryan Pitman
  Date: 22/02/2024
*/

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 21

int main(void)
{
  char name[MAX_NAME_LENGTH];

  // User input
  puts("Enter your name: ");
  fgets(name, MAX_NAME_LENGTH - 1, stdin);

  // Display name with spaces
  for (int i = 0; name[i] != '\0'; i++)
  {
    putchar(name[i]);
    putchar(' ');
  }
  printf("\n");

  return 0;
}