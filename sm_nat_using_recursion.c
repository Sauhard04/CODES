//WAP IN C TO FIND SUM OF FIRST n NATURAL NUMBERS USING FUNCTION RECURSION
#include<stdio.h>
int s(int n){
    if(n>0){
        return n+s(n-1);
    }
    else
    return 0;
}
void main(){
    int sm,n;
    printf("ENTER THE TOTAL NATURAL NUMBERS: ");
    scanf("%d",&n);
    
    printf("THE SUM OF FIRST %d NATURAL NUMBERS IS %d\n",n,s(n));
}