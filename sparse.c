#include<stdio.h>
void main()
{
    int i,j,size,c=0;
    printf("ENTER THE SIZE OF THE SQUARE MATRIX: ");
    scanf("%d",&size);
    int a[size][size];

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("ENTER THE ELEMENT: ");
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            c+=1;
        }
    }
    if(c>(size*size)/2)
    printf("SPARSE matrix\n");
    else
    printf("non sparse matrix\n");

}