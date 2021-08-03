/*********************************************************************************************
 * "Write the following function: void get_extension(const char *file_name, char *extension).*
 * file_name points to a string containing a file name. The function should store the        *
 * extension on the file name in the string pointed to by extension. For example, if the file*
 * name doesn't have an extension, the fuction should store an empty string (a single         *
 * null character) in the string pointed to by extension. Keep the function as simple as      *
 * possible by having it use the strlen and strcpy functions".                               *
 *********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
get_extension(const char *file_name, char *extension);

int 
main(int argc, char *argv[]) {

    char extension[4];
    
    argc > 2 ? printf("Too many arguments!\n") : get_extension(argv[1], extension), printf("The extension is: %s\n", extension);

    return EXIT_SUCCESS;
}

void
get_extension(const char * file_name, char *extension) {

    int i;

    for (i = 0; i < strlen(file_name); i++) {
        if (file_name[i] == '.') {
            strcpy(extension, &file_name[i + 1]);
            return;
        }
    }

    extension[0] = '\0';
}

