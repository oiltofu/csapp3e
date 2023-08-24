#include <stdio.h>

void inplace_swap(int *x, int *y)
{
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

int main()
{
  int x = 1;
  int y = 2;
  inplace_swap(&x, &y);
  printf("x: %d\n", x);
  printf("y: %d\n", y);
}