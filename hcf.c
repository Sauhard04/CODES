#include<stdio.h>
void main()
{
    int num1,num2,hcf,small,lcm;
    printf("ENTER NUM1: ");
    scanf("%d",&num1);
    printf("ENTER NUM2: ");
    scanf("%d",&num2);

    if(num1>num2){
        small=num2;
    }
    else{
        small=num1;
    }

    while(small>0){
        if(num1%small==0 && num2%small==0){
            hcf=small;
            break;
        }
        else{
            small -=1;
        }
    }
        printf("THE HCF OF %d AND %d IS %d\n",num1,num2,hcf);
        lcm=(num1*num2)/hcf;
        printf("THE LCM OF %d AND %d IS %d\n",num1,num2,lcm);
    
}