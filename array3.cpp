/*#include <stdio.h>
int main(){
	int i=0;
	char letter[5];
	printf("print 5 letter is:");
	for(i=0;i<5;i++){
		scanf("%c\n",&letter[i]);
		
		
	}
	printf("letter is:");
	for(i=0;i<5;i++){
		printf("\n%c",letter[i]);
	}
	return 0;*/
	#include <stdio.h>
	int main(){
		int i=0;
		char letter[5];
		printf("entered 5 letter:");
		for(i=0;i<5;i++){
			scanf("%c\n",&letter[i]);
		}
		printf("your entered letter is:");
		for(i=0;i<5;i++){
			printf("%c\n",letter[i]);
		}
		return 0;
	
	
	
}
