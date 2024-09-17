#include <stdio.h>

int factorial_exponential(int n) {

    if (n != 0) {
        return n * factorial(n-1);
    }
}

main() {
    int n;
    scanf("%d", n);
    factorial_exponential(n);
    return 0;
}