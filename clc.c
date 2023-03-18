#include<stdio.h>
void main()
{
    float n1,n2,sol,p;
    
    printf("PRESS--1--for DIVISION\nPRESS--2--FOR SUM\nPRESS--3--FOR DIFFERENCE\nPRESS--4--FOR PRODUCT\n");
    printf("enter first number\t");
    scanf("%f",&n1);
    printf("enter second number\t");
    scanf("%f",&n2);
    printf("SPECIFY THE FUNCTION\t");
    scanf("%f",&p);
    if (p==1)
    {   sol=n1/n2;
        printf("On dividing %f by %f,we get %f\n",n1,n2,sol);        
    }
    else if (p==2)
    {   sol=n1+n2;
        printf("On adding %f and %f ,result is %f\n",n1,n2,sol);
    }
    else if (p==3)
    {   sol=n1-n2;
        printf("Difference in %f and %f is %f\n",n1,n2,sol);
    }
    else if (p==4)
    {   sol=n1*n2;
        printf("Product of %f and %f is %f\n",n1,n2,sol);
    }
    else
    {
        printf("\n!INVALID FUNCTION!\n");
    }
}