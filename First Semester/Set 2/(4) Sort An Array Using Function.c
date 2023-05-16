#include <stdio.h>
    int main (){
    int r,t,aux,n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int number[n];
    printf("\nBubble Sort for %d numbers in decending order:\n",n);

        printf("\nEnter The Elements of The Array: ");
        for (r=0; r<n; r++){
	        scanf("%d",&number[r]);
        }
        printf("\nNumbers Before Sorting:\n");

        for (r=0; r<n; r++){
            printf("%d\n",number[r]);
        }


        for (r=0; r<n; r++){

            for (t=r+1; t<n; t++){
                if (number[r]<number[t]){

                    aux=number[r];
                    number[r]=number[t];
                    number[t]=aux;
                }
            }
        }

        printf("\nNumbers After Sorting:\n");

        for (t=0; t<n; t++){
            printf("%d\n", number[t]);
        }

   return 0; }


