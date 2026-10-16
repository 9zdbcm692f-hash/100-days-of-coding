Question 1 
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        int stars;

        if (i == 1)
            stars = 4;
        else if (i == 2)
            stars = 5;
        else if (i == 3)
            stars = 3;
        else
            stars = 1;

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
