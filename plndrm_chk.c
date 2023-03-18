#include<stdio.h>
void main()
{
    int r,a,sum=0;
    scanf("%d%d",&a,&sum);
    int t=a;
    while(a>0)
    {
        r=a%10;
        sum=(sum*10)+r;
        a/=10;
    }
    if(t==sum)
    printf("PALLINDROME");
    else
    printf("NOT PALINDROME");
}