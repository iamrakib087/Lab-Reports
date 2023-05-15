#include<stdio.h>
#include<math.h>
int main(){
float length,width,area,perimeter;
printf("Enter The Values of Lenght & Widht of The Rectangle: ");
scanf("%f %f",&length,&width);
area=length*width;
perimeter=2*(length+width);
printf("\nThe Area of The Rectangle Is: %.2f \nThe Perimeter of The Rectangle Is: %.2f",area,perimeter);
return 0;}
