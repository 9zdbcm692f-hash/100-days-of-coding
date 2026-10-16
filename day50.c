Question 1
#include <stdio.h>

int main() {
    char date[20];
    int i;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    printf("%c%c-Apr-", date[0], date[1]);

    for (i = 6; date[i] != '\0'; i++)
        printf("%c", date[i]);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = 0;
    while (str[n] != '\0')
        n++;

    printf("All substrings:\n");

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
