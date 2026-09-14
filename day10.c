Question 1
#include <stdio.h>

int isValidTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a) && a > 0 && b > 0 && c > 0;
}

int main() {
    float a, b, c;

    printf("Enter the three side lengths of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (!isValidTriangle(a, b, c)) {
        printf("These side lengths do not form a valid triangle.\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}

Question 2 
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
