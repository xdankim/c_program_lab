#include <stdio.h>

/**
 * 
 * define the prototype function as Factorial
 * - in argument, we will be defined the integer
 */
int Factorial(int);

int main(){

    int n = 4;
    printf("\nFactorial of %d = %d\n", n, Factorial(n));

    return 0;
}

/**
 * 
 * in this section, recursive function is happened.
 * Due to call the function itself, the Factorial's function will repeat the program until the recursive is stopped. For an example,
 * 
 * int n = 4
 * and the declaration function will return the value of 4 but there is a product operation which it times with Factorial(4 - 1) is return as 3 and it keep repeating until n <= 1 (2-1 <= 1) to stop the recursion and it will return the value as 1.
 * so the product operation obtained that 4x3x2x1 = 4!
 */
int Factorial(int n){
    return (n <= 1) ? 1 : (n * Factorial(n-1));
}