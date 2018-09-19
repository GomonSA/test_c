#include <stdio.h>

int main()
{
  int myint;
  char mychar;

  float myfloat;

  long int mylongint;
  double mydouble, mysumdb;

  myint = 25;
  mychar = 'r';
  myfloat = 23.6;
  mydouble = 369;
  mylongint = 385892823;

  printf("myint and mychar are: %d and %c\n", myint, mychar);

  mysumdb = 3.5 + mydouble;

  printf("mysumdb = %0.2f\n", mysumdb);



  return 0;
}
