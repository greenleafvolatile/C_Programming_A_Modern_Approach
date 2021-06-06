/********************************************************
 * Modify the maxmin.c program of Section 11.4 so that  *
 * the max_min function uses a pointer instead of an    *
 * integer to keep track of the current position in the *
 * array.                                               *
 ********************************************************/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void max_min(int a[], int n, int *max, int *min);

int
main(void) {
    int b[SIZE], i, big, small;

    printf("Enter %d numbers: ", SIZE);
    for (i = 0;i < SIZE; i++) {
        scanf("%d", &b[i]);
    }

    max_min(b, SIZE, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return(EXIT_SUCCESS);
}

void
max_min(int a[], int n, int *max, int *min) {
    int *i;

    *max = *min = a[0];

    for (i = a + 1; i < a + SIZE; i++) {
        if (*i > * max) {
            *max = *i;
        } else if (*i < *min) {
            *min = *i;
        }
    }
}




