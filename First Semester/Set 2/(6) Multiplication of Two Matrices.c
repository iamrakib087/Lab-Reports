#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("\nEnter The Size of Square matrix: ");
    scanf("%d",&n);
    printf("\n");
    int a[n][n],b[n][n],c[n][n];
    printf("\nEnter The First Matrix:\n");
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter The Second Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMultiplication of Two Matrices:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){c[i][j]=c[i][j]+a[i][k]*b[k][j];}
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){printf(" %d ",c[i][j]);}
    }
return 0;
}
