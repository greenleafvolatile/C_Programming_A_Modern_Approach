/* "Rewrite the following function to use pointer arithmetic instead of array subscripting. 
   (In other words, eliminate the variable i and all uses of the [] operator.) Make as 
   few changes as possible." */

// Header files to include:

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototypes:

int
sum_array(const int[], int);

int
sum_array_pointer_arithmetic(int * , int);

// Entry point to program

int
main(void) {

    int array[] = {1, 2, 3, 4};
    
    printf("Sum: %d\n", sum_array_pointer_arithmetic(array, 4));
    printf("Sum: %d\n", sum_array(array, 4));
    return (EXIT_SUCCESS);
}

int
sum_array(const int array[], int size) {

    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;

}

int
sum_array_pointer_arithmetic(int *p, int size) {

    int sum = 0;
    int *array_end = p + size;

    for (; p  < array_end; p++) {
        sum += *p;
    }
    return sum;

}



