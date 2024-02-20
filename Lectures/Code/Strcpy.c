/*
Built-in string functions

Copy from one string to another string - strcpy()
*/

#include <stdio.h>
#include <string.h>


int main(void)
{
  char name1[] = "Sharon";
  char name2[10] = "Mark";


  // Copy the contents of name1 to name2
  strcpy(name2, name1);

  // Display the number of characters in the following strings
  printf("\n%s", name2);

  return 0;

} // end main()