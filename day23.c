Question 1
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        double numerator = 2 * k;
        double denominator = 4 * k - 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
