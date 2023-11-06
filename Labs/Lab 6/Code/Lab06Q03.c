/* 
  Description: A program to take 5 integers as an input into an array, and to reverse those integers into a 2nd array.
  Author: Ryan Pitman
  Date: 06/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
  int array1[SIZE];
  int array2[SIZE];


  // Take input from user
  printf("Please enter 5 integers: \n");
  
  for (int i = 0; i < SIZE; ++i)
  {
    scanf("%d", &array1[i]);
  }

  // Reverse the array, where index of array2 is SIZE - index of 
  // array1 - 1 (last index of array1 is first index of array2)
  for (int i = 0; i < SIZE; ++i)
  {
    array2[i] = array1[SIZE - i - 1];
  }

  // Display the arrays
  printf("Your array was: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d ", array1[i]);
  }

  printf("\nThe reversed array is: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d ", array2[i]);
  }

  return 0;
} 