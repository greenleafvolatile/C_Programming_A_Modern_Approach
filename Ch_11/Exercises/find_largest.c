#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int *find_largest(int[], int n);


int
main(void) {

    int array[SIZE] = {0}, largest = 0;
    printf("Enter ten integers: ");
    int index = 0;
    while(index < SIZE) {
        scanf("%d", &array[index]);
        index++;
    }
    largest = *find_largest(array, SIZE);
    printf("Largest: %d", largest);
    return (EXIT_SUCCESS);

}

int *
find_largest(int array[], int size) {
    int *p;
    int largest = array[0];

    for(int i = 1; i < size; i++) {
        if (array[i] > largest){
            largest = array[i];
            p = &array[i];
        }
    }
    return p;
}
            




