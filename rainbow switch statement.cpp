#include<stdio.h>
int main(){
	char colour;
	printf("enter the colour name:\n");
	scanf("%c",&colour);
	switch(colour){
		case 'v':
			printf("voilet colour");
			break;
			case 'i':
				printf("indigo colour");
				break;
				case 'b':
					printf("blue colour");
					break;
					case 'g':
						printf("green colour");
						break;
						case 'y':
							printf("yellow colour");
							break;
							case 'o':
								printf("orange colour");
								break;
								case 'r':
									printf("red colour");
									break;
									default:
										printf("this colour is not present in rainbow");
										return 0;
	}
}
