#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Plesae enter a positive integer.\n");
        return 1;
    }
    
    printf("Factorial of %d = %lld\n", n, factorial(n));
    return 0;
}