#include<stdio.h>
void main(){
    int size,i,j,k;

    printf("Enter the size for the square matrix : ");
    scanf("%d",&size);

    int a[size][size], b[size][size],c[size][size];

    for(i = 0; i < size; i++){
        for(j=0; j < size; j++){
            printf("Enter the %d %d'th element : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Enter the element at %d %d'th index : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
           c[i][j]=0;
           for(k=0;k<size;k++){
            c[i][j]+=(a[i][k]*b[k][j]);
            
           } 
        }
        
    }

    for (i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}