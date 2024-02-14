/*#include<iostream>
using namespace std;
class math{
	public:
		int a;
		int b;
		void insert(int abc,int xyz){
			a=abc;
			b=xyz;
		}
		void display(){
			cout<<a+b<<endl;
			cout<<a-b<<endl;
			cout<<a*b<<endl;
			
		}	
		
};
int main(){
	math m1;
	m1.insert(10,20);
	m1.display();
	return 0;
}*/
#include<iostream>
using namespace std;
class math{
	public:
	int a;
	int b;
	void insert(int abc,int xyz){
		a=abc;
		b=xyz;
	}
	void display(){
		cout<<a+b<<endl;
		cout<<a-b<<endl;
		cout<<a*b<<endl;
		cout<<a/b<<endl;
	}
};
int main(){
	math m1;
	math m2;
	m1.insert(10,20);
	m1.display();
	cout<<"enter value:";
	cin>>m2.a;
	cin>>m2.b;
	m2.display();
	return 0;
}

