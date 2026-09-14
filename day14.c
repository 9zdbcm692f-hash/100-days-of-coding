Question 1
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int oddNum = 2 * i - 1;
        sum += oddNum;
    }

    printf("Sum of the first %d odd numbers: %d\n", n, sum);

    return 0;
}

Questio 2
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int hasEven = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("Product of even numbers from 1 to %d: %lld\n", n, product);
    } else {
        printf("There are no even numbers from 1 to %d.\n", n);
    }

    return 0;
}
