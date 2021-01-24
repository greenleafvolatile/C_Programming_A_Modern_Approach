/* "Write the following function: bool search(const int a[], int n, int key);
   a is an array to be searched, n is the number of elements in the array, and key
   is the search key. search should return true if key matchces some element of a, and false if it
   doesn't. Use pointer arithmetic --not subscripting -- to visit array elements. " */ 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Macros
#define SIZE 7

// Prototypes
bool
search(const int a[], int n, int key);

// Entry point to program
int
main(void) {
    int array[SIZE] = {17, 15, 1, 33, 502, 211, 117};
    int value = 33;
    printf("%s\n", search(array, SIZE, value) > 0 ? "True" : "False");
    return(EXIT_SUCCESS);
}

bool
search(const int array[], int size, int value) {

    const int *end = array + size;

    for (const int *p = array; p < end; p++) {

        if (*p == value) {
            return true;
        }
    }
    return false;
}



