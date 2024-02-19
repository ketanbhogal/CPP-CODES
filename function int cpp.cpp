#include<iostream>
using namespace std;
int addition(){
    int a,b,c;
    a=10;
    b=20;
    c=a+b;
    cout<<"enter addition:: "<<c<<endl;
    return c;
}
int main(){
    addition();
    //main fuction only call  new functin name;
    return 0;
}