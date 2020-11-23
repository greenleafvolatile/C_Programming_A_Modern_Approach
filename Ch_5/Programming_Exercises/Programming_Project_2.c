#include <stdio.h>

int main(void){
    int hours, minutes;
    printf("Please enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    if(hours==0){
        printf("Equivalent 12-hour time: 12:%.2dAM", minutes);
    }
    else if(hours==12){
        printf"Equivalent 12-hour time: 12:%.2dPM", minutes);
    }
    else if(hours>12){
        printf("Equivalent 12-hour time: %d:%.2dPM", hours-12,minutes);
    }
    else{
        printf("Equivalent 12-hour time: %d:%.2dAM", hours, minutes);
    }
    return 0;
}






