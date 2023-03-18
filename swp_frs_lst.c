#include<stdio.h>
#include<math.h>

void main()
{
    int N,new,f,px,l,num,count=0,n;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    while(num<10){
        printf("ENTER THE NUMBER: ");       //TO GET A TWO DIGIT NUMBER
        scanf("%d",&num);
    }

    n=num;
    N=num;
    while(num>0)
    {
        num/=10;            //TO COUNT NO. OF DIGITS
        count+=1;
    }

    px=pow(10,count-1);
    l=n%10;
    f=n/px;
    n=(n-l)+f;
    new=(n-f*px)+(l*px);
    
    
printf("\nTHE NUMBER FORMED ON SWAPPING FIRST AND LAST DIGITS OF %d IS %d\n",N,new);
}
    

