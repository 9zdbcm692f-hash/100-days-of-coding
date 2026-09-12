Question 1
#include<stdio.h>
int main(){
int length,breadth;
printf("enter value of length=");
scanf("%d",&length);
printf("enter value of breadth=");
scanf("%d",&breadth);
int area;
area=length*breadth;
printf("area of rectangle is=%d",area);
int perimeter;
perimeter=2*(length+breadth);
printf("\nperimeter of rectangle is=%d",perimeter);
return 0;
}

Question 2
#include<stdio.h>
int main(){
float radius;
printf("enter value of radius=");
scanf("%f",&radius);
float area;
area=3.14*radius*radius;
printf("area of circle is=%f",area);
float circumference;
circumference=2*3.14*radius;
printf("\ncircumference of circle is=%f",circumference);
return 0;
}
