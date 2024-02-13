/*
  Program that uses an EXTERN variable
*/

#include <stdio.h>
#include "Extern.h"

// Function signature
void fxn(void);


// Global variable - avoid when possible
//int num = 0;


int main()
{
  printf("Inside main function\n");
  
  // Call fxn()
  fxn();
  
  printf("\nBack in main function\n");
  printf("\nnum is %d", num);
  
  return 0;
} // end main()


//Implement function fxn()
void fxn(void)
{
  //the variable num is never created here. It tells the compiler to find it globally
  extern int num;


  printf("\nInside fxn function\n");

  //increment num
  num++;

} // end fxn()