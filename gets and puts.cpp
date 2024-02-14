#include <stdio.h>
int main(){
	char name[20];
	printf("enter the name:");
	fgets(name,21,stdin);
	printf("enter your name:");
	puts(name);
}
