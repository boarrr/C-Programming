/*
  Description: A program to allow the user to enter 4 numbers, then display these numbers, and swap the first and second, and the third and fourth numbers
  Author: Ryan Pitman
  Date: 06/11/2023
*/

#include <stdio.h>

#define SIZE 4

int main(void)
{
  int array[SIZE];
  int temp = 0;

  // Take input from user
  printf("Please enter 4 integers: \n");
  for (int i = 0; i < SIZE; ++i)
  {
    scanf("%d", &array[i]);
  }

  // Display the array
  printf("Your array is: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d ", array[i]);
  }

  // Swap the first and second numbers
  temp = array[0];
  array[0] = array[1];
  array[1] = temp;

  // Swap the third and fourth numbers
  temp = array[2];
  array[2] = array[3];
  array[3] = temp;

  // Display the array
  printf("\nYour array is now: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d ", array[i]);
  }

  return 0;
}