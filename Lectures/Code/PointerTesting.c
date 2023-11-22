#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int var1 = 5;
  int* ptr1 = malloc(sizeof(int));

  printf("\nThe value that ptr1 points to is %p\n", ptr1);

  return 0;
}