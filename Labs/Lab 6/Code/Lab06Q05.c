/*
  Description: A program to take input of 5 characters into an array, and display the array
  Author: Ryan Pitman
  Date: 06/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
  char array[SIZE];


  // Take input from user
  printf("Please enter 5 characters: \n");
  for (int i = 0; i < SIZE; ++i)
  {
    scanf("%c", &array[i]);
    while(getchar() != '\n'); // Clear input buffer (https://stackoverflow.com/questions/7898215/how-to-clear-input-buffer-in-c)
  }

  // Display the array
  printf("Your array is: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%c ", array[i]);
  }

  return 0;
}