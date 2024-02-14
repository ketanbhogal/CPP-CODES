#include <iostream>
using namespace std;
int main(){
	//first type of decleration of array;
	int marks[4]={85,79,75,65};
	cout<<"************this are only marks**********"<<endl;
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	//second method is :::::::::
	cout<<"**************this are oop marks**************"<<endl;
	int oopmark[5];
	oopmark[0]=87;
	oopmark[1]=89;
	oopmark[2]=79;
	oopmark[3]=82;
	oopmark[4]=78;
	cout<<oopmark[0]<<endl;
	cout<<oopmark[1]<<endl;
	//value change karata yeu shakate tyasathi cout chaya adhi navin value dyavi;
	oopmark[2]=100;
	cout<<oopmark[2]<<endl;
	cout<<oopmark[3]<<endl;
	cout<<oopmark[4]<<endl;
	//ye value for loop ki help se print kar sakate hai;
	cout<<"oop marks print with the help of for loop"<<endl;
	

	
	
	return 0;
	
}
