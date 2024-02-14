#include<stdio.h>
int main(){
	int count,n;
	printf("enter the number:");
	scanf("%d",&n);
	count=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			count=1;
			break;
		}
	}
	if(count==0){
		printf("number is prime");
		
	}
	else{
		printf("number is not prime");
	}
	return 0;
}
