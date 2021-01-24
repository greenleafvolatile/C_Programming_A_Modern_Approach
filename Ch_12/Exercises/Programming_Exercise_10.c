#include <stdio.h>

#define SIZE 5

int *
find_middle(int *, int);

int
main(void) {

    int array[SIZE];

    for (int i = 0; i < SIZE; i++) {
        array[i] = i + 1;
    }

    printf("The element in the middle of the array has value: %d", *find_middle(array, SIZE));

}

int *find_middle(int a[], int n) {
    
    return a + n / 2;
}
