/* Program to demonstrate entering more than 1 data item */

#include <stdio.h>

int main(void)
{
  int var = 0;
  char my_char = ' ';

  printf("Enter a single number and a single character\n"); 
  scanf("%d", &var);

  // Clear the buffer (Remove the newline character from stdinput)
  while(getchar() != '\n');

  scanf("%c", &my_char);

  printf("You entered %d and %c\n", var, my_char);

  return 0;
}