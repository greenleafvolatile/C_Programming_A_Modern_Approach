#include <stdio.h>

int main(void){
     int i=1;
     short s=2;
     long l=3;
     unsigned long int ul=4;
     float f=4.32100f;
     double d=5.5e-300;
     long double ld=6.5-305;

     printf("Size of int: %lu\n", sizeof(i));
     printf("Size of short: %lu\n", sizeof(s));
     printf("Size of long: %lu\n", sizeof(l));
     printf("Size of unsigned long int: %lu\n", sizeof(ul));
     printf("Size of float: %lu\n", sizeof(f));
     printf("Size of double: %lu\n", sizeof(d));
     printf("Size of long double: %lu\n", sizeof(ld));
     return 0;
}




