/*
  Description: A program which uses a function to print 10 asterisks on a single line.
  Author: Ryan Pitman
  Date: 01/02/2024
*/

#include <stdio.h>

#define ASTERISK_COUNT 10


// Function signatures
void printAsterisks(int);

int main(void)
{
  // Call the function
  printAsterisks(ASTERISK_COUNT);

  return 0;
}


// Function to print a number of asterisks
void printAsterisks(int count)
{
  for (int i = 0; i < count; i++)
  {
    printf("*");
  }
  printf("\n");
}

