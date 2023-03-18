//TO DIVIDE A GIVEN NUMBER BY 64 WITHOUT ARITHMETIC OPERATOR
#include<stdio.h>
void main()
{
    int num,rs=6;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    if(num>=64){
    printf("ON DIVIDING THE NUMBER BY 64,WE GET: %d",num>>rs);
    }
    else{
        printf("!ERROR! \nPLZ ENTER THE NUMBER AGAIN!");
    }  
}
