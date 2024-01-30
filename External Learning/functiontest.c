#include <stdio.h>

void test(int);

int main(void)
{
  int num = 5;

  test(num);

  printf("num = %d\n", num);

  return 0;
}

void test(int num)
{
  num = num + 1;

  printf("num == %d\n", num);

  return;
}