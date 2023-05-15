#include<stdio.h>
int main(){
float a,b,c;
printf("Enter Three Numbers: ");
scanf("%f %f %f",&a,&b,&c);
if(a>=b && a>=c){
    printf("\nThe larger Number Is: %.2f",a);
}
else if(b>=a && b>=c){
    printf("\nThe larger Number Is: %.2f",b);
}
if(c>=a && c>=b){
    printf("\nThe larger Number Is: %.2f",c);
}
return 0;}
