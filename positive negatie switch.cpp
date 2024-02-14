#include <stdio.h>
int main(){
	int x;
	
	printf("print the number ::");
	scanf("%d",&x);
	switch(x>0){
		case 1:
			printf("this number is positive");
			break;
			case 0:
			printf("this number is negative");
			break;
			
	}
	return 0;
}
