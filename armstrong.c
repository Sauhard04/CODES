#include<stdio.h>
#include<math.h>
int main()
{
    int num,m,dig=0,q,rem,sum=0;
    m=q;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    

    while(q>0){
        q=num/10;
        num/=10;
        dig+=1;
    }
    while(q>0){
        rem=m%10;
        sum=sum+pow(rem,dig);
    
    }    
    if(sum==num)
    printf("NO. IS ARMSTRONG\n");
    
   //printf("%d",dig);

}