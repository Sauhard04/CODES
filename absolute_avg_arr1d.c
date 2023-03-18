#include<stdio.h>
void main()
{
    float avg;
    int size,i,count=0,sum=0,j=0;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&size);
    int arr[size];
    
    for(i=0;i<size;i++){
        printf("ENTER THE ELEMENT : ");
        scanf("%d",&arr[i]);
        j+=1;
    }

    for(i=0;i<j;i++){
        printf("THE ELEMENT AT INDEX % d IS : %d\n",i,arr[i]);
        sum+=arr[i];
        if(arr[i]!=0)
        count+=1;
    }
    
    avg=sum/count;
    printf("SUM IS %d AND AVERAGE IS %.2f \n",sum,avg);
    
}
