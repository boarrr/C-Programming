/* Program to introduce getchar() and putchar() */

#include <stdio.h>

int main(void)
{
  char my_char = ' '; 
  
  printf("Enter any character: ");

  // use the getchar() function
  my_char = getchar();

  printf("\nYou entered ");

  // Use the putchar() function
  putchar(my_char);

  return 0; 
}