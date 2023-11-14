/* 
  Description: A program to demonstrate shifting on an array
  Author: Ryan Pitman
  Date: 13/11/2023
*/

#include <stdio.h>

#define SIZE 10

int main(void)
{
  int array[SIZE] = {0};


  // Fill the array with values, starting at 9 and counting down by subtracting i from 9
  // This will fill the array with values 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
  for (int i = 0; i < SIZE; i++) 
  {
    array[i] = 9 - i; 
  }

  // Display the contents of arr[8]
  printf("Arr[8]: %d\n", array[8]);

  // Shift the array
  for (int i = 0; i < SIZE; i++)
  {
    array[i] = array[ array[i] ];
  }
  // {9,8,7,6,5,4,3,2,1,0} -> {0,1,2,3,4,4,3,2,1,0}

  // Display the contents of arr[8]
  printf("Arr[8]: %d\n", array[8]);

  return 0;
}