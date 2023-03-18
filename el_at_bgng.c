//TO PLACE A VALUE AT BEGINING OF AN ARRAY
#include<stdio.h>
void main()
{
    int i,size,val;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&size);
    int a[size+10];
    for(i=0;i<size;i++){
    
    printf("ENTER THE ELEMENT: ");
    scanf("%d",&a[i]);

    }
    printf("ENTER THE VALUE TO BE PLACED: ");
    scanf("%d",&val);
    for(i=size;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=val;
    printf("THE UPDATED ARRAY IS: \n");
    for(i=0;i<=size;i++){
        printf("%d\n",a[i]);
    }
}