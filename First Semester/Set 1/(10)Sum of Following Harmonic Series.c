#include<stdio.h>
#include<math.h>
int main(){
float n,i;
float num,total=0;
printf("Enter the Number: ");
scanf("%f",&n);
for(i=1;i<=n;i++){
    num=pow(i,-i);
    total+=num;
}
printf("\nThe summation of The Numbers Is: %.2f",total);
return 0;
}

