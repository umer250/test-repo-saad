#include <stdio.h>
#include "math_utils.h"

int main() {
    printf("Addition: 10 + 5 = %d\n", add(10, 5));
    printf("Subtraction: 10 - 5 = %d\n", subtract(10, 5));
    printf("Multiplication: 10 * 5 = %d\n", multiply(10, 5));
    printf("Division: 10 / 5 = %.2f\n", divide(10, 5));
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("Is 7 prime? %s\n", isPrime(7) ? "Yes" : "No");
    return 0;
}
