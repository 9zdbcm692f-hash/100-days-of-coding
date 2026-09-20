Question 1
#include <stdio.h>
#include <math.h>

int main() {
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    
    int isNegative = 0;
    long n = num;
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }

    if (n < 10) {
        
        printf("Swapped number: %ld\n", num);
        return 0;
    }

    int digits = (int)log10((double)n) + 1;

    int firstDigit = n / (long)pow(10, digits - 1);
    int lastDigit = n % 10;

    
    long withoutFirst = n % (long)pow(10, digits - 1); 
    long middlePart = withoutFirst / 10;                

    long result = (long)lastDigit * (long)pow(10, digits - 1) 
                  + middlePart * 10 
                  + firstDigit;

    if (isNegative) result = -result;

    printf("Original number: %ld\n", num);
    printf("Swapped number: %ld\n", result);

    return 0;
}

Question 2
#include <stdio.h>

int main() {
    long num, sum = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num <= 0) {
        printf("%ld is not a perfect number.\n", num);
        return 0;
    }

    for (long i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%ld is a perfect number.\n", num);
    } else {
        printf("%ld is not a perfect number.\n", num);
    }

    return 0;
}
