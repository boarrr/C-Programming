/*
  Description: A program to demonstrate errors with string options.
  Author: Ryan Pitman
  Date: 22/02/2024
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[] = {'R', 'o', 'b', 'e', 'r', 't'}; // No null terminator

  puts(name); // This will print the name, but it will also print garbage after the name until it finds a null terminator.

  scanf("%s", name); // This will work as expected

  puts(name); // This will print the name, with the added null terminator from the scanf function.

  strcpy(name, "Philip"); // Not enough space for the new name, program will crash

  *(name + 5) = 'a'; // This will work as expected

  /*name = "Philip";*/ // This will not work as expected, you cannot assign a string to an array

  return 0;
}