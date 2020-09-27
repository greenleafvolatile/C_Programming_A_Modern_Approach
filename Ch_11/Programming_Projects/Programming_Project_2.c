/* "Modify Programming Project 8 from Chapter 5 so that it includes the following function:
   void find_closest_fligth(int desired time, int *departure_time, int *arriaval_time);
   This function will find the flight whose departure time is closest to desired_time
   (expressed in minutes since midnight). it will store the departure and arrival times
   of this flight (also expressed in minutes since midnight) in the variables pointed to  
   by departure_time and arrival_time." */

#include <stdio.h>

void
find_closest_flight(int, int *, int *);

int main(void){
    int hours, minutes, departure_time = 0, arrival_time = 0;
    printf("Enter a time: ");
    scanf("%d:%d", &hours, &minutes);
    minutes=minutes+(hours*60);
    find_closest_flight(minutes, &departure_time, &arrival_time);
    printf("Closest departure time is %02d:%02d. Closest arrival time is: %02d:%02d", departure_time / 60, departure_time % 60, arrival_time / 60, arrival_time % 60);
    return 0;
}

void
find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    // If desired time is earlier than 08:00 a.m., check if it is closer to earliest departure time of the current day or the latest departure time of the previous day.
    if (desired_time < 8 * 60) {
        if (8 * 60 - desired_time < 24 * 60 - (21 * 60 + 45) + desired_time ) {
            *departure_time = 8 * 60;
            *arrival_time = 10 * 60 + 16;
        }
        else {
            *departure_time = 21 * 60 + 45;
            *arrival_time = 23 * 60 + 58;
        }
    }
    else if (desired_time < 9 * 60 + 43) {
        if (9 * 60 + 43 - desired_time < desired_time- 8 * 60) {
            *departure_time = 9 * 60 + 43;
            *arrival_time = 11 * 60 + 52;
        }
        else {
            *departure_time = 8 * 60;
            *arrival_time = 10 * 60 + 16;
        }
    }
    else if (desired_time < 11 * 60 + 19) {
        if (11 * 60 + 19 - desired_time < desired_time - (9 * 60 + 43)) {
            *departure_time = 11 * 60 + 19;
            *arrival_time = 13 * 60 + 31;
        }
        else {
            *departure_time = 9 * 60 + 43;
            *arrival_time = 11 * 60 + 52;
        }
    }
    else if (desired_time < 12 * 60 + 47) {
        if (12 * 60 + 47 - desired_time < desired_time - (11 * 60 + 19)) {
            *departure_time = 12 * 60 + 47;
            *arrival_time = 15 * 60;
        }
        else {
            *departure_time = 11 * 60 + 19;
            *arrival_time = 13 * 60 + 31;
        }
    }
    else if (desired_time < 14 * 60) {
        if (14 * 60 - desired_time < desired_time - (12 * 60 + 47)) {
            *departure_time = 14 * 60;
            *arrival_time = 16 * 60 + 8;
        }
        else {
            *departure_time = 12 * 60 + 47;
            *arrival_time = 15 * 60;
        }
    }
    else if (desired_time < 15 * 60 + 45) {
        if (15 * 60 + 45 - desired_time < desired_time - 14 * 60) {
            *departure_time = 15 * 60 + 45;
            *arrival_time = 17 * 60 + 55;
        }
        else {
            *departure_time = 14 * 60;
            *arrival_time = 16 * 60 + 8;
        }
    }
    else if (desired_time < 19 * 60) {
        if (19 * 60 - desired_time < desired_time - (15 * 60 + 45)) {
            *departure_time = 19 * 60;
            *arrival_time = 21 * 60 + 20;
        }
        else {
            *departure_time = 15 * 60 + 45;
            *arrival_time = 17 * 60 + 55;
        }
    }
    else if (desired_time < 21 *  60 + 45) {
        if (21 * 60 + 45 - desired_time < desired_time - 19 * 60) {
            *departure_time = 21 * 60 + 45;
            *arrival_time = 23 * 60 + 58;
        }
        else {
            *departure_time = 19 * 60;
            *arrival_time = 21 * 60 + 20;
        }
    }
    // If desired time is later than 21:45, check if it is closer to latest departure time of current day or earliest departure time of next day.
    else if (desired_time > 21 * 60 + 45) {
        if (desired_time - 21 * 60 + 45 < 24 * 60 - desired_time + 8 * 60) {
            *departure_time = 21 * 60 + 45;
            *arrival_time = 23 * 60 + 58;
        }
        else {
            *departure_time = 8 * 60;
            *arrival_time = 10 * 60 + 16;
        }
    }
}








       
   
