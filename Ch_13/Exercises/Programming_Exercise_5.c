/*******************************************************************
 * "Write a function names capitalize that capitalizes all         *
 * letters in its argument. The argument will be a null-terminated *
 * string containing arbitrary characters, not just letter.        *
 * (a) Use array subscripting to access characters in the string.  *
 * (b) Rewrite the capitalize function, this time using            *
 * pointer arithmetic to access characters in the string."         *
 *******************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void
touppercase_subscripting(char *string);

void
touppercase_pointer_arithmetic(char *string);

int 
main(int argc, char *argv[]) {

    int i;

    for (i = 1; i < argc; i++) {
        printf("Using pointer arithmetic:\n");
        touppercase_pointer_arithmetic(argv[i]);
        printf("Using array subscripting:\n");
        touppercase_subscripting(argv[i]);
    }

    return 0;
}

void
touppercase_pointer_arithmetic(char *string) {

        for (; *string != '\0'; string++) {
            if (isalpha(*string)) {
                char ch = toupper(*string);
                printf("%c", ch);
            }
        }
        printf("\n");

}

void
touppercase_subscripting(char *string) {

    int i;

    for(i = 0; i < strlen(string); i++) {
        if (isalpha(string[i])) {
            char ch = toupper(string[i]);
            printf("%c", ch);
        }
    }
}
