Question 1
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    } else {
        printf("%c is a Special Character.\n", ch);
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the largest.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest.\n", b);
    } else {
        printf("%d is the largest.\n", c);
    }

    return 0;
}
