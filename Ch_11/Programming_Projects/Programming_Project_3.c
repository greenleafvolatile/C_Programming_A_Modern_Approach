/* Write a program that asks the user to enter a fraction, then reduces
   the fraction to lowest terms. Hint: To reduce a fraction to lowest terms,
   first compute the greatest common denominator of the numerator and 
   denominator. Then divide both the numerator and denominator by the GCD.*/

#include<stdio.h>
#include <stdlib.h>

void
reduce(int, int, int *, int *);

int main(void){
    int numerator, denominator, reduced_numerator, reduced_denominator;

    numerator = denominator = reduced_numerator = reduced_denominator = 0;


    printf("Enter a fraction: ");

    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);
    return (EXIT_SUCCESS);
}

void
reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {

    int a = numerator;
    int b = denominator;

    // Apply Euclidean algorithm.
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    *reduced_numerator = numerator / a;
    *reduced_denominator = denominator / a;
}


        


