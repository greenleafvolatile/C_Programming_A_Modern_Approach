/* Add a loop to the broker.c program of Section 5.2 so that the user can enter more
   than one trade and the program will calculate the commission on each. The program
   should terminate when the user enters 0 as the trade value. */

#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void){
    float commission, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);
    while(value!=0.0f){
        
        if(value<250.00f)
            commission=30.00f + .017f * value;
        else if(value<6250.00f)
            commission=56.00f + .0066f * value;
        else if(value<2000.00f)
            commission=76.00f + .0034f * value;
        else if(value<50000.00f)
            commission=100.00f + .0022f  *value;
        else if(value<500000.00f)
            commission=155.00f + .0011f * value;
        else 
            commission=255.00f + .0009f * value;

        if(commission<39.00f) commission=39.00f;

        printf("Commission: $%.2f\n", commission);

        printf("Enter value of trade: ");
        scanf("%f", &value);
    }


    return 0;
}


