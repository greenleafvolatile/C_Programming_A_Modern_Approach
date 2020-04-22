/* The value of the mathematical constant c can be expressed as an infite series:
   c=1+1/1!+1/2!+1/3!...
   Write a program that approximates c by computing the value of
   1+1/1!+1/2!+1/3!...+1/n!
   where n is an integer entered by the user. */

#include<stdio.h>

int getFactorial(int);
double computeC(double);

int main(void){
    double epsilon;
    printf("Enter a value for epsilon: ");
    scanf("%lf", &epsilon);
    printf("c: %.4lf", computeC(epsilon));
    return 0;
}

double computeC(double epsilon){
    double c=1.0;

    int n=1;
    double term=1.0/getFactorial(n);
    while(term>epsilon){
        c+=term;
        n++;
        term=1.0/getFactorial(n);
    }
    return c;
}

int getFactorial(int value){
    if(value==1){
        return 1;
    }
    return value * getFactorial(value-1);
}




