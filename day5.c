Question 1
#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%lf", &rate);
    printf("Enter time (in years): ");
    scanf("%lf", &time);
    double simpleInterest = (principal * rate * time) / 100;
    double compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("\nSimple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);
    return 0;
}

Question 2 
#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("%d seconds = %02d:%02d:%02d (HH:MM:SS)\n", totalSeconds, hours, minutes, seconds);
    return 0;
}
