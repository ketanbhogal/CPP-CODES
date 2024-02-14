#include<stdio.h>
int main()
{
	char s[20];
	printf("enter the string:");
	fgets(s,12,stdin);
	printf("%s",s);
	return 0;
}
