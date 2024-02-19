#include<iostream>
using namespace std;
class boy{
    public:
    int a;
    float b;
    char c;
    void getdata(void);
};
void boy::getdata(void){
    cout<<"enter the student id:"<<endl;
    cin>>a;
    cout<<"enter the studen marks:"<<endl;
    cin>>b;
    cout<<"enter name:"<<endl;
    cin>>c;

}
class girl:public boy{
    public:
    int roll;
    char name;
    float marks;
    void putdata(void);
};
void girl::putdata(void){
    cout<<"enter the student id:"<<endl;
    cin>>roll;
    cout<<"enter the studen marks:"<<endl;
    cin>>marks;
    cout<<"enter name:"<<endl;
    cin>>name;
}
int main(){
    girl g;
    g.getdata();
    g.putdata();
    return 0;
}