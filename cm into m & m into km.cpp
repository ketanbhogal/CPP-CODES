#include<stdio.h>
int main(){
	int l;
	printf("length in centimeter = ");
	scanf("%d",&l);
	printf("centimeter in meter is:%f ",l*0.01);
	printf("centimeter in kilometer is:%f",l*0.00001);
	return 0;
}
