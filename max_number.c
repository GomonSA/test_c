#include <stdio.h>

int get_max(int num1, int num2);


int main(void)
{

/****
*****************************************************************************
* Function  : int main(void)
* Input     : none
* Output    : Returns 0 on success
* Procedure : require a function get_max and return max value from twice
*                                                              variables.
****
****************************************************************************/

  int first_number = 100;
  int second_number = 200;
  int ret;
  
  // calling a function get_max to get max value
  ret = get_max(first_number, second_number);
  printf("Max value is : %d\n", ret);

  return 0;
}



int get_max(int num1, int num2)
{

/****
*****************************************************************************
* Function  : int max(int num1, int num2)
* Input     : int num1(first number), int num2 (second number)
* Output    : int
* Procedure : return the largest number from num_1 and num_2
****
****************************************************************************/

  // local variable declaration for result
  int result;

  if (num1 > num2) {
    result = num1;
  } else {
    result = num2;
  }


  return result;
}
