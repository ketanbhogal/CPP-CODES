#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<"for loop using code"<<endl;
    cout<<"which table you want to print"<<endl;
    cin>>j;

    for(i=1;i<=10;i++)
    cout<<j<<"*"<<i<<"=\t"<<i*j<<endl;

    return 0;

}