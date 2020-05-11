#include <stdio.h>

#define SIZE (int) (sizeof(departureTimes)/sizeof(departureTimes[0]))

int main(void){
    int i, hours, minutes, userDepartureTime, closestDepartureTime, arrivalTime, arrivalHour, arrivalMinutes, departureHour, departureMinutes;
    int departureTimes[]={480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivalTimes[]={616, 712, 811, 900, 968, 1075, 1280, 1438};
    char* departurePeriod;
    char* arrivalPeriod;
    
    printf("Enter a departure time: ");
    scanf("%d:%d", &hours, &minutes);
    userDepartureTime=minutes+(hours*60);

    for(i=0; i < SIZE; i++){

        // Case 1: user time coincides with departure time.
        if(userDepartureTime==departureTimes[i]){
            closestDepartureTime=departureTimes[i];
        }

        // Case 2: user time later than departure time.
        else if(userDepartureTime>departureTimes[i]){

            
            // If user time later than departure time but less than next departure time, find closest departure time.
            if(i < 7 &&  userDepartureTime<departureTimes[i+1]){
                if(userDepartureTime-departureTimes[i]>departureTimes[i+1]-userDepartureTime){
                    closestDepartureTime=departureTimes[i+1];
                }
                else{
                    closestDepartureTime=departureTimes[i];
                }
            }
            // If user time later than departure time and later than next departure time, increment i.
            else if(i < 7 && userDepartureTime>departureTimes[i+1]){
                continue;
            }
            // Edge case 1: user time later than latest departure time. Check if latest departure time is closer than earliest departure time.
            else if(i==7){
                if(userDepartureTime-departureTimes[i]>userDepartureTime-departureTimes[0]){
                    closestDepartureTime=departureTimes[0];
                }
                else{
                    closestDepartureTime=departureTimes[i];
                }
            }
        }
        // Edge case 2: user time is earlier than earliest departure time
        else if(i==0 && userDepartureTime<departureTimes[0]){
            if(departureTimes[0]-userDepartureTime>24*60-departureTimes[7]+userDepartureTime){
                closestDepartureTime=departureTimes[SIZE-1]; // userDepartureTime closest to latest departure time.
            }
            else{
                closestDepartureTime=departureTimes[0]; // userDepartureTime closest to earliest departure time.
            }
        }

        // Find arrival time.
        for(i=0;i<SIZE;i++){
            if(departureTimes[i]==closestDepartureTime) arrivalTime=arrivalTimes[i];
        }

        // Convert to 12 hour clock.
        if(arrivalTime<720){
            arrivalPeriod="a.m.";
            arrivalHour=arrivalTime / 60==0?12:arrivalTime / 60; // account for midnight being 12:00 AM.
            arrivalMinutes=arrivalTime % 60;
        }
        else{
            arrivalPeriod="p.m.";
            arrivalHour=arrivalTime / 60>13?arrivalTime / 60 - 12:arrivalTime / 60; // account for midday being 12:00 PM.
            arrivalMinutes=arrivalTime % 60;
        }

        if(closestDepartureTime<720){
            departurePeriod="a.m.";
            departureHour=closestDepartureTime/ 60;
            departureMinutes=closestDepartureTime % 60;
        }
        else{
            departurePeriod="p.m.";
            departureHour=closestDepartureTime / 60==0?12:closestDepartureTime / 60;
            departureMinutes=closestDepartureTime % 60;
        }

    }
    printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s", departureHour, departureMinutes, departurePeriod, arrivalHour, arrivalMinutes, arrivalPeriod);
    return 0;
}
       
   
