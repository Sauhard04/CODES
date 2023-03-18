#include<stdio.h>
int power(int n,int p)
{
    if(p>0)
    {

    return n*power(n,p-1);
    }
    else
    {
        return 1;
    }
}
void main()
{
    int n,p;
    printf("enter the number=");
    scanf("%d",&n);
    printf("enter the power=");
    scanf("%d",&p);
    printf("%d",power(n,p));
}