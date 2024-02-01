/*
  Description: A program which uses a two parameter function (char, int) to display the character a number of times on one line
  Author: Ryan Pitman
  Date: 01/02/2024
*/

#include <stdio.h>


// Function signatures
void printChar(char, int);


int main(void)
{
  char userChar;
  int userCount;


  // User Inputs
  printf("Enter a character: ");
  userChar = getchar();

  printf("Enter a count: ");
  scanf("%d", &userCount);

  // Call the function
  printChar(userChar, userCount);
  
  return 0;
}


// Function to print a character a number of times
void printChar(char character, int count)
{
  for (int i = 0; i < count; i++)
  {
    printf("%c", character);
  }
  printf("\n");

}