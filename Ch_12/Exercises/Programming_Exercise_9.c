/* "Write the following function: double inner product(const double *a, const double *b, int);
   a and b both point to arrays of length n. The function should return a[0] * b[0] + a[1] * b[1]
   + ... + a [n - 1] * b[n - 1]. Use pointer arithmetic -- not subscripting -- to
   visit array elements." */

#include <stdio.h>


// Macros
#define SIZE 4

// Prototypes 
double
inner_product(const double *a, const double *b, int n);

void
print(int[], int);

int
main(void){

    double a[SIZE] = {1, 2, 3, 4};
    double b[SIZE] = {5, 6, 7, 8};

    printf("The inner product is: %.0f", inner_product(a, b, SIZE));
    
    return 0;
}

void
print(int array[], int size) {
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }
}

double
inner_product(const double *a, const double *b, int size) {

    double product = 0;
    const double *p1, *p2;
    for (p1 = a, p2 = b; p1 < a + size && p2 < b + size; p1++, p2++) {
        product += *p1 * *p2;
    }
    return product;

}
