#include<iostream>
using namespace std;
//multi  is a function (parametrised they use in the main class)
//function prototype means the syntax is :: type ,function name(argument);
//function prototype means they are gives assurity " ye function aapko jarur milenga age "

int multi(int a,int b);
    //above is a function prototype


int main(){
    
    int j,k;
    cout<<"enter first number ::: "<<endl;
    cin>>j;
    cout<<"enter second number ::: "<<endl;
    cin>>k;
    cout<<"multiplication of two number::"<<multi(j,k)<<endl;
    return 0;
}
int multi(int a,int b){
    
    int c=a*b;
    return c;
}