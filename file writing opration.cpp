#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int roll;
    char name[20];
    float marks;
    cout<<"**************  writing file opration  **********"<<endl;
    ofstream fout("c:");
    cout<<"file is open:"<<endl;
    cout<<"******** write file with the help of fout **************"<<endl;
    cout<<"enter the roll number:"<<endl;
    cin>>roll;
    fout<<roll;
    cout<<"enter the name:"<<endl;
    cin>>name;
    fout<<name;
    cout<<"enter the marks:"<<endl;
    cin>>marks;
    fout<<marks;
    fout.close();
    cout<<"*******file is close******";
    return 0;

}