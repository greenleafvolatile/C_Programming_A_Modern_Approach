/******************************************************************************************* 
 *  "Write a loop that prints all temperature readings stored in row i of the temperatures *
 *  array (see Exercise 14). Use a pointer to visit each element of the row."              * 
 *******************************************************************************************/

// Directives

#include <stdio.h>
#include <stdlib.h>

// Macros

#define ROWS 7
#define COLUMNS 24

// Prototypes

void
print_row(const int a[], int row_number);

int
main(void) {

    int temperatures[ROWS][COLUMNS] = { {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 12, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 32, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}};

    print_row(temperatures[0], 2);
    return(EXIT_SUCCESS);

}


void
print_row(const int a[], int row_number) {

    const int *p;

    printf("Row number %d:", row_number);

    for (p = a + COLUMNS * (row_number - 1); p < a + COLUMNS * (row_number - 1) + COLUMNS; p++) {
        printf(" %d", *p);
    }
}
