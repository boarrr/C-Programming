/*
  Description: A program to check the highest value of 3 numbers via a function
  Author: Ryan Pitman
  Date: 08/02/2024
*/

#include <stdio.h>

#define SIZE 3

// Function prototype
int highest(int *);

int main(void)
{
  int nums[SIZE];


  // User input
  printf("Enter %d numbers: ", SIZE);
  
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &nums[i]);
  }

  // Function call and output
  printf("The highest number of those three is %d.\n", highest(nums));

  return 0;
}


// Function to check the highest value of 3 numbers
int highest(int *arr)
{
  int high = arr[0];

  for (int i = 1; i < SIZE; i++)
  {
    if (arr[i] > high)
    {
      high = arr[i];
    }
  }

  return high;
}