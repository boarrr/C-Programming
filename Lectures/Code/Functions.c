/*
Program that uses Functions
*/
#include <stdio.h>

//#define SIZE 5

// Function signature or Function prototype
void stars(int);


int main()
{
  int no_stars = 0;
  
  
  printf("How many stars to display?\n\n");
  scanf("%d", & no_stars);

  
  // Execute/Call our function stars()
  stars(no_stars);

  
  printf("\n\nAfter function call\n");
  
  return 0;
    
} // end main()



// Function stars() used to display a set of asterix
//
void stars(int num)
{
  int i;

  for(i = 0; i < num; i++)
  {
      printf("*");

  } // end for

} // end stars()