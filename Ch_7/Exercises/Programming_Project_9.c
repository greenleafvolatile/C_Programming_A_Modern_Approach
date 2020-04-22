/* Write a program that asks theuser  for a 12-hour time, then displays the time in 24-hour form.
   See Programming Project 8 for a description of the input format."*/

#include <stdio.h>
#include <ctype.h>

int main(void){

    int hours, minutes;
    char period;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &period);
    period=toupper(period);
    if(period=='P'){
        if(hours!=12){
            hours+=12;
        }
    }
    else{
        if(hours==12){
            hours=0;
        }
    }
    printf("Equivalent 24-hour time: %.2d:%.2d", hours, minutes);
    return 0;
}



