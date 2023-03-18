#include<stdio.h>
void main()
{
    int num,n,ind=0;
    printf("enter the number: ");
    scanf("%d",&num);

    for(n=2 ; n<=(num/2) ;n++ ){
        if(num%n==0){
         ind=1;
         break; }  
    }
    if(ind==1)
    printf("NON PRIME\n");
    else
    printf("PRIME\n");

}