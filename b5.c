#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (isPrime(num1)) {
        printf("%d is a prime number.\n", num1);
    } else {
        printf("%d is not a prime number.\n", num1);
    }

    if (isPrime(num2)) {
        printf("%d is a prime number.\n", num2);
    } else {
        printf("%d is not a prime number.\n", num2);
    }

    return 0;
}