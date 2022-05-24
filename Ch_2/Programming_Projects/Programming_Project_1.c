/***************************************************************************
 * Programming Project 1: Write a program that uses printf to display the  *
 * following picture on the  screen:                                       *
 *               *                                                         *
 *             *                                                           *
 *           *                                                             *
 * *       *                                                               *
 *   *   *                                                                 *
 *     *                                                                   *
 *                                                                         *
 * @author: Daan Pol                                                       *
 * @version: 1.0                                                           *
 * @since: 24-05-2022                                                      *
 ***************************************************************************/
// Directives:
#include <stdio.h>

int
main(void)
{
  
// Ignoring printf(const char * format) return values.
printf("       %s\n", "*");
printf("      %s\n", "*");
printf("     %s\n", "*");
printf("%s   %s\n", "*", "*");
printf(" %s %s\n", "*", "*");
printf("  %s", "*");

return 0;
}

