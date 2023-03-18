#include<stdio.h>
void main()
{
    int n,sum=0,start=1;
    printf("ENTER THE NUMBER OF NAT. NMBRS: ");
    scanf("%d",&n);
    for(start;start<=n;start++){
        sum=sum+start;
    }
    printf("sum is %d",sum);

}