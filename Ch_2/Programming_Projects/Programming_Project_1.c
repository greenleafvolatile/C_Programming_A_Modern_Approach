/***************************************************************************
 * Write a program that uses printf to display the following picture on the *
 * screen:                                                                 *
 *               *                                                         *
 *             *                                                           *
 *           *                                                             *
 * *       *                                                               *
 *   *   *                                                                 *
 *     *                                                                   *
 ***************************************************************************/
#include <stdio.h>

int
main(void)
{

printf("       %s\n", "*");
printf("      %s\n", "*");
printf("     %s\n", "*");
printf("%s   %s\n", "*", "*");
printf(" %s %s\n", "*", "*");
printf("  %s", "*");

return 0;
}

