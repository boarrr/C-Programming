/*
  Description: A program to determine the most commonly used character in 3 inputs from a user, using a function.
  Author: Ryan Pitman
  Date: 08/02/2024
*/

#include <stdio.h>

// Function prototype
char mostCommon(char *);

int main(void)
{
  char chars[3];

  // User input
  printf("Enter %d characters: ", 3);
  
  for (int i = 0; i < 3; i++)
  {
    scanf("%c", &chars[i]);
    while(getchar() != '\n');
  }

  // Function call and output
  printf("The most commonly used character is %c.\n", mostCommon(chars));

  return 0;
}


// Function to determine the most commonly used character
char mostCommon(char *arr)
{
  // Base common char is the first char
  char common = arr[0];
  int count = 0;

  if (arr[0] == arr[1] || arr[0] == arr[2])
  {
    count++;
  }
  else if (arr[1] == arr[2])
  {
    count++;
    common = arr[1];
  }

  return common;
}