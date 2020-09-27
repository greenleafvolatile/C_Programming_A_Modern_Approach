/* "Modify Programming Project 7 from Chapter 2 so that it includes the following function:
    void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
    The function determines the smallest number of $20, $10, $5, and $1 bills necessary to
    pay the amount represented by the dollars parameter. The twenties parameter points to a
    variable in which the function will store the number of $20 bills required. The tens, fives,
    and ones parameters are similar." */

#include <stdio.h>
#include <stdlib.h>


void
pay_amount(int, int *, int *, int *, int *);

int main(void){

    int dollars = 0, twenties = 0, tens = 0, fives = 0, ones = 0;

    printf("Please enter a dollar amount: ");

    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("20$ bills: %d\n10$ bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, ones);

    return (EXIT_SUCCESS);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars = dollars - (*twenties * 20);

    *tens = dollars / 10;
    dollars = dollars - (*tens * 10);

    *fives = dollars / 5;
    dollars = dollars - (*fives * 5);

    *ones = dollars;
}

