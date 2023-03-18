//PROGRAM TO FIND THE SIZE OF  ENTERED VALUE OF INTEGER,FLOAT,CHARACTER
#include<stdio.h>
void main()
{
    int num;
    float fl;
    char c;
    printf("ENTER THE INTEGER VALUE: ");
    scanf("%d",&num);
    printf("ENTER THE DECIMAL VALUE: ");
    scanf("%f",&fl);
    printf("ENTER THE CHARACTER VALUE: ");
    scanf("%c",&c);

    printf("SIZE OF INTEGER VALUE IS: %ld\nSIZE OF DECIMAL VALUE IS: %ld\nSIZE OF CHARACTER VALUE IS: %d",sizeof(num),sizeof(fl),sizeof(c));

}