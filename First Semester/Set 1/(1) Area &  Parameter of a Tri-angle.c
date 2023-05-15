#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,x,area,perimeter;
printf("Enter The Values of Three Sides of The Triangle: ");
scanf("%f %f %f",&a,&b,&c);
x=(a+b+c)/2;
area=sqrt(x*(x-a)*(x-b)*(x-c));
perimeter=(a+b+c);
printf("\nThe Area of The Triangle is: %.2f \nThe Perimeter of The Triangle is: %.2f",area,perimeter);
return 0;}
