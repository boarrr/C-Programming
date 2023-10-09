/*
  Program to demonstrate the if statement
 */

#include <stdio.h>

int main()
{
  float bank_balance = 0; 


  // Prompt the user for a bank balance
  printf("Enter a bank balance: ");
  scanf("%f", &bank_balance);

  // If the bank balance is greater than zero
  if (bank_balance > 0)
  {
    printf("\nYou have money\n");
  }

  // If the bank balance is less than or equal to zero
  if (bank_balance <= 0)
  {
    printf("\nYou have no money - go study Computer Science\n"); 
  }
  
  return 0; 
}
