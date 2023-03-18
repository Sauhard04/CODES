#include<stdio.h>
void main(){
    float a,b,c,per;
    printf("enter the marks of a: ");
    scanf("%f",&a);
    printf("enter the marks of b: ");
    scanf("%f",&b);
    printf("enter the marks of c: ");
    scanf("%f",&c);
    per=(a+b+c)/3;
    if(per<=100){
        printf("%f",per);
    }
    else if (a>=100 && b>=100 && c>=100){
        printf("the marks exceed in %f",a);
        printf("the marks exceed in sub %f",b);
        printf("the marks exceed in %f",c);

    }

    else{
        printf("ERROR!");

    }

    if (per>90 && per<=100){
        printf("The Grade is A");
    }

    else if (per>70 && per<=90){
        printf("The Grade is B");
    }

    else {
        printf("Fail");
    }
    printf("the percentage is %f",per);
}   

