#include <stdio.h>

int main(void)
{
  int num;
  char buffer[10];

  printf("Enter a number: ");
  scanf("%d", &num);

  // This clears the buffer so the enter key does not get picked up by the fgets
  while (getchar() != '\n');

  printf("Enter a string: ");
  fgets(buffer, sizeof(buffer), stdin);

  printf("You entered: %d and %s\n", num, buffer);
}