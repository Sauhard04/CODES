#include<stdio.h>
void main()
{
    int i,j,r,c,flg=1;
    printf("ENTER THE NO. OF ROWS: ");
    scanf("%d",&r);
    printf("ENTER THE NO. OF COLUMNS: ");
    scanf("%d",&c);
    int a[r][c];
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("ENTER THE ELEMENT AT (%d,%d) ",i,j);
            scanf("%d",&a[i][j]);
            if(i==j && a[i][j]!=1)
                flg=0;
            else if(a[i][j]!=0 && i!=j)
                flg=0;
        }
    }
    
    if(flg)
    printf("THE GIVEN MATRIX IS AN IDENTITY MATRIX\n");
    else
    printf("THE GIVEN MATRIX IS NOT IDENTITY MATRIX \n");
}