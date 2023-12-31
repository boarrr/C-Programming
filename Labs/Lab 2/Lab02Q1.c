/* 
  Description: A program to calculate sum of integers up to 5, and the average of the floats from 1.0 to 2.0
  Author: Ryan Pitman
  Date: 02/10/2023
*/

#include <stdio.h>

int main(void)
{
  int maxInt = 5;
  int sumInt = 0;
  float maxFloat = 2.0;
  float sumFloat = 0;


  // Calculate the sum of integers
  for (int i = 0; i <= maxInt; i++)
  {
    sumInt = sumInt + i;
  }
  
  // Calculate the sum of the floats
  for (int i = 10; i <= 20; i++) 
  {
    float additional = i / 10.0;
    sumFloat += additional;
  }

  sumFloat = sumFloat / 11; // Average = Total / Count

  printf("The sum of integers 1 to 5 is: %d\n", sumInt);
  printf("The average of the floats 1.0 to 2.0 is: %.2f\n", sumFloat); 

  return 0;
}