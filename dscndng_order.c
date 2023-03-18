#include<stdio.h>
void main()
{
    int i,j,n,m,count=0,cnt=0;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        printf("ENTER THE ELEMENT: ");
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++){
        for(j=0;j<i; j++){
           if(a[i]>a[j]){
            m=a[i];
            a[i]=a[j];
            a[j]=m;
           } 
            
        }
    
    }
    printf("Descending sort order: ");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
}