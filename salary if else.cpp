#include<stdio.h>
int main(){
	int a;
	printf("enter salary:");
	scanf("%d",&a);
	//if(a>0){
		if(a>70000){
		
		printf("this is manager salary");
		
	}
	else if(a>=50000&&a<70000)
	{
		printf("this is team leader salary");
	}
	else if(a<50000)
	{
		printf("this is employee salary");
	}
	return 0;
	
}
