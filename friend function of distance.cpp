#include<iostream>
using namespace std;
class dist{
    private:
    int meter;
    public:
    dist():meter(0){}
    friend int addfive(dist d);
};
int addfive(dist d)
{
    d.meter+=5;
    return d.meter;
}
int main(){
    dist d;
    cout<<"distance:"<<addfive(d);
}