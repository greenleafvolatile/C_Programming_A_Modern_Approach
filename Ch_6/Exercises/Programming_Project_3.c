/* Write a program that asks the user to enter a fraction, then reduces
   the fraction to lowest terms. Hint: To reduce a fraction to lowest terms,
   first compute the greatest common denominator of the numerator and 
   denominator. Then divide both the numerator and denominator by the GCD.*/

#include<stdio.h>

/* Function declaration.*/
int getGreatestCommonDenominator(int, int);

int main(void){
    int numerator, denominator, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    gcd=getGreatestCommonDenominator(numerator, denominator);
    printf("In lowest terms: %d/%d", numerator/gcd, denominator/gcd);
    return 0;
}

int getGreatestCommonDenominator(int firstInt, int secondInt){

    while(secondInt!=0){
        int remainder=firstInt%secondInt;
        firstInt=secondInt;
        secondInt=remainder;
    }
    return firstInt;
}


        


