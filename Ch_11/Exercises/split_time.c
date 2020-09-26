#include <stdio.h>
#include <stdlib.h>


void split_time(long total_sec, int *hr, int *min, int*sec);

int
main(void) {
    long total_sec;
    int hr, min, sec;

    total_sec = 20512;
    split_time(total_sec, &hr, &min, &sec);
    printf("Hour(s): %d\nMinutes: %d\nSeconds: %d", hr, min, sec);
    return (EXIT_SUCCESS);
}

void
split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 3600;
    *min = (total_sec / 60) % 60;
    *sec = total_sec % 60;
}



