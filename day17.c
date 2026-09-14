Question 1
#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n, original, remainder, numDigits;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Armstrong check is not defined for negative numbers.\n");
        return 1;
    }

    original = n;
    numDigits = countDigits(n);
    if (numDigits == 0) numDigits = 1; // handles n = 0

    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, numDigits);
        n /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

Question 2
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is not a Prime number.\n", n);
    }

    return 0;
}
