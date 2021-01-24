/* "Write the following function : void find_two_largest(const int *a, int n, int *largest, int *second_largest);
   a points to an array of length n. The function searches the array for its largest and second largest elements,
   storing them in the variables pointed to by largest and second_largest, respectively. use pointer arithmetic
   -not subscripting- to visit array elements." */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void
find_two_largest(const int *a, int n, int *largest, int *second_largest);

int
main(void) {

    int array[SIZE] = {5, 4, 11, 2, 1};
    int largest, second_largest;
    find_two_largest(array, SIZE, &largest, &second_largest);
    printf("Largest: %d\nSecond largest: %d", largest, second_largest);
    return(EXIT_SUCCESS);
}

void
find_two_largest(const int *a, int size, int *largest, int *second_largest) {

    const int *endOfArray = a + size;
    *largest = *second_largest = *a;
    for (; a < endOfArray; a++) {
        if (*a > *largest) {
            *second_largest = *largest;
            *largest = *a;
            
        }
        else if (*a > *second_largest) {
            *second_largest = *a;
        }
    }
}


