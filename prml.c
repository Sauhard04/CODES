#include<stdio.h>
void main()
{
    int ll,ul,n,ind,sm=0;
    printf("ENTER THE LOWER LIMIT: ");
    scanf("%d",&ll);
    printf("ENTER THE UPPER LIMIT: ");
    scanf("%d",&ul);

    for(ll;ll<=ul;ll++){
        ind=1;
        for(n=2;n<=(ll/2);n++){
            if(ll%n==0){
                ind=0;
                break;
            }
        }
        if(ind==1){
            sm=sm+ll;
            }
    }
    printf("%d",sm);

}