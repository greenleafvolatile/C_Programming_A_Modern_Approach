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
 * @author: greenleafvolatile                                              *
 * @version: 1.0                                                           *
 * @since: 24-05-2022                                                      *
 ***************************************************************************/
// Directives:
#include <stdio.h>

int
main(void)
{
  
// Ignoring printf(const char * format) return values.
printf("%15c\n", '*');
printf("%13c\n", '*');
printf("%11c\n", '*');
printf("%c%8c\n", '*', '*');
printf("%3c%4c\n", '*', '*');
printf("%5c\n", '*');

return 0;
}

