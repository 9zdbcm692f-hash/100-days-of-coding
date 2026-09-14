Question 1
#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine. Book returned on time.\n");
    } else if (lateDays > 30) {
        printf("Membership Cancelled.\n");
    } else {
        if (lateDays <= 5) {
            fine = lateDays * 2;
        } else if (lateDays <= 10) {
            fine = 5 * 2 + (lateDays - 5) * 4;
        } else {
            fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
        }
        printf("Total Fine: Rs. %.2f\n", fine);
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("No units consumed. Bill: Rs. 0.00\n");
        return 0;
    }

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}
