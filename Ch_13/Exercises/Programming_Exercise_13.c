/********************************************************************************************
 * "Write the following function: void build_index_url(const char *domain, char *index_url) *
 * domain points to a string containing an Internet domain, such as knking.com. The        *
 * function should add "http:/www." to the beginning of this string and "/index.html" to the *
 * end of the string, storing the result in the string pointed to by index_url. You may      *
 * assume that index_url points to a variable that is long enough to hold the resulting     *
 * string. Keep the function as simple as possible by having it use the strcat and          *
 * strcpy functions."                                                                       *
 ********************************************************************************************/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void
build_index_url(const char *domain, char *index_url);

int
main(int argc, char *argv[]) {

    char index_url[40];

    if (argc > 2) {
        printf("Too many arguments\n.");
    } else {

        build_index_url(argv[1], index_url);
        printf("Index url: %s\n", index_url);
    }

    return EXIT_SUCCESS;
    
}

void
build_index_url(const char *domain, char *index_url) {

    strcat(strcat(strcpy(index_url, "http:/www."), domain), "/index.html");

}
