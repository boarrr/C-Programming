/*
  Description: A program to take 5 numbers from standard input, passing an array to a function to find even and odd numbers, 
  //           displaying the count of even numbers.

  Author: Ryan Pitman
  Date: 15/02/2024
*/

#include <stdio.h>

#define SIZE 5

int evenNumbers(int *);

int main(void)
{
  int numbers[SIZE];


  // User input
  for(int i = 0; i < SIZE; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Output the count of even numbers
  printf("\nThe count of even numbers is %d\n", evenNumbers(numbers));
 
  return 0;
}


// Find the count of even numbers in the array
int evenNumbers(int *numbers)
{
  int count = 0;

  // If the number evenly divides by 2, it is even
  for(int i = 0; i < SIZE; i++)
  {
    if(*(numbers + i) % 2 == 0)
    {
      printf("%d is even\n", *(numbers + i));
      count++;
    }
    else
    {
      printf("%d is odd\n", *(numbers + i));
    }
  }

  return count;
}