/*
  Description: A program to demonstrate different string formatting options.
  Author: Ryan Pitman
  Date: 22/02/2024
*/

#include <stdio.h>

int main(void)
{
  printf("%5s", "abcd");
  printf("\n");

  printf("%5s", "abcdef");
  printf("\n");

  printf("%-5s", "abc");
  printf("\n");

  printf("%5.2s", "abcde");
  printf("\n");

  printf("%-5.2s", "abcde");
  printf("\n");
  
  return 0;
}