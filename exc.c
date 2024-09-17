#include <stdio.h>

int factorial_exponential(int n) {

    if (n == 0) {
        return 1;
    }
    return n * factorial_exponential(n-1);
}

int add_num(int a, int b) {
    if (n == 0) {
        return 1;
    }
    return a + b;
}

main() {
    int n;
    int a;
    int b;
    printf("Enter num1: ");
    scanf("%d", &n);
    printf("Enter num2: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int result1 = factorial_exponential(n);
    int result2 = add_num(a, b)
    printf("Factorial of %d is %d\n", n, result1);
    printf("Sum of %d and %d is %d", a, b, result2)
    return 0;
}