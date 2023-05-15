#include <stdio.h>
int main(){
int n,i;
int fibo1=0,fibo2=1,fibo3;
printf("Enter the value of n: ");
scanf("%d",&n);
printf("\nThe First %d Fibonacci Numbers Are: ",n);
printf("%d %d ",fibo1,fibo2);
for(i=3;i<=n;i++){
        fibo3=fibo1+fibo2;
        printf("%d ",fibo3);
        fibo1=fibo2;
        fibo2=fibo3;
}
printf("\n");
return 0;
}

