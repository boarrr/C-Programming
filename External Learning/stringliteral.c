#include <stdio.h>

int main() 
{
  char *ptr = "Hello";
  printf("Original string: %s\n", ptr);

  // Attempt to modify the string
  ptr[0] = 'M'; // Undefined behavior: attempting to modify a string literal

  printf("Modified string: %s\n", ptr); // This line may cause a crash

  return 0;
}
