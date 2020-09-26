#include <stdio.h>
#include <stdlib.h>

#define N 5

void find_two_largest(int array[], int n, int *largest, int *second_largest);

int
main(void) {

    int array[N] = {0};
    int i = 0;
    int largest = 0;
    int second_largest = 0;

    printf("Enter %d integers: ", N);

    while (i < N) {
        scanf("%d", &array[i]);
        i++;
    }

    find_two_largest(array, N, &largest, &second_largest);
    printf("Largest: %d\nSecond largest: %d\n", largest, second_largest);
    
    return (EXIT_SUCCESS);

}


void
find_two_largest(int array[], int size, int *largest, int *second_largest) {
    
    for (int i = 0; i < size; i++) {
        if (array[i] > *largest) {
            *second_largest = *largest;
            *largest = array[i];
        }
        else if (array[i] > *second_largest) {
                *second_largest = array[i];
        }
    }
}
            





    
