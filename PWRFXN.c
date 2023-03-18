//PRACTICE CODE FOR FUNCTIONS:)
#include<stdio.h>
int pwr(int n,int p){
    
    if(p==0)
        return 1;
    
    else
        return 1*pwr(n,p-1);
    
}

void main()
{
    int n,p;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    printf("ENTER THE POWER: ");
    scanf("%d",&p);
    
    printf("%d to power %d gives %d\n",n,p,pwr(n,p));
}