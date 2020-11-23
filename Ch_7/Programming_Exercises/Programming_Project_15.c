#include <stdio.h>

long long getFactorial(long long);

int main(void){

    long long n;
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    printf("Factorial of %lld: %lld", n, getFactorial(n));
}

long long getFactorial(long long n){

    if(n==1){
        return 1;
    }
    return n*getFactorial(n-1);
}

// n is of type short. Largest value of n for which the program correctly prints the factorial of n: 7
// n is of type int. Largest value of n for which the program correctly prints the factorial of n: 12
// n is of type long. Largest value of n for which the program correctly prints the factorial of n: 20
// n is of type long long. Largest value of n for which the program correctly prints the factorial of n: 20
// n is of type float. Largest value of n for which the program correctly prints the factorial of n: 34
// n is of type double. Largest value of n for which the program correctly prints the factorial of n: 170
// n is of type long double. Largest value of n for which the program correctly prints the factorial of n: 1754



