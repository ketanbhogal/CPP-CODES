#include<iostream>
using namespace std;
float subtraction(){
    float a=20000,b=4000,c;
    c=a-b;
    cout<<"subtraction of a and b is:: "<<c<<endl;
    return c;
}
int main(){
    //main fuction only call  new functin name;
    subtraction();
    return 0;
}