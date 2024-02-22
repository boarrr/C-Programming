/*
  Description: A program to demonstrate how a character array can be used to store a string.
  Author: Ryan Pitman
  Date: 22/02/2024
*/

#include <stdio.h>

int main(void)
{
  char name[] = "Robert"; // This is a character array, and it is used to store a string.
  char name2[] = {'R', 'o', 'b', 'e', 'r', 't', '\0'}; // This is another way to declare a character array, and it is used to store a string.
  char *name3 = "Robert"; // This is a pointer to a string literal, and it is used to store a string that is immutable.

  printf("%s\n", name); // This will print the name.
  printf("%s\n", name2); // This will print the name.
  printf("%s\n", name3); // This will print the name.

  return 0;
} 