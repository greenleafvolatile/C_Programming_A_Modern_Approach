#include<stdio.h>

int main(void){
    int firstInt, secondInt;
    printf("Enter two integers: ");
    scanf("%d %d", &firstInt, &secondInt);
    while(secondInt>0){
        int temp=firstInt%secondInt;
        firstInt=secondInt;
        secondInt=temp;
    }
    printf("Greatest common divisor: %d", firstInt);
    return 0;
}

    



