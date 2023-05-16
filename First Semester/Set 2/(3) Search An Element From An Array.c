#include<stdio.h>
int main(){
int a,b,i,sum=0,index=0;;
printf("Enter The Size of The Array: ");
scanf("%d",&a);
printf("\nEnter Elements of The Array: ");
int arr[a];
for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
}
printf("\nEnter The Searching Element: ");
scanf("%d",&b);
for (i=0;i<a;i++){
    if(b==arr[i]){
    sum=i+1;
    break;
    }
}
if(sum>0){
        printf("\nThe Element You Are Searching Is Available In The Array and It's In The Index no: %d",sum);
}
else{
        printf("\nThe Element You Are Searching Is Not Available In The Array");
}
return 0;
}
