#include<stdio.h>
int main(){
int i,n,sum=0;
printf("\nEnter the Array Size: ");
scanf("%d",&n);
int arr[n];
printf("\nEnter The Values: ");
for(i=0; i<n; i++){

    scanf("%d",&arr[i]);
}
printf("\nThe Elements of The Array Are: ");
for(i=0; i<n; i++){
     printf("\n%d",arr[i]);

    sum=sum+arr[i];
}
printf("\nSum of The Elements of The Array Is: %d",sum);

return 0;}
