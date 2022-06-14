/*****************************************************************
 * Write a program that accepts a date from the user in the form *
 * mm/dd/yyyyy and then display it in the form yyyyy/mm/dd.      *
 *                                                               *
 * @author greenleafvolatile                                     *
 * @version 1.0                                                  *
 * @since 14-06-2022                                             *
 * ***************************************************************/
// Directives
#include <stdio.h>

int
main(void)
{
  int day, month, year;

  // Ignoring printf(const char *format) return values.
  printf("Enter a date: ");
  if (scanf("%d/%d/%d", &month, &day, &year)) 
    // Desired format is yyyyy/mm/dd, so 1/1/150 should be
    // displayed as 0150/01/01.
    printf("You entered the date: %.4d/%.2d/%.2d\n", year, month, day);
  else 
    printf("Invalid input!");
  return 0;
}



