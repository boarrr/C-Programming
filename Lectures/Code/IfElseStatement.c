/*
Program to demonstrate the if..else statement
*/

#include <stdio.h>

int main(void)
{
  float bank_balance = 0;

  
  printf("Enter a bank balance: ");
  scanf("%f", &bank_balance);
  
  // if the bank balance is greater than zero
  if (bank_balance > 0)
  {
    printf("\nYou have money\n");
  } // end if
  else if (bank_balance == 0)
  {
    printf("\nYou have a zero balance\n");
  } // end else if
  else
  {
    printf("\nYou are in negative balance\n");
  } // end else

  return 0;

} // end main()