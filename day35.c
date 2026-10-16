Question 1
#include <stdio.h>

int main() {
    int a[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -999999;

    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int a[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) {
        temp = a[n - 1];

        for (j = n - 1; j > 0; j--)
            a[j] = a[j - 1];

        a[0] = temp;
    }

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
