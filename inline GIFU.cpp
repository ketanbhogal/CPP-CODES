#include<iostream>
using namespace std;
inline int add(int a,int b,int c,int d,int e,int f,int g){
return a+b+c+d+e+f+g;
}
inline int subtract(int l,int m,int n,int o,int p,int q,int r){

return l-m-n-o-p-q-r;
}

int main(){
     cout<<"the opration on this answer is :::"<<add(40,40,50,20,10,50,5)<<"\n"<<endl;
    cout<<"the opration on this answer is :::"<<subtract(50,11,8,7,6,5,1)<<"\n"<<endl;
    
    return 0;
}
