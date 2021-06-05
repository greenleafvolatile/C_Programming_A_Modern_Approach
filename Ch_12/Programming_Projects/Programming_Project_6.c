/********************************************************* *
 * Modify the qsort.c program of Section 9.6 so that low,  *
 * high and middle are pointers to array elements rather    *
 * than integers. The split function will need to return   *
 * a pointer, not an integer.                              *
 ***********************************************************/

#include <stdio.h>

#define SIZE 4

void
quicksort(int *, int *);

int *
split(int *, int *);

int
main(void) {

    int array[SIZE], i;

    printf("Enter %d numbers to be sorted: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }
    
    quicksort(array, (int *) (&array + 0) - 1);

    printf("In sorted order: ");
    for(i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void
quicksort(int *low, int *high) {
    int *middle;

    if(low >= high) return;

    middle = split(low, high);
    quicksort(low, middle - 1);
    quicksort(middle + 1, high);
}

int *
split(int *low, int *high) {
    int part_element = *low;

    for(;;) {
        while(low < high && part_element <= *high) {
            high--;
        }

        if (low >= high) break;

        *low++ = *high;

        while(low < high && part_element >= *low) {
            low++;
        }

        if(low >= high) break;

        *high-- = *low;
    }
    *high = part_element;

    return high;
}
