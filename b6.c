#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (isPerfectNumber(num1)) {
        printf("%d is a perfect number.\n", num1);
    } else {
        printf("%d is not a perfect number.\n", num1);
    }

    if (isPerfectNumber(num2)) {
        printf("%d is a perfect number.\n", num2);
    } else {
        printf("%d is not a perfect number.\n", num2);
    }

    return 0;
}