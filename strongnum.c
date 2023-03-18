#include<stdio.h>
void main()
{
    int fac,NUM,num,dig,sum=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    NUM=num;
    while(num>0)
    {
    dig=num%10;
    num/=10;
    fac=1;
    for(dig;dig>0;dig--){
        //fac=1;
        fac=fac*dig;
    }
    sum=sum+fac;
    }
    //printf("sum is %d\n",sum);
    if(sum==NUM)
    printf("STRONG NUMBER\n");
    else
    printf("NON STRONG");
}