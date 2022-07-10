/******************************************************
 * @file Programming_Project_3.c                      *
 *                                                    *
 * @brief                                             *
 *                                                    *
 * Programming Project 3: "Write a program that breaks*
 * down an ISBN entered by the user."                 *
 *                                                    *
 * @author greenleafvolatile                          *
 * @version 1.0                                       *
 * @since 08-07-2022                                  *
 * ****************************************************/

// Directives
#include <stdio.h>
#include <string.h>


// A (null-terminated) string representing an ISBN should consist of 13 numeric chars,
// arranged in five groups separated by 4 hyphens. 
#define BUFFER_SIZE 18

int
main(void)
{
  char isbn[BUFFER_SIZE];
  int gs1_prefix, group_identifier, publisher_code, item_number, check_digit, arguments_assigned;
  gs1_prefix = group_identifier = publisher_code = item_number = check_digit = 0;
  arguments_assigned = 5;

  puts("Enter ISBN: ");
  if (fgets(isbn, BUFFER_SIZE, stdin) != NULL && sscanf(isbn, "%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit) == arguments_assigned) {
    printf("ISBN: %s\n", isbn);
  } else {
    printf("%s is not a valid ISBN!\n", isbn);
  }

  return 0;
}

