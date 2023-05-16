#include<stdio.h>
int main(){
int i,j,a[3][3],b[3][3],sum[3][3];
printf("\nEnter the Elements of First Matrix:\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        scanf("%d",&a[i][j]);
    }
}
printf("\nEnter the Elements of Second Matrix:\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
printf("\nSum of Two Matrices:\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d ",sum[i][j]);
        if (j==3-1) {
        printf("\n\n");
        }
    }
}
return 0;}

