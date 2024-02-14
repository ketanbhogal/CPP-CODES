#include<iostream>
using namespace std;
class student{
	private:
		char name[20];
		char address[30];
		int roll;
		int mobile_no;
		public:
			void getdetails(void);
			void putdetails(void);
		
};
void student::getdetails(void){
	cout<<"Enter Student Name:";
	cin>>name;
	cout<<"Enter Student Address:";
	cin>>address;
	cout<<"Enter Student Roll Number:";
	cin>>roll;
	cout<<"Enter Student Mobile Number:";
	cin>>mobile_no;
	
} 
void student::putdetails(void){
	cout<<"\n*****STUDENT DETAILS****\n";
	cout<<"STUDENT NAME:"<<name<<endl<<"STUDENT ADDRESS:"<<address<<endl<<"STUDENT ROLL.NO.:"<<roll<<endl<<"STUDENT MOBILE.NO:"<<mobile_no<<"\n"<<endl;
	
}
int main(){
	int i,n;
	cout<<"Enter How Many Student Data You Want To Print:"<<endl;
	cin>>n;
	student std;
	for(i=0;i<n;i++){
	
	std.getdetails();
	std.putdetails();
}
	return 0;
}

