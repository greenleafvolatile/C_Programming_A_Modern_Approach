/* Programming Project 9 in Chapter 5 asked you to write a program that determines which of 
   two dates comes earlier on the calendar. Generalize the program so that the user may enter
   any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered. */

#include <stdio.h>

int main(void){
    int year, earliestYear, month, earliestMonth, day, earliestDay;
    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    earliestYear=year;
    earliestMonth=month;
    earliestDay=day;
    while(!(day==0 && month==0 && year==0)){
            
        if(year<earliestYear || (year==earliestYear && month<earliestMonth) || (year==earliestYear && month==earliestMonth && day<earliestDay)){
            earliestYear=year;
            earliestMonth=month;
            earliestDay=day;
        }
        printf("Enter a date (dd/mm/yy): ");
        scanf("%d/%d/%d", &day, &month, &year);
    }
    printf("%d/%d/%2d is the earliest date", earliestDay, earliestMonth, earliestYear);
    return 0;
}

        








