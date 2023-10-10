/*
  Program to demonstrate logical operators 
*/
#include <stdio.h>


int main() 
{
  float bank_balance = 0; 


  printf("Enter a bank balance: ");
  scanf("%f", &bank_balance);

  // if the bank balance is greater than zero AND less than or equal to zero
  if (bank_balance > 0 && bank_balance <= 100) 
  {
    printf("\nYour balance is between 1 and 100\n"); 
  } // end if

  return 0;
} // end main()