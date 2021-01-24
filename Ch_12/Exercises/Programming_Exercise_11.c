/* ""Modify the fnd_largest function so that it uses pointer arithmetic -- not subscripting -- to 
   visist array elements." */
j
#include <stdio.h>

// prototyping
int
find_largest(int *, int);

int
main(void) {

    int array[5] = {10, 20, 100, 30, 60};
    printf("The largest value in the array is: %d", find_largest(array, 5));
    return 0;

}

int
find_largest(int a[], int n) {

    int max = *a;
    int *p = a + 1;
    for(;p < a + n; p++) {
        if (*p > max) {
            max = *p;
        }
    }
    return max;
}
