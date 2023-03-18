#include<stdio.h>
void main()
{
    int n,i,j;
    printf("ENTER THE ENDING NUMBER: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j>=(n+1))
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    }
}