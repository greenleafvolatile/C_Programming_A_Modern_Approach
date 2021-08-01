/*************************************************************************************
 * "The Q&A section at the end o this chapter shows how the strcmp function might    *
 * be written using arrays subscripting. Modify thefunction to use pointer arithmetic*
 * instead."                                                                         *
 *************************************************************************************/

#include <stdio.h>
#include <string.h>

int 
stringcompare(char *s, char *t);

int
main(void) {

    char *str1 = "abc";
    char *str2 = "def";

    printf("String 1 is greater than string 2: %s\n", stringcompare(str1, str2) > 0 ? "True." : "False.");

    return 0;

}

int
stringcompare(char *s, char *t) {

    for (;*s == *t; s++) {
        if (*s == '\0') {
            return 0;
        }
    }

    return *s - *t;
}


