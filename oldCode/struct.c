#include <stdio.h>

int main()
{
  struct {
    int a;
    float b;
    int c;
  } myst;

  myst.a = 4;
  myst.b = 3.37;
  myst.c = 8;

  printf("a = %d, b = %0.2f, c = %d\n", myst.a, myst.b, myst.c);
  
  return 0;
}
