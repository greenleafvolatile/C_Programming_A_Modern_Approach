/* Write a program that prints a one-month calendar. The user specifies the number of days in the month
   and the day of the week on which the month begins. */

#include<stdio.h>

int main(void){
    int daysInMonth, startingDayOfWeek;
    printf("Enter number of days in month: ");
    scanf("%d", &daysInMonth);
    printf("Enter starting day of the week (1=sun, 7=sat): ");
    scanf("%d", &startingDayOfWeek);
    

    for(int i=1;i<startingDayOfWeek;i++){
        printf("   ");
    }
    for(int i=1; i<=daysInMonth;i++, startingDayOfWeek++){
        printf("%3d", i);
        if(startingDayOfWeek==7){
            putchar('\n');
            startingDayOfWeek=0;
        }
    }
    putchar('\n');
    return 0;
}



