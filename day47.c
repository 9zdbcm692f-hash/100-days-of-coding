Question 1
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++)
        freq[(unsigned char)str1[i]]++;

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0'; i++)
        freq[(unsigned char)str2[i]]--;

    // Check frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Strings are anagrams");
    else
        printf("Strings are not anagrams");

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0, len;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = j;

            if (len > max) {
                max = len;

                for (j = 0; j <= len; j++)
                    longest[j] = word[j];
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}
