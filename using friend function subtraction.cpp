#include<iostream>
using namespace std;
class sub{
    private:
    float i,j,k;
    public:
    sub(){
        i=0;
        j=0;

    }
    friend float min(sub);
};
float min (sub s){
    s.i=80.20;
    s.j=20.66;
    s.k=s.i-s.j;
    return s.k;

}
int main(){
    sub s;
    cout<<"the subtraction of two number is:"<<min(s);
    return 0;
}