#include <stdio.h>

int main()
{
  int n = 5;

  if (n > 5) {
    printf("%d is greater than 5.\n", n);
  } else if (n < 5) {
    printf("%d is lower than 5.\n", n);
  } else if (n == 5) {
    printf("%d is equal than 5.\n", n);
  } else {
    printf("Woops. What is go wrong...");
  }


  return 0;
}

