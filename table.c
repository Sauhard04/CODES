#include<stdio.h>
void main()
{
    int a=1,b;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&b);
    if (b==0){
        printf("!!ERROR!!");
    }
    else {
    while (a<=10){
        printf("%d*%d = %d \n", b,a,b*a);
        a++;}
    }
}