#include <stdio.h>

int main(void){
    int number;
    printf("Enter a number: ");
    scanf(" %d", &number);
    if(number>=0 && number<=9){
        printf("%d has one digit", number);
    }
    else if(number>=10 && number<=99){
        printf("%d has two digits", number);
    }
    else if(number>=100 && number<=999){
        printf("%d has three digits", number);
    }
    else if(number>=1000 && number<=9999){
        printf("%d has four digits", number);
    }
    return 0;
}

