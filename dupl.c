#include<stdio.h>
void main()
{
    int i,j,a[5],flg;
    for (i=0;i<5;i++){
        printf("ENTER THE ELEMENT: ");
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++){
        
        for(i=0;i<j;i++){
            flg=0;
            if(a[j]!=a[i])
            flg=1;
        }
        if(flg==1)
        printf("%d",a[j]);
    }
}