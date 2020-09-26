#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

bool
isLeap(int);

int
main(void) {

    int day_of_year = 0;
    int year = 0;
    int month = 0;
    int day = 0;
    printf("Please enter a year: ");
    scanf("%d", &year);
    printf("Please enter a day of year: ");
    scanf("%d", &day_of_year);
    split_date(day_of_year, year, &month, &day);
    printf("Month: %d\nDay: %d\n", month, day);
    return (EXIT_SUCCESS);
}

void
split_date(int day_of_year, int year, int *month, int *day) {
    int leapDay = isLeap(year) ? 1 : 0;
    // January.
    if (day_of_year <= 31) {
        *month = 1;
        *day = day_of_year;
    }
    // February.
    else if (day_of_year <= 59 + leapDay) {
        *month = 2;
        if (day_of_year == 60){
            *day = 29;
        }
        else {
            *day = day_of_year - 31;
        }
    }
    // March.
    else if (day_of_year <= 90 + leapDay) {
        *month = 3;
        *day = day_of_year - (59 + leapDay);
    }
    // April.
    else if (day_of_year <= 120 + leapDay) {
        *month = 4;
        *day = day_of_year - (90 + leapDay);
    }
    // May.
    else if (day_of_year <= 151 + leapDay) {
        *month = 5;
        *day = day_of_year - (120 + leapDay);
    }
    // June.
    else if (day_of_year <= 181 + leapDay) {
        *month = 6;
        *day = day_of_year - (151 + leapDay);
    }
    // July.
    else if (day_of_year <= 212 + leapDay) {
        *month = 7;
        *day = day_of_year - (181 + leapDay);
    }
    // August.
    else if (day_of_year <= 243 + leapDay) {
        *month = 8;
        *day = day_of_year - (212 + leapDay);
    }
    // September.
    else if (day_of_year <= 273  + leapDay) {
        *month = 9;
        *day = day_of_year - (243 + leapDay);
    }
    // October.
    else if (day_of_year <= 304 + leapDay) {
        *month = 10;
        *day = day_of_year - (273 + leapDay);
    }
    // November.
    else if (day_of_year <= 334 + leapDay) {
        *month = 11;
        *day = day_of_year - (304 + leapDay);
    }
    // December.
    else if (day_of_year <= 365 + leapDay) {
        *month = 12;
        *day = day_of_year - (334 + leapDay);
    }
}


bool
isLeap(int year) {
    if (year % 4 == 0) {
        if (!year % 100 == 0){
            return true;
        }
        else{
            if (year % 400 == 0) {
                return true;
            }
        }
    }
    return false;
}








