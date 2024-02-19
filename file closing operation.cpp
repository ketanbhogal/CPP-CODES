#include<iostream>
#include<fstream>
using namespace std;
int main(){
    cout<<"*********************file closing opration*****************"<<endl;
    ofstream fout("c:");
    fout.close();
    cout<<"file is close ";
    return 0;

}