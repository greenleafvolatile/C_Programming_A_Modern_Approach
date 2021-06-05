/*************************************************************************
 * Modify Programming Project 14 from Chapter 8 so that it uses a pointer*
 * instead of an integer to keep track of the current position in the    *
 * array that contains the sentence.                                     *
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

char array[SIZE];

char *
read_sentence(void);

void
print_reverse_sentence(char *);

void
print_word(char *, char);

int 
main(void) {
    printf("Enter a sentence: ");
    print_reverse_sentence(read_sentence());
    return EXIT_SUCCESS;
}

/*
   This methods prints a sentence in reverse.
*/
void
print_reverse_sentence(char *p) {
    char final_char = *p;

    for(; p >= array; p--) {
        if (*p == ' ') {
            print_word(p + 1, final_char);
            putchar(' ');
        } else if (p == array) {
            print_word(p, final_char);
        }
    }
    putchar(final_char);
    return;
}

/*
   This method prints a word.
*/
void
print_word(char *p, char final_char) {
    while(*p != ' ' && *p != final_char) {
        putchar(*p);
        p++;
    }
    return;
}

/*
   This method reads a sentence from stdin.
*/
char *
read_sentence(void) {
    char ch, *p = array;
    
    while(ch != '.' && ch != '!' && ch != '?') {

        ch = getchar();
        *p++ = ch;
    }
    return --p;
}
