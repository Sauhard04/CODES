#include<stdio.h>
void main()
{
    int n,first=0,scnd=1,third;
    printf("ENTER NUMBER OF TERMS: ");
    scanf("%d",&n);
    printf("THE FIBONACCI SERIES UPTO %d TERMS IS \n",n);
    printf("%d %d",first,scnd);

    while(n>2){
        third = first+scnd;
        printf(" %d ",third);
        first = scnd;
        scnd = third;
        n -=1;
    }
    printf("\n");
}