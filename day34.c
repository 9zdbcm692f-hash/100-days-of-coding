Question 1
#include <stdio.h>

int main() {
    int a[100], n, i, x, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int a[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
