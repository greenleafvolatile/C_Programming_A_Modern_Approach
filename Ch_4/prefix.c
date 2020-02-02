#include <stdio.h>

int main(void){

    int i=1;
    printf("i=1\n");
    printf("The result of \'printf(\"%%d\", ++i)\' is: %d\n", ++i);
    // \'printf(\"i=%d\n\", ++i)\' 
    return 0;
}
