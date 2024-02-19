#include<iostream>
using namespace std;
struct employee{
    int  id;
    char name;
    float salary;

};
int main(){
    struct employee ketan;
    ketan.id=10;
    ketan.name='h';
    ketan.salary=7800000000.8339;
    cout<<"print id: "<<ketan.id<<endl;
    cout<<"print salary: "<<ketan.salary<<endl;
    cout<<"print name:  "<<ketan.name<<endl;
    return 0;


}