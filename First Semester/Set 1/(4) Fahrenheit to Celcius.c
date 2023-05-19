#include<stdio.h>
int main(){
float t,f;
printf("Enter Temperature in Fahrenheit: ");
scanf("%f",&t);
f=((5*(t-32))/9);
printf("\nIn Celsius The Temperature is: %.2f",f);
return 0;}
