Question 1
#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1 < 0 ? -num1 : num1;
    int b = num2 < 0 ? -num2 : num2;

    if (a == 0 || b == 0) {
        printf("LCM is undefined when either number is 0.\n");
    } else {
        long long lcm = (long long)a / findGCD(a, b) * b;
        printf("LCM of %d and %d: %lld\n", num1, num2, lcm);
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int n, sum = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    if (n < 0) n = -n;

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("Sum of digits of %d: %d\n", original, sum);

    return 0;
}
