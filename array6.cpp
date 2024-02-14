#include<stdio.h>
int main(){
	int i=0;
	int number[10];
	
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<10;i++){
	
	if(number[i]>0){
		printf("Positive number is:%d\n",number[i]);
	}
	else{
		printf("Negative number is:%d\n",number[i]);
	}
}
}
