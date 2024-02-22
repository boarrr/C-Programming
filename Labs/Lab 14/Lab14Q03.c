/*
  Description: More string options including bugs
  Author: Ryan Pitman
  Date: 22/02/2024
*/

#include <stdio.h>

int main(void)
{
  char *text = "Some text";

  printf("%s\n", text);
  printf("%c\n", *text);
  printf("%c\n", *"more text");
  printf("%c\n", *(text + 1));
  printf("%s\n", text + 1);
  printf(text);
  *(text + 4) = '\0';
  printf("\n%s\n", text);
  printf("%c", "text"[2]);
  printf("%s", "text" + 2);

  return 0;
}