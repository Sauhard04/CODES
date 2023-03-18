#include<stdio.h>
void main()
{
    int i,j,s,tmp,sum;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++){
        printf("ENTER THE ELEMENT AT %d INDEX: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++){
        for(j=0;j<s-i-1;j++){
            if(a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    sum=a[0]+a[s-1];
    printf("Sum of largest and smallest element in the given array is : %d\n",sum);
}
