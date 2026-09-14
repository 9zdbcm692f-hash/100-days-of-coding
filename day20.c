Question 1
#include <stdio.h>

int main() {
    int n, remainder, original;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    if (n < 0) n = -n;

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d: %lld\n", original, product);
    } else {
        printf("%d has no odd digits.\n", original);
    }

    return 0;
}

Question 2
#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);
    int valid = 1;

    for (int i = 0; i < len; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid || len == 0) {
        printf("Invalid binary number.\n");
        return 1;
    }

    printf("1's Complement: ");
    for (int i = 0; i < len; i++) {
        printf("%c", binary[i] == '0' ? '1' : '0');
    }
    printf("\n");

    return 0;
}
