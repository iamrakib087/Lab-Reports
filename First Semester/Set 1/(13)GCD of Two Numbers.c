#include<stdio.h>
int main(){
int a,b,i,gcd;
printf("Enter two number: ");
scanf("%d %d",&a,&b);
for(i=1 ;i<=a && i<=b;++i){
    if(a%i==0 && b%i==0){
            gcd=i;
    }
}
printf("\nGCD of %d and %d Is: %d",a,b,gcd);
return 0;
}
