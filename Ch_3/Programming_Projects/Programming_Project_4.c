/**************************************************************************
 * @file Programming_Project_4.c                                          *
 *                                                                        *
 * @brief                                                                 *
 *                                                                        *
 * Programming Project 4: "Write a program that prompts the user to enter *
 * a telephone number in the form (xxx) xxx-xxxx and then displays        *
 * the number in the form xxx.xxx.xxxx."                                  *
 *                                                                        *
 * @author greenleafvolatile                                              *
 * @version 1.0                                                           *
 * @since 10-07-2022                                                      *
 **************************************************************************/

// Directives
#include <stdio.h>
#include <stdlib.h>

// A (null-terminated) string representing a phone number in the format
// (xxx) xxx-xxxx should consist of 14 chars ('\0' included).
#define BUFFER_SIZE 14

int
main(void)
{
  char buf[BUFFER_SIZE] = {0};
  int beginning, middle, end, return_value;
  beginning = middle = end = 0;
  
  do {

  if ((fputs("Enter phone number [(xxx) xxx-xxxx]: ", stdout) == EOF)) {
    perror("Error: fputs.\n");
    return EXIT_FAILURE;
  }
  
  if ((fgets(buf, BUFFER_SIZE, stdin) == NULL)) {
    perror("Error: fgets.\n");
    return EXIT_FAILURE;
  }
  
  return_value = sscanf(buf,"(%d)%d-%d", &beginning, &middle, &end);

  if (return_value == 3) {
    break;
  } else if (return_value != 3) {
    if ((fputs("Invalid number!\n", stdout) == EOF)) {
      perror("Error: fputs.\n");
      return EXIT_FAILURE;
    }
  }
  
  } while (return_value != 3);
  
  printf("You entered: %d.%d.%d\n", beginning, middle, end);
  return EXIT_SUCCESS;
}






  
  

