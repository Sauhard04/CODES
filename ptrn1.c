#include<stdio.h>
void main()
{
    int i,j,n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(i=1;i<=(2*n)-1;i++){
            if(i>=n-(j-1)&&i<=n+(j-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}