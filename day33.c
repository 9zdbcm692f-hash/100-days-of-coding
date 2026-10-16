Question 1
#include <stdio.h>

int main() {
    int a[100], n, i, key;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        printf("Element not found");

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int a[100], n, i, x, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = 0;

    while (pos < n && a[pos] < x)
        pos++;

    // Shift elements to the right
    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
