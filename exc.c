#include <stdio.h>

int factorial_exponential(int n) {

    if (n == 0) {
        return 1;
    }
    return n * factorial_exponential(n-1);
}

main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial_exponential(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}