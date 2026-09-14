Question 1
#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("Enter the year to check for leap year: ");
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            printf("February - %d days\n", days);
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month number. Please enter a value between 1 and 12.\n");
    }

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    float cp, sp, profitLoss, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (cp <= 0) {
        printf("Cost price must be greater than zero.\n");
        return 1;
    }

    if (sp > cp) {
        profitLoss = sp - cp;
        percentage = (profitLoss / cp) * 100;
        printf("Profit: %.2f\n", profitLoss);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (sp < cp) {
        profitLoss = cp - sp;
        percentage = (profitLoss / cp) * 100;
        printf("Loss: %.2f\n", profitLoss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
