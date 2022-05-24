/****************************************************************************
 * Programming Project 7: Write a program that asks the user to enter a U.S.*
 * dollar amount and then shows how to pay that amount using the smallest   *
 * number of $20, $10, $5 and $1 bills.                                     *
 *                                                                          *
 * @author Daan Pol                                                         *
 * @version 1.0                                                             *
 * @since 24-05-2022                                                        *
 * **************************************************************************/
//Directives
#include <stdio.h>

int
main(void)
{
  
  int amount;

  // Ignoring printf(const char *format) return values.
  printf("Enter a dollar amount: ");

  if (scanf("%d", &amount)) {
      int twenty_dollar_bills = amount / 20;
      amount -= twenty_dollar_bills * 20;
      int ten_dollar_bills = amount / 10;
      amount -= ten_dollar_bills * 10;
      int five_dollar_bills = amount / 5;
      amount -= five_dollar_bills * 5;
      printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenty_dollar_bills, ten_dollar_bills, five_dollar_bills, amount);
  } else {
    printf("Invalid input!\n");
  }

  return 0;
}

