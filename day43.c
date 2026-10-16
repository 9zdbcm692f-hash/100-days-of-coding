Question 1
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length
    while (str[length] != '\0')
        length++;

    // Print in reverse
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    gets(str);

    // Find length
    while (str[length] != '\0')
        length++;

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");

    return 0;
}
