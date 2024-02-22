/*
  Description: Displaying output from two code segments.
  Author: Ryan Pitman
  Date: 22/02/2024
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  char *p = "abcd";

  while (*p)
  {
    putchar(*p++);
  }

  char *text = "abcd";
  *p = text;

  p += strlen(p) - 1;

  while (text <= p)
  {
    puts(p--);
  }

  return 0;
}