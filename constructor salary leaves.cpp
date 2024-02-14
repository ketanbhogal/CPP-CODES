#include<iostream>
using namespace std;
class employee{
	public:
		int bonus=50000;
		float salary=100000;
		float leaves=3333.34;
		int a,b;
		float c,total;
		employee(){
			cout<<"enter leaves :"<<endl;
			cin>>a;
			c=leaves*a;
			total=salary+bonus;
			cout<<"total salary is:"<<total<<endl;
			cout<<"final payment is:"<<salary-c;
		}
};
int main(){
	employee e1;
	return 0;
}
