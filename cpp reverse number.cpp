#include<iostream>
using namespace std;
class rev{
	private:
		int n,n1,rn=0,d;
		public:
			void input();
			void cal();
			void display();
			
		
};
void rev::input(){
	cout<<"\nenter any positive number::";
	cin>>n;
}
void rev::cal(){
	n1=n;
	while(n>0)
	{
		d=n%10;
		rn=(rn*10)+d;
		n/=10;
		
	}
}
void rev::display(){
	cout<<"\nreverseof["<<n1<<"]is::"<<rn<<"\n";
}
int main(){
	rev r;
	r.input();
	r.cal();
	r.display();
	return 0;
}
