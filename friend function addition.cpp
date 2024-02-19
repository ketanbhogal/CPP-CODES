#include<iostream> 
using namespace std;
class add{
    private:
    int i,j,k;
    public:
    add(){
        i=23;
        j=25;

    }
    friend int sum(add);

};
int sum(add a){
    a.i=20;
    a.j=35;
    a.k=a.i+a.j;
    return a.k;

}
int main(){

    add a;
    cout<<"addition of two number is::"<<sum (a);
    return 0;
}