#include <stdio.h>

int main(void){
    int hours, minutes;
    printf("Enter a time: ");
    scanf("%d:%d", &hours, &minutes);
    minutes=minutes+(hours*60);
    if(minutes<8*60){
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if(minutes<9*60+43){
        if(90*60+45-minutes<minutes-8*60) printf("Closest deprature time is 8:00 a.m., arriving at 10:16 a.a.");
        else printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if(minutes<11*60+19){
        if(11*60+19-minutes<minutes-(9*60+43)) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
        else printf("Closest departure time is 9:45 a.m., arriving at 11:52 a.m.");
    }
    else if(minutes<12*60+47){
        if(12*60+47-minutes<minutes-(11*60+10)) printf("Closest departure time is 12:47 p.m., arriving at 3.00 p.m.");
        else printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if(minutes<14*60){
        if(14*60-minutes<minutes-(12*60+47)) printf("Closest departure time is 2:00 p.m., arriving at 4.08 p.m.");
        else printf("Closest departure time is 12:47 a.m., arriving at 3.00 p.m.");
    }
    else if(minutes<15*60+45){
        if(15*60+45-minutes<minutes-14*60) printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
        else printf("Closest departure time is 2:00 p.m., arriving at 4.08 p.m.");
    }
    else if(minutes<19*60){
        if(19*60-minutes<minutes-(15*60+45)) printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
        else printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if(minutes<21*60+45){
        if(21*60+45-minutes<minutes-19*60) printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
        else printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    return 0;
}
       
   
