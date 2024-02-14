#include <stdio.h>
int main(){
	int i=0;
	int marks[9];
	printf("enter 10 number in array:\n");
	for(i=0;i<10;i++){
		
		scanf("%d\n",&marks[i]);
	}
	printf("entered 10 number is:\n");
	for(i=0;i<10;i++){
		printf("\n%d",marks[i]);
	}
	return 0;
}
