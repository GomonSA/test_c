#include <stdio.h>
/***
 ***************************************************
 * This is the source code for addint two
 * numbers and returns the sume. It is
 * for C programming in Linux.
 ***
 ***************************************************/

/* This is function adds two numbers
 * and return it the sum.
 */

int add_numbers(int number_one, int number_two);


/* This is my main function */

int main()
{
  int result;

  /* call the add_numbers function */
  result = add_numbers(4, 8);

  printf("result = %d\n", result);      // print the sum value
  
  return 0;
}


int add_numbers(int number_one, int number_two)
{
  int sum;                              // variable to take the sum

  /* add the numbers */
  sum = number_one + number_two;

  /* return the sum */
  return sum;
}
