#include<stdio.h>
void main()
{
    int a,b;
    printf("ENTER YEAR: ");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("\nYES it is a leap year\n");
    }
    else
    {
        printf("\nNO IT IS NOT A LEAP YEAR\n");
    }
}