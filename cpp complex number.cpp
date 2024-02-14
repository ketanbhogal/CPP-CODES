/*#include<iostream>
using namespace std;
class complex{
	int re,im;
	public:
	void get(){
		cout<<"enter real number::";
		cin>>re;
		cout<<"enter imageneri number::";
		cin>>im;
	}
	void disp(){
		cout<<re<<"+"<<im<<"i"<<"\n";
	}
	void sum(complex,complex);
	
};
void complex::sum(complex c1,complex c2)
{
	re=c1.re+c2.re;
	im=c1.im+c2.im;
}
int main(){
	complex c1,c2,c3;
	cout<<"enter first complex number:\n";
	c1.get();
	cout<<"\nenter second complex number:";
	c2.get();
	cout<<"\nthe first complex  number:";
	c1.disp();
	cout<<"\nthe second complex  number:";
	c2.disp();
	c3.sum(c1,c2);
	cout<<"\nthe sum of two complex number is:";
	c3.disp();
	return 0;
	
}*/
/*#include<iostream>
using namespace std;
class complex{
	int re,img;
	public:
	void get(){
		cout<<"enter real number::";
		cin>>re;
		cout<<"enter imageneri number:";
		cin>>img;
	}	
	void disp(){
		cout<<re<<"+"<<img<<"i"<<"\n";
	}
	void sum(complex,complex);
};
void complex::sum(complex c1,complex c2){
	re=c1.re+c2.re;
	img=c1.img+c2.img;
}
int main(){
	complex c1,c2,c3;
	cout<<"enter first complex number:";
	c1.get();
	cout<<"enter second complex number:";
	c2.get();
	cout<<"enter first complex number:";
	c1.disp();
	cout<<"enter second complex number:";
	c2.disp();
	c3.sum(c1,c2);
	cout<<"sum of two complex number is:";
	c3.disp();
	return 0;
}*/
#include<iostream>
using namespace std;
class complex{
	int img,re;
	public:
		void get(){
		cout<<"enter imageneri number:"<<endl;
		cin>>img;
		cout<<"enter real number:"<<endl;
		cin>>re;
	}
	void display(){
		cout<<re<<"+"<<img<<"i"<<endl;
		
	}
	void sum(complex,complex);
};
void complex::sum(complex c1,complex c2){
	re=c1.re+c2.re;
	img=c1.img+c2.img;
	
}
int main(){
	complex c1,c2,c3;
	cout<<"enter first complex number:"<<endl;
    c1.get();
    cout<<"enter second complex number:"<<endl;
    c2.get();
    cout<<"the first complex number is:"<<endl;
    c1.display();
    cout<<"the second complex number is:"<<endl;
    c2.display();
    c3.sum(c1,c2);
    cout<<"sum of two complex number is:"<<endl;
    c3.display();
    return 0;
}
