#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int roll;
    char name[20];
    float marks;
    cout<<"::::::::::::::file is opening::::::::::::::::::"<<endl;
    ofstream fout("c:");
    cout<<";;;;;;;;;;; file is open ;;;;;;;;;;;;"<<endl;
    cout<<"\n$$$$$$$$$$$$ file writing opration $$$$$$$$$$$$$$$"<<endl;
    cout<<"enter the name:"<<name;
    cin>>name;
    fout<<name;
    cout<<"enter the roll number:"<<endl;
    cin>>roll;
    fout<<roll;
    cout<<"enter the marks:"<<endl;
    cin>>marks;
    fout<<marks;
    cout<<"@@@@@@@@@@ file writing opration completed @@@@@@@@@"<<endl;
    cout<<"########### file reading opration ##########"<<endl;
    ifstream fin("c:");
    fin>>name;
    fin>>roll;
    fin>>marks;
    fout.close();
    return 0;
}