#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROWS 7
#define COLUMNS 24

bool
search(const int a[], int rows, int columns, int key);

int
main(void) {


    int key = 32;
    int temperatures[ROWS][COLUMNS] = { {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 32, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}};

    printf("The array contains the value %d:", key);
    printf(search(temperatures, ROWS, COLUMNS, key) > 0 ? "True" : "False" );
    return(EXIT_SUCCESS);

}

bool
search(const int a[], int rows, int columns, int key) {

    const int *end = a + rows * columns;
    for (; a < end; a++) {
        if (*a == key) {
            return true;
        }
    }
    return false;
}
