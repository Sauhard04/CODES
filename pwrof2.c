#include<stdio.h>
#include<math.h>

void main()
{
    int n,i=0,j,flg=0;
    printf("ENTER THE NUMBER TO BE CHECKED: ");
    scanf("%d",&n);
 
    while (j < n)
    {
        j=pow(2,i);
        i+=1;
        if(j==n)
        flg=1;
    }
 
    if(flg==1)
    printf("%d = 2^%d \n",n,i-1);
    else
    printf("%d CANNOT BE EXPRESSED IN POWER OF 2\n",n);    
    
}