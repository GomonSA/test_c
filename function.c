#include <stdio.h>

/* Function  : add_number (int first_num, int second_num)
 * Input     : int first_num (First number),
 *             int second_num (Second number)
 * Output    : int sum 
 * Procedure : return the sum of two variable first_num and second_num
 */
int add_numbers(int first_num, int second_num);

int main(void)
{
/* Function  : main (void)
 * Input     : none
 * Output    : 0, none
 * Procedure : Required function a add_number and printed result.
 */
  int result;

  result = add_numbers(4, 3);
  
  printf("sum is %d\n", result);
  
  return 0;
}


int add_numbers(int first_num, int second_num) 
{
  int sum;

  sum = first_num + second_num;

  return sum;
}
