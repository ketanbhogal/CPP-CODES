#include <stdio.h>
int main(){
	int num1,num2;
	char ch;
	float result;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	printf("choose opration for perform(+,-,*,/,%):");
	scanf("%c",&ch);
	result=0;
	switch(ch)
	{
		case'+':
			result=num1+num2;
			break;
			case'-':
				result=num1-num2;
				break;
				case'*':
				    result=num1*num2;
				    break;
				    case'/':
				        result=num1/num2;
				        break;
				        case'%':
				            result=num1%num2;
				            break;
				            default:
				            	printf("invalid opration:\n");
				            	
	}
	printf("result:%d%c%d=%f\n,num1,ch,num2,result");
	return 0;
	
}
