#include<stdio.h>
int main(){
	int i=0;
	int number[10];
	char name[20];
	char address[20];
	printf("\nEnter The Contact Number:");
	for(i=0;i<1;i++){
		scanf("%d",&number[i]);
	}
	printf("\nEnter The Name:");
	for(i=0;i<5;i++){
		scanf("%c",&name);
		
	}
	printf("\nEnter The Address:");
	for(i=0;i<5;i++){
		scanf("%c",&address);
		
	}
	printf("Name:",name);
	printf("contact Number:",number);
	printf("Address",address);
	
	return 0;
	
	
}
