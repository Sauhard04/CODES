//PROGRAM TO FIND FREQUENCY OF EACH ELEMENT IN AN ARRAY:  
#include<stdio.h>
void main()
{
    int i,s,j,k,l,tmp,count;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&s);
    int a[s],fr[s];
    for(i=0;i<s;i++){
        printf("ENTER THE ELEMENT AT %d INDEX: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++){
        count=1;
        
        for(j=0;j<s;j++){       
            
            if(i!=j && a[i]==a[j])
            count+=1;

    }
    fr[i]=count;
    }
    
    
    for(i=0;i<s;i++){
        for(j=0;j<s-i-1;j++){
            if(fr[j]>fr[j+1]){
                tmp=fr[j]; //for making ascending order
                fr[j]=fr[j+1];
                fr[j+1]=tmp;
            }
    }
        }
    for(i=0;i<s;i++){
        
            if(fr[i]!=fr[i-1])
            printf("%d \n",fr[i]);
        
    }
}    


