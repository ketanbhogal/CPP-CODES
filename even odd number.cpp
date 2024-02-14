#include <stdio.h>
int main(){
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a>0){
		
		
			printf("this number is positive\n");
		}
		else
		printf("this is negative");
		
		if(a%2==0){
			printf("this is even number");
		}
		else
		{
			printf("this is odd number");
		}
		

	return 0;
	
}
