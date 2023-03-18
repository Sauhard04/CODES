//TO UPDATE THE VALUE AT A GIVEN INDEX IN AN ARRAY
#include<stdio.h>
void main()
{
    int i,size,val,pos;
    printf("ENTER THE SIZE: ");
    scanf("%d",&size);
    int a[size+10];
    for(i=0;i<size;i++){
        
        printf("ENTER THE ELEMENT: ");
        scanf("%d",&a[i]);

    }
    printf("enter the position of value: ");
    scanf("%d",&pos);
    printf("ENTER THE NEW VALUE: ");
    scanf("%d",&val);
    for(i=size;i>pos;i--){
        
        a[i]=a[i-1];

    }
    a[pos]=val;
    printf("UPDATED ARRAY IS : ");
    for(i=0;i<=size;i++){
        printf("%d\n",a[i]);
    }
}