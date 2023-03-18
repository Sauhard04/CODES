/*
Program to find all the armstrong numbers in a range
loop1 is used to initiate the loop for the range
loop2 is used to find the number of digit and corresponding power
loop3 is used to find the armstrong number
condition1 is used to check whether the number is an armstrong number or not
condition2 is used to print the statement
for the concepts of the armstrong number please refer to class notes

*/
#include<stdio.h>
#include<math.h>
void main(){
	int i,n,m,sum,count,last_var,j,lower_limit,upper_limit,flag=0;
	printf("Please enter the upper limit of your search: ");
	scanf("%d",&lower_limit);
	printf("Please enter the lower limit of your search: ");
	scanf("%d",&upper_limit);
	//loop1
	for(i=lower_limit;i<=upper_limit;i++){
		j=n=m=i;
		sum=count=0;
		//loop2
		while(j>0){
			count =count+1;
			j /=10;
		}
		//loop3
		while(n>0){
			printf("");
			last_var = n%10;
			sum +=pow(last_var,count);
			n /=10;
		}
		if(sum==m){
			flag +=1;
			if(flag==1){
				printf("The Armstrong numbers within %d and %d are as follows",lower_limit,upper_limit);
				printf("\n%d\n",sum);
			}
			else{
				printf("%d\n",sum);
			}
			
		} 
	
	}
}
