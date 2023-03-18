#include<stdio.h>
void main()
{
    float a,b,c,d,e,per;
    printf("MARKS IN PHYSICS:  ");
    scanf("%f",&a);
    printf("ENTER MARKS IN CHEMISTRY:  ");
    scanf("%f",&b);
    printf("ENTER MARKS IN MATHS:  ");
    scanf("%f",&c);
    printf("ENTER MARKS IN ENGLISH");
    scanf("%f",&d);
    printf("ENTER MARKS IN HINDI");
    scanf("%f",&e);
    if (a <= 100 && b <= 100 && c <= 100 && d<=100 && e<=100)
    {
        per=(a+b+c+d+e)/5;
        printf("YOUR PERCENTAGE IS %f\n",per);
    }
    else  
    {
        printf("! ERROR !\n");
        if (a > 100) {
            printf("MARKS IN PHYSICS EXCEED 100!\n");
        }    
        if (b > 100) {
            printf("MARKS IN CHEMISTRY EXCEED 100!\n");
        }
        if (c > 100) {
            printf("MARKS IN MATHS EXCEED 100!\n");
        }
        if(d>100) {
            printf("MARKS IN ENGLISH EXCEED 100");
        }
        if (e>100){
            printf("MARKS IN HINDI EXCEED 100");
        }
    
    
    }

}