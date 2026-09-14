Question 1 
#include<stdio.h>
int main(){
  int a,b;
printf("enter value of a=");
scanf("%d",&a);
printf("enter value of b=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap a=%d,b=%d",a,b);
return 0;
}

Question 2
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
