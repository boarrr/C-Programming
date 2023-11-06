/*
  Description: A program to take 3 integers into an array, sorting it into ascending order
  Author: Ryan Pitman
  Date: 06/11/2023
*/

#include <stdio.h>

#define SIZE 3

int main(void)
{
  int array[SIZE];
  int temp = 0;


  // Take input from user and store in ascending order
  printf("Please enter 3 integers: \n");
  
  for (int i = 0; i < SIZE; ++i)
  {
    scanf("%d", &array[i]);
  }


  // Sort the array into ascending order
  for (int i = 0; i < SIZE; ++i)
  {
    for (int j = i + 1; j < SIZE; ++j)
    {
      if (array[i] > array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  // Display the array
  printf("Your array is: ");
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d ", array[i]);
  }

  return 0;
}