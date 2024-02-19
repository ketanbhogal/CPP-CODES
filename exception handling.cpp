#include<iostream>
using namespace std;
int main(){
    int a=50;
    int b=0;
    double c=0;
    try{
        if(b==0)
        {
            // throw[l];
        }
        c=a/b;
        cout<<"\ndevision is::"<<c;

    }catch (int i){
        cout<<"\n divide by 0! error error number is:"<<i<<endl;

        
    }
    return 0;
}