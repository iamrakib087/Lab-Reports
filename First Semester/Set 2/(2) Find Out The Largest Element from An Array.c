#include<stdio.h>
int main(){
int a,i,r,c,x;
printf("Enter Array Size: ");
scanf("%d",&a);
int arr[a];
printf("\nEnter %d Elements of The Array: ",a);
for (i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(r=1;r<a;r++){
        for (c=0;c<a-r;c++){
            if(arr[c]<arr[c+1]){
            x=arr[c];
            arr[c]=arr[c+1];
            arr[c+1]=x;
            }
        }
    }
printf("\nThe largest Element of The Array Is: %d",arr[0]);
return 0;
}
