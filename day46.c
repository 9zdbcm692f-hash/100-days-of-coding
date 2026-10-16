Question 1
#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String without vowels: %s", str);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating character = %c", str[i]);
                found = 1;
                break;
            }
            freq[str[i] - 'a']++;
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found");

    return 0;
}
