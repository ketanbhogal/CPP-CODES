#include<iostream>
using namespace std;
class sum{
    private:
    float a,b,c,d;
    public:
    sum(){
        a=0;
        b=0;

    }
    friend float add(sum);
};
float add(sum m){
    m.a=5;
    m.b=6;
    m.c=m.a+m.b;
    return m.c;
}
int main(){
    sum m;
    cout<<"addition is:"<<add(m)<<endl;
    return 0;
}