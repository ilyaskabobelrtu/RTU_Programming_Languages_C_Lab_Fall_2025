#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    if (n == 2) {
        return 1; // 2 is prime
    }
    if (n % 2 == 0) {
        return 0; // Even numbers greater than 2 are not prime
    }
    
    // Check odd divisors up to the square root of n
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0; // n is divisible, not prime
        }
    }
    return 1; // n is prime
}

int main(void) {
    int n;
    printf("Enter a positive integer n (n >= 2): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Error: Please enter an integer greater than or equal to 2.\n");
        return 1;
    }
    
    // Clear input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    printf("Prime numbers less than or equal to %d: ", n);
    int first = 1; // Flag to handle comma formatting
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}