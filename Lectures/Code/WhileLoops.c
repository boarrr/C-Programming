/*
  Program to demonstrate the use of a while loop. It will keep a running total of numbers entered by the user
*/

#include <stdio.h>

int main(void) 
{
  float num = 1;
  float total = 0;

  
  // while the number entered is not equal to zero
  while (num != 0)
  {
    printf("\nEnter a number (enter 0 to end program): "); 
    scanf("%f", &num);

    total = total + num;
  } // end while

  // Display the final total
  printf("\nThe final total is %.1f\n", total); 
  
  return 0;
}