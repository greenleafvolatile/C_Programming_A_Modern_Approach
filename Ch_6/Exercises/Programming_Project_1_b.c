#include <stdio.h>

int main(void){
    int number;
    int highestNumber=0;
    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number>0 && number>highestNumber) highestNumber=number;
        else break;
    }
    printf("The largest number entered was: %d", highestNumber);
    return 0;
}

            
