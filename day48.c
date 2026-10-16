Question 1
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation");
    } else {
        strcpy(temp, str1);
        strcat(temp, str1);

        if (strstr(temp, str2) != NULL)
            printf("Strings are rotations of each other");
        else
            printf("Not a rotation");
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            int j;

            for (j = i - 1; j >= start; j--)
                printf("%c", str[j]);

            if (str[i] == ' ')
                printf(" ");
            else
                break;

            start = i + 1;
        }
    }

    return 0;
}
