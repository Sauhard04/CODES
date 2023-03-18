#include<stdio.h>

void main()
{
 /*int num,N=1;
 printf("ENTER THE NUMBER: ");
 scanf("%d",&num);
 
 
 while(num>0){
    N=N*num;
    printf("%d",N);
    num=num-1;
 }*/
    int num,p=1;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);

    while(num>0){
        p=p*num;
        num -=1;
    }
    printf("THE FACTORIAL IS %d\n ",p);

}
