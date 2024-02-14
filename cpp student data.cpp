#include<iostream>
using namespace std;
class student{
	public:
		char name[20],redg[10],branch[10];
		int sem;
		public:
			void input();
			void display();
			
};
void student::input(){
	cout<<"enter name:";
	cin>>name;
	cout<<"enter redg.no:";
	cin>>redg;
	cout<<"enter branch:";
	cin>>branch;
	cout<<"enter sem:";
	cin>>sem;
	
}
void student::display()
{
	cout<<"\nname:"<<name<<endl;
	cout<<"redg.no:"<<redg<<endl;
	cout<<"branch:"<<branch<<endl;
	cout<<"sem:"<<sem<<endl;
}
int main(){
	student s;
	s.input();
	s.display();
	return 0;
	
}
