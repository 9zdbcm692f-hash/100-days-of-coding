Question 1
#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Copy first array
    for (i = 0; i < n1; i++)
        c[i] = a[i];

    // Copy second array
    for (i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d\n", result);
    printf("Occurs %d times", max);

    return 0;
}
