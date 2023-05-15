#include<stdio.h>
int main(){
long long n,a,count=0,num=0;
printf("Enter the number: ");
scanf("%lld",&n);
while(n>0){
    a=n%10;
    count+=a;
    num=(num*10)+a;
    n/=10;
}
printf("\nReverse of The Number Is: %lld\n",num);
printf("\nSum of The digits Is: %lld",count);
return 0;
}

