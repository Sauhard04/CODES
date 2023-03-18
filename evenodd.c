#include<stdio.h>
void main()
{
    int i;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&i);
    if((i&1)==0)
        printf("even\n");
    
    else
        printf("odd");
 
}