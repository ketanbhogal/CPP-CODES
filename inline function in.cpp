#include<iostream>
using namespace std;
inline int add(int a,int b,int c,int d,int e,int f){
    return a+b+c+d+e+f;

}
inline int sub(int a,int b,int c,int d,int e,int f){
    return a-b-c-d-e-f;
    
}
inline int mul(int a,int b,int c,int d,int e,int f){
    return a*b*c*d*e*f;
    
}
int main(){
    cout<<"the opration on this answer is :::"<<add(40,40,50,20,10,50)<<"\n"<<endl;
    cout<<"the opration on this answer is :::"<<sub(50,11,8,7,6,5)<<"\n"<<endl;
    cout<<"the opration on this answer is :::"<<mul(2,2,2,2,2,2)<<"\n"<<endl;
    return 0;
}