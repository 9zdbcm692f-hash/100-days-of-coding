Question 1 
#include<stdio.h>
int main(){
float celsius;
printf("enter temperature in celsius=");
scanf("%f",&celsius);
float farenheit;
farenheit=(celsius*1.8)+32;
printf("%f",farenheit);
return 0;
}

Question 2
#include<stdio.h>
int main(){
int a,b;
printf("enter value of a=");
scanf("%d",&a);
printf("enter value of b=");
scanf("%d",&b);
printf("before swapping a=%d,b=%d\n",a,b);
int c;
c=a;
a=b;
b=c;
printf("after swapping a=%d,b=%d\n",a,b);
return 0;
}
