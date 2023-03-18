#include<stdio.h>
void main()
{
    int i,j,r,c,smrd=0,smld=0,cmnel;
    printf("ENTER NO. OF ROWS: ");
    scanf("%d",&r);
    printf("ENTER NO. OF COLUMNS: ");
    scanf("%d",&c);
    int a[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("ENTER THE ELEMENT AT %d,%d IN THE MATRIX: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        if(i==j)
        smrd+=a[i][j];
        if(i!=j && i+j==r-1) 
        smld+=a[i][j];
        if(i==j && i+j==r-1 )
        cmnel=a[i][j];
        }
    }

    
    printf("SUM OF BOTH DIAGONAL ELEMENTS: %d\n",smrd+smld);
    printf("THE SUM OF RIGHT DIAGONAL ELEMENTS IS: %d\n",smrd);
    printf("THE SUM OF LEFT DIAGONAL ELEMENTS IS :%d\n",smld+cmnel);
}