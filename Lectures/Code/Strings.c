/*
  Display a string
*/

#include <stdio.h> 

int main(void) 
{ 
  char greeting[6] = "Hello";
  

  printf("%s", greeting); 

  printf("\n"); 

  // Right-justifies the string by counting 20 spaces from the screen margin 
  printf("%20s", greeting); 

  printf("\n"); 

  // Left-justifies the string by counting 20 spaces from the screen margin 
  printf("%-20s", greeting); 

  printf("\n"); 

  // Displays the first 3 characters of the string 
  printf("%.3s", greeting); 

  printf("\n"); 

  // Displays the first 3 characters of the string, width 20 
  printf("%20.3s\n", greeting); 

  // Displays the string in quotes
  printf("\"I can program in C\", said the student.\n\n");

  return 0;
}