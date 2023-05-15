#include<stdio.h>
#include<math.h>
int main(){
float t,f;
printf("Enter Temperature in Fahrenheit: ");
scanf("%f",&t);
printf("\nIn Celcius The Temperature is: %.2f",((5*(t-32))/9));
return 0;}
