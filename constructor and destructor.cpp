#include<iostream>
using namespace std;
class boy{
       int no;
    char name[20];
        public:
    boy(){
        cout<<"name of boy: "<<endl;
        cin>>name;
        cout<<"no of boy: "<<endl;
        cin>>no;
    }
    ~boy(){
	
    cout<<"destroy ";
}
};
int main(){
    boy a;
    return 0;
}
