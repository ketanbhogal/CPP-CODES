#include<iostream>
using namespace std;
int main(){
	int i,j,count;
	cout<<"enter any number:::"<<endl;
	cin>>j;
	count==0;
	for (i=2;i<j;i++){
		if(j%i==0){
			count==1;
			break;
			
		}
	}
	if(count==0){
		cout<<"number is prime:";
		
		
	}
	else{
		cout<<"number is not prime:";
	}
}
