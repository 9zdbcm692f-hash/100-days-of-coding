Question 1
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is Positive.\n", num);
    } else {
        if (num < 0) {
            printf("%d is Negative.\n", num);
        } else {
            printf("%d is Zero.\n", num);
        }
    }

    return 0;
}
