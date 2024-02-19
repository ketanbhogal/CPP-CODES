#include<iostream>
using namespace std;
class addition{
    private:
    int a,b,c;
    public:
    addition(){
        a=0;
        b=0;
    }
    friend int sum(addition);
};
int sum(addition A)
{
    A.a=10;
    A.b=20;
    A.c=A.a+A.b;

    return A.c;
    
}
int main(){
    addition A;
    cout<<"addition is:"<<sum(A);
    
    return 0;
    
}