//WAP IN C TO FIND FACTORIAL OF A GIVEN NUMBER USING FUNCTION RECURSION
#include<stdio.h>

int fct(int n){
    if(n>0)
    return n*fct(n-1);
    
    else
    return 1;
}

void main(){
    int n;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    
    printf("THE FACTORIAL OF %d IS %d\n",n,fct(n));
}
