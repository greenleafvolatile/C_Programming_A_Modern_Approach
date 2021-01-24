/* "Rewrite the following function to use pointer arithmetic instead of array subscripting.
   (In other words, eliminate the variable i and all uses of the [] operator.) Make as
   few changes as possible." */

#include <stdio.h>
#include <stdlib.h>

// Macros
#define SIZE 4

// Prototypes
void
store_zeros(int a[], int n);

void
print(const int a[], int size);

// Entry point to program
int
main(void) {
    int array[SIZE] = {1, 2, 3, 4};
    print(array, SIZE);
    store_zeros(array, SIZE);
    print(array, SIZE);
    return(EXIT_SUCCESS);
}

void
store_zeros(int a[], int size) {

    int *p;

    for (p = a; p < a + size; p++) {
        *p = 0;
    }
}

void
print(const int a[], int size) {
    

    for (const int *i = a; i < a + size; i++) {
        printf("%d\n", *i);
    }
}




