#include <stdio.h>

int main()
{
  int n;
  int *k;

  n = 25;
  k = &n;

  printf("n = %d\n", n);
  printf("*k = %x\n", *k);

  return 0;
}
