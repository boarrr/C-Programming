/*
  Description: A program which uses a function to find the highest number in a 5 value array
  Author: Ryan Pitman
  Date: 15/02/2024
*/

#include <stdio.h>

#define SIZE 5

int highestNumber(int *);

int main(void)
{
  int numbers[SIZE];


  for(int i = 0; i < SIZE; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Output the highest number
  printf("The highest number is %d\n", highestNumber(numbers));

  return 0;
}


// Finn the highest number in the array
int highestNumber(int *numbers)
{
  int highest = *(numbers + 1);


  for(int i = 1; i < SIZE; i++)
  {
    if(*(numbers + i) > highest) highest = *(numbers + i);
  }

  return highest;
}