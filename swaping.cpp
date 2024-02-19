#include<iostream>
using namespace std;
int main(){
  int temp;
    int a,b;
    cout<<"enter first number ::: "<<endl;
    cin>>a;
    cout<<"enter second number ::: "<<endl;
    cin>>b;
    cout<<"brfore swapping a and b are ::\n"<<a<<" "<<b<<endl;
   
    temp=a;
    a=b;
    b=temp;
    cout<<" after swapping a and b are:::"<<a<<" "<<b<<endl;
    return 0;
}