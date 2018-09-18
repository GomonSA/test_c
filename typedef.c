#include <stdio.h>

typedef int INT32;
typedef char MYCHR;

typedef struct mystruct_t {
  int a;
  int b;
} MYSTRX;


int main()
{
  INT32 i = 0;
  MYCHR mystr[10] = "Hello Man";

  MYSTRX gold;
  MYSTRX silver;
  MYSTRX bronze;

  gold.a = 2;
  gold.b = 5;

  silver.a = 99;
  silver.b = 43;

  bronze.a = 92;
  bronze.b = 41983;

  printf("i = %d\n", i);
  printf("mystr = %s\n", mystr);

  printf("gold.a = %d\n", gold.a);
  printf("gold.b = %d\n", gold.b);

  printf("silver.a = %d\n", silver.a);
  printf("silver.b = %d\n", silver.b);

  printf("bronze.a = %d\n", bronze.a);
  printf("bronze.b = %d\n", bronze.b);
  
  return 0;
}

