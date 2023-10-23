/*
  Description:  This program will count from one to ten on a seperate line, with text statements for the number 3 and 7
  Author: Ryan Pitman
  Date: 23/10/2023
*/

#include <stdio.h>

int main()
{
  short num = 10;

  while (num > 0)
  {
    if (num == 3)
    {
      printf("This number is three\n");
    }
    else if (num == 7)
    {
      printf("This number is seven\n");
    }
    else
    {
      printf("%hd\n", num);
    }
    
    --num;
  }

  return 0;
}