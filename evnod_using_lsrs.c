#include<stdio.h>
void main()
{
    int num,a,b;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    a=num>>1;
    //b=num<<1;
    if(num == a<<1){
        printf("THE NUMBER IS EVEN\n");
    }
    else{
        printf("THE NUMBER IS ODD\n");
    }
}