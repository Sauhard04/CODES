#include<stdio.h>
void main()
{
    int s,i,j,grt=0;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&s);
    int a[s];

    for(i=0;i<s;i++){
        printf("ENTER THE %d ELEMENT: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++){
        for(j=0;j<=i;j++){
            if(a[i]>a[j])
            grt=a[i];
        }
    }
    printf("%d",grt);
}