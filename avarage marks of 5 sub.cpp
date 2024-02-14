#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e;
	float avg;
	printf("Enter 5 subject marks:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("Avarage marks is:%f",avg);
	return 0;
}
