/* "Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
   amount of income tax. When passed an amount of taxable income, the function will return
   the tax due." */

#include <stdio.h>

float 
computeTax(int);

int main(void){

    float income;
    printf("Enter taxable income: ");
    scanf("%f", &income);
    printf("Tax due: %.2f", computeTax(income));
    return 0;
}

float computeTax(int income){
    float tax;
    if(income > 7000){
        tax = 230.00f + (.06f * (income - 7000));
    }
    else if(income > 5250){
        tax = 142.50f + (.05f * (income - 5250));
    }
    else if(income > 3750){
        tax = 82.5f + (.04f * (income - 3750));
    }
    else if(income > 2250){
        tax = 37.5f * (.03f * (income - 2250));
    }
    else if(income > 750){
        tax = 7.5f * (.02f * (income - 750));
    }
    else{
        tax = .01f * income;
    }
    return tax;
}

