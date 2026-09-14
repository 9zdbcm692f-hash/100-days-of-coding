Question 1
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d: %lld\n", n, factorial);
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    if (n < 0) n = -n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original < 0) reversed = -reversed;

    printf("Reversed number: %d\n", reversed);

    return 0;
}
