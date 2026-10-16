Question 1
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
