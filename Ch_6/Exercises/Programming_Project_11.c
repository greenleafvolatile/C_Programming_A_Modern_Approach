/* The value of the mathematical constant c can be expressed as an infite series:
   c=1+1/1!+1/2!+1/3!...
   Write a program that approximates c by computing the value of
   1+1/1!+1/2!+1/3!...+1/n!
   where n is an integer entered by the user. */

#include<stdio.h>

int getFactorial(int);
float computeC(int);

int main(void){
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("c: %.4f", computeC(n));
    return 0;
}

float computeC(int n){
    float c=1.0f;
    for(int i=2;i<=2;i++){
        c+=1/getFactorial(i);
    }
    return c;
}

int getFactorial(int value){
    if(value==1){
        return 1;
    }
    return value * getFactorial(value-1);
}




