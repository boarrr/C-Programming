/*
  Description: A program using a function to find the highest and lowest of 3 values passed as a parameter.
  Author: Ryan Pitman
  Date: 01/02/2024
*/

#include <stdio.h>


// Function signatures
void findHighestLowest(int, int, int);
int findHighest(int, int, int);
int findLowest(int, int, int);


int main(void)
{
  int num1, num2, num3;


  // User Inputs
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // Call the function
  findHighestLowest(num1, num2, num3);

  return 0;
}


// Function to find the highest and lowest of 3 values
void findHighestLowest(int x, int y, int z)
{
  int highest = x, lowest = x;

  highest = findHighest(x, y, z);
  lowest = findLowest(x, y, z);

  printf("The highest number is %d\n", highest);
  printf("The lowest number is %d\n", lowest);
}

// Find highest value
int findHighest(int x, int y, int z)
{
  int highest = x;

  if (y > highest)
  {
    if (z > y)
    {
      highest = z;
    }
    else
    {
      highest = y;
    }
  }
  else if (z > highest)
  {
    highest = z;
  }

  return highest;
}

// Find lowest value
int findLowest(int x, int y, int z)
{
  int lowest = x;

  if (y < lowest)
  {
    if (z < y)
    {
      lowest = z;
    }
    else
    {
      lowest = y;
    }
  }
  else if (z < lowest)
  {
    lowest = z;
  }

  return lowest;
}