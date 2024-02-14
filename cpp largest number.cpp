#include<iostream>
using namespace std;
class largest{
	private:
		int x,y,z;
		public:
			void input()
			{
				cout<<"\nenter first number:";
				cin>>x;
				cout<<"enter the second number:";
				cin>>y;
				cout<<"enter the third number:";
				cin>>z;
				
			}
			void cal(){
				int r;
				r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
				cout<<"\nthe largest number among["<<x<<","<<y<<","<<z<<"]="<<r<<"\n";
				
			}
};
int main(){
	largest g;
	g.input();
	g.cal();
	return 0;
}
