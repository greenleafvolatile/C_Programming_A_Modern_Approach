#include <stdio.h>
#include <stdlib.h>

int
main(void) {
    int i = 1;
    int *p = &i;
    *&p = 2;
    printf("i: %d\n", i);
    return(EXIT_SUCCESS);
}
