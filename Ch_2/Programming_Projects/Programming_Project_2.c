/******************************************************************************
 * Programming Project 3: Modify the program of Programming Project 2 so that *
 * it prompts the user to enter the radius of the sphere.                     *
 ******************************************************************************/
#include <stdio.h>
#include <math.h>

int
main(void)
{
  int radius = 0, result;

  printf("Enter the radius of the sphere: ");
  if (scanf("%d", &radius)) {
    printf("The volume of a sphere with radius %d is: %.2f\n", radius, 4.0f / 3.0f * M_PI * (radius * radius * radius));
  } else {
    printf("Invalid input!");
  }
  return 0;
}

