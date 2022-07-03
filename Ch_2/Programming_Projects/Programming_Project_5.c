/*****************************************************************************
 * Progamming Project 5: Write a program that asks the user to enter a value *
 * for x and then displays the value of the following polynomial:            *
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6                                         *
 *                                                                           *
 * @author: greenleafvolatile                                                *
 * @version: 1.0                                                             *
 * @since: 24-5-2022                                                         *
 *****************************************************************************/
// Directives
#include <stdio.h>

// Prototypes
int
power(int, int);

int
main(void) {
  
  int value;

  // Ignoring printf(const char * format) return values.
  printf("Enter a value for x: ");

  if (scanf("%d", &value)) {
    printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", 3 * power(value, 5) + 2 * power(value, 4) - 5 * power(value, 3) - power(value, 2) + 7 * value - 6);
  } else {
    printf("Invalid input!");
  }

  return 0;
}


int
power(int base, int power) 
{

  int result = 1;
  for (int i = 0; i < power; ++i) {
    result *= base;
  }

  return result;
}
