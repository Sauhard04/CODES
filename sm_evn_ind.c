#include<stdio.h>
void main()
{
    int i,j,s,tmp,sum=0;
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

    for(i=0;i<s;i++){
        if(i%2==0){
            sum+=a[i];
        }
    }
    printf("The sum of elements at even indices in the given array is %d\n",sum);
}
