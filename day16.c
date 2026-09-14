Question 1
#include <stdio.h>

void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    if (n < 0) {
        printf("-");
        n = -n;
    }

    int binary[32];
    int count = 0;

    while (n > 0) {
        binary[count] = n % 2;
        n /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary representation: ");
    printBinary(n);
    printf("\n");

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is not a Palindrome.\n", original);
    }

    return 0;
}
