/*
  Description: A program which uses two functions to calculate the sum, and average of 3 numbers entered by the user.
  Author: Ryan Pitman
  Date: 01/02/2024
*/

#include <stdio.h>


// Function signatures
int sum(int, int, int);
float average(int);


int main(void)
{
  int num1, num2, num3;

  // User Input
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // Output the results
  printf("The sum of the numbers is %d\n", sum(num1, num2, num3));
  printf("The average of the numbers is %.2f\n", average(sum(num1, num2, num3)));

  return 0;
}


// Sum function, adds 3 ints together
int sum(int a, int b, int c)
{
  int total = 0;

  total = a + b + c;

  return total;
}

// Average function, sum divided by 3
float average(int sum)
{
  float average = 0.0;

  // Cast sum to float to avoid integer division
  average = (float)sum / 3.0;

  return average;
}