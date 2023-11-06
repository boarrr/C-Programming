/* 
  Description: A program to take input of 5 integers into an array and copy them into another array using loops
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

  // Copy the array
  for (int i = 0; i < SIZE; ++i)
  {
    array2[i] = array1[i];
  }

  // Display copied array
  printf("Copied array is: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d ", array2[i]);
  }

  return 0;
}