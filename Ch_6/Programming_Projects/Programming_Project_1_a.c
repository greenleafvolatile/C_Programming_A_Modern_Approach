/* Write a program that find the largest in a series of numbers entered by the user. 
The program must prompt the user to enter numbers one by one. When the user enters 0
or a negative number, the program myst display the largest nonnegative number entered.*/

#include<stdio.h>

int main(void){
    int highestNumber=0;
    int number=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(number>0){
        if(number>highestNumber) highestNumber=number;
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    printf("The largest number entered was: %d", highestNumber);
    return 0;
}

        

        
