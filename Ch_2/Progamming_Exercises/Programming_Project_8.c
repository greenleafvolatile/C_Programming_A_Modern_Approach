#include <stdio.h>

int main(void){

float loanAmount;
float interestRate;
float monthlyPayment;

printf("Please enter loan amount: ");
scanf("%f", &loanAmount);
printf("Please enter interestRate: ");
scanf("%f", &interestRate);
printf("Please enter monthly payment: ");
scanf("%f", &monthlyPayment);

float monthlyInterestRate=(interestRate/100)/12;
float balanceAfterOneMonth=loanAmount+(loanAmount*monthlyInterestRate)-monthlyPayment;
float balanceAfterTwoMonths=balanceAfterOneMonth+(balanceAfterOneMonth*monthlyInterestRate)-monthlyPayment;
float balanceAfterThreeMonths=balanceAfterTwoMonths+(balanceAfterTwoMonths*monthlyInterestRate)-monthlyPayment;
printf("Balance remaining after first payment: %.2f\n", balanceAfterOneMonth);
printf("Balance remaining after second payment: %.2f\n", balanceAfterTwoMonths);
printf("Balance remainging after third payment: %.2f\n", balanceAfterThreeMonths);

return 0;
}

