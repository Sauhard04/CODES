#include<stdio.h>
void main()
{
    int i,j,n,tmp;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("ENTER THE ELEMENT AT %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || i==n-1){
            if(j==0 || j==n-1){
            tmp=a[i][j];
            a[i][j]=a[i][n-1];
            a[i][n-1]=tmp;
            }
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}