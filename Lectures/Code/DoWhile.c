/*
  Program to demonstrate the use of a do .. while loop. It will keep a running total of numbers entered by the user
*/

#include <stdio.h>

int main(void) 
{
  float num = 1;
  float total = 0;


  // this do loop will execute at least once
  do
  {
    printf("\nEnter a number (enter 0 to end program)\n"); 
    scanf("%f", &num);
    
    // Add the number entered to the current value in total. This is the new total
    total = total + num;
  } 
  while (num != 0);
  // while the number entered is not equal to zero 

  // Display the final total
  printf("\nThe final total is %.1f\n", total);
  
  return 0;
} // end main