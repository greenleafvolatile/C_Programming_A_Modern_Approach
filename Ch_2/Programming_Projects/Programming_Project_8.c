/****************************************************************************
 * Write a program that calculates the remaining balance on a aloan after   *
 * the first, second, and third monthly payments.                           *
 *                                                                          *
 * @author Daan Pol                                                         *
 * @verion 1.0                                                              *
 * @since 25-05-2022                                                        *
 * **************************************************************************/
// Directives:
#include <stdio.h>

// Prototypes:
float
get_balance(float, float, float);

int
main(void) 
{

  float balance, interest_rate, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &balance);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("Balance remaining after first payment: %.2f\n", balance = get_balance(balance, interest_rate, monthly_payment));
  printf("Balance remaining after seocnd payment: %.2f\n", balance = get_balance(balance, interest_rate, monthly_payment));
  printf("Balance remaining after third payment: %.2f\n", balance = get_balance(balance, interest_rate, monthly_payment));

  return 0;
}

float
get_balance(float balance, float interest_rate, float monthly_payment) 
{

  float interest = balance * (interest_rate / 100.0f) / 12;

  return balance + interest - monthly_payment;
}




