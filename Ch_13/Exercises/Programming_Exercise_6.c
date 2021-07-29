/*************************************************************
 * "Write a function named censor that modifies a string by  * 
 * replacing every occurence of foo by xxx. Make the function*
 * as short as possible without sacrificing clarity."        *
 *************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char*
censor(char *);

int
main(int argc, char *argv[]) {

    int i;

    for (i = 1; i < argc; i++) {

        char *string = argv[i];
        printf("%s ", censor(string));
        
    }

    return EXIT_SUCCESS;

}

char*
censor(char *string) {
    
    bool sequence_start = false;
    int counter = 0;
    
    for (int j = 0; j < strlen(string); j++) {
            // If an f is encountered start checking for the sequence foo.
            if (string[j] == 'f') {
                sequence_start = true;
            } else {
                // Count the number of o's after the f.
                if (sequence_start == true && string[j]  == 'o') {
                    counter++;
                    // If two o's are encountered, change the current and the previous two elements to 'x'.
                    if (counter == 2) {
                        string[j - 2] = 'x';
                        string[j - 1] = 'x';
                        string[j] = 'x';
                        counter = 0;
                        sequence_start = false;

                    }
                } else if (sequence_start == true && string[j] != 'o'){
                    counter = 0;
                    sequence_start = false;
                } 
            }
    }
    return string;
}
