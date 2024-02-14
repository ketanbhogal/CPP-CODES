#include<stdio.h>
int swap(int a,int b);
int main(){
	int a,b;
	printf("print the value of a and b:");
	scanf("%d%d",&a,&b);
	swap( a, b);
}
int swap(int a,int b){
	int swap=a;
	 a=b;
	b=swap;
	printf("\nafter swapping is");
	printf("\nafter swap a is:%d",a);
	printf("\nafter swap a is:%d",b);
	return 0;
} 
/*#include<stdio.h>
void swap(int a,int b);
void main(){
	int(a,b);
	printf("enter the two number:");
	scanf("%d%d",&a,&b);
	swap();
	
}
void swap(int a,int b){
	swap=a;
	a=b;
	b=swap;
	printf("*******AFTER SWWAPPING*******");
	printf("after swapping:%d",&a);
	printf("after swapping:%d",&b);
	
}*/
