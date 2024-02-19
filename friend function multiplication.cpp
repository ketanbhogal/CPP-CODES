#include<iostream>
using namespace std;
class mul{
    private:
    int a,b,c;
    public:
    mul(){
        a=1;
        b=2;
    }
    friend int multi(mul);
};
int multi(mul A){
    A.a=10;
    A.b=20;
    A.c=A.a*A.b;
    return A.c;

}
int main(){
    mul A;
    cout<<"multiplication of two number is:"<<multi(A);
    return 0;
}