/*#include<stdio.h>
int main(){
	int i=0,sum=0;
	int number[10];
	printf("enter the number:");
	for(i=0;i<10;i++){
		scanf("%d\n",&number[i]);
	}
	for(i=0;i<10;i++){
		//printf("%d",number[i]);
		sum=sum+number[i];
	}
	printf("sum is:");
	printf("%d",sum);
	return 0;
	
}*/
#include<stdio.h>
int main(){
	int i=0,sum=0;
	int number[5];
	printf("enter 5 number:");
	for(i=0;i<5;i++){
		scanf("%d",&number[i]);
		
	}
	for(i=0;i<5;i++){
		sum=sum+number[i];
	}
	printf("sum is the:");
	printf("%d",sum);
}
