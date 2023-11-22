/*
  Description:  This program contains several errors. Observe the errors.
  Author: Ryan Pitman
  Date: 20/11/2023
*/

#include <stdio.h>

int main(void)
{
  int var1;
  int *ptr;
  var1 = 1;
  ptr = &var1;

  printf("the address of var1 is %d\n", &var1); // the %d should be %p

  printf("ptr contains %p\n", ptr); /* there is a missing & and should be
  &ptr */

  printf("*ptr contains %d\n", ptr); /* there is a missing * (indirection
  operator) and therefore should be *ptr */

  return 0;
}