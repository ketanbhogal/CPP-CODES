/*#include<iostream>
using namespace std;
class percentage{
	public:
		int a1,a2,a3,a4,a5;
		void insert(int m1,int m2,int m3,int m4,int m5){
			a1=m1;
			a2=m2;
			a3=m3;
			a4=m4;
			a5=m5;
		}
		void display(){
			cout<<"percentage="<<a1+a2+a3+a4+a5/5<<endl;
		}
};
int main(){
	percentage p1,p2;
	p1.insert(10,20,30,40,50);
	p1.display();
	cout<<"enter the five subject marks";
	cin>>p2.a1;
	cin>>p2.a2;
	cin>>p2.a3;
	cin>>p2.a4;
	cin>>p2.a5;
	p2.display();
	return 0;
	
}*/
#include<iostream>
using namespace std;
class opration{
	public:
		int a,b,c,d,e;
		void insert(int v,int w,int x,int y,int z){
			v=a;
			w=b;
			x=c;
			y=d;
			z=e;
		}
		void display(){
			cout<<"avarage is:"<<a+b+c+d+e/5<<endl;
		}
};
int main(){
	opration o1;
	o1.insert(20,50,80,60,90);
	o1.display();
	 return 0;
}

