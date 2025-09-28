#include <stdio.h>

int sum_to_n(int n) {
    if (n <= 0) {
        return 0;
    }
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }
    
    printf("Sum of integers from 1 to %d = %d\n", n, sum_to_n(n));
    return 0;
}