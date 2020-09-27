/* Programming Project 1 in Chapter 4 asked you to write a program
   that displays a two-digit number with its digits reversed. Generalize
   the progrm so that the number can have on, two, three, or more digits.
   Hint: Use a do loop that repeatedly divides the number by 10, stopping
   when it reaches 0. */

#include <stdio.h>

int main(void){
    int number, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The reversal is: ");
    do{
        lastDigit=number%10;
        number=number/10;
        printf("%d", lastDigit);
    } while(number>0);
    putchar('\n');
    return 0;
}


