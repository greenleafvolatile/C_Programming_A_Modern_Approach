/**************************************************************************
 * Programming Project 4: Write a program that asks the user to enter     *
 * a dollars-and-cents amount, then displays the amount with 5% tax added.*
 *                                                                        *
 * @author: greenleafvolatile                                             *
 * @version: 1.0                                                          *
 * @since: 24-05-2022                                                     *
 * ************************************************************************/
// Directives:
#include <stdio.h>

int
main(void)
{
  float amount;

  // Ignoring printf(const char * format) return values.
  printf("Enter an amount: ");
  if (scanf("%f", &amount)) {
    printf("With tax added: $%.2f\n", amount * 1.05f);
  } else {
    printf("Invalid input!\n");
  }

  return 0;
}


