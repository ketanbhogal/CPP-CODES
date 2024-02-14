#include<iostream>
using namespace std;
class factorial{
	private:
		int n,n1,f=1;
		public:
			void input();
			void cal();
			void display();
			
};
void factorial::input(){
	cout<<"enter any number::";
	cin>>n;
	
}
void factorial::cal(){
	n1=n;
	if(n==0||n==1)
	cout<<"\nfactorial of number["<<n<<"]is::1\n";
	else{
		while(n>0)
		{
			f=f*n;
			n--;
		}
	}
}
void factorial::display(){
	cout<<"\nfactorial of["<<n1<<"]is::"<<f<<"\n";
	
}
int main(){
	factorial f;
	f.input();
	f.cal();
	f.display();
	return 0;
}
