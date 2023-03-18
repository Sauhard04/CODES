//TO DELETE THE VALUE AT LAST INDEX IN AN ARRAY
#include<stdio.h>
void main()
{
    int size,i,val,pos;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&size);
    int a[size+10];
    for(i=0;i<size;i++){
        printf("ENTER THE ELEMENT: ");
        scanf("%d",&a[i]);
    }
    printf("CREATED ARRAY IS : ");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    a[size-1]=0;
    printf("THE UPDATEED VALUE IS :\n");
    for(i=0;i<size-1;i++){
        printf("%d\n",a[i]);
    }
}