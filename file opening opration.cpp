#include<iostream>
#include<fstream>
using namespace std;
int main(){
    cout<<"**************opening file opration*********";
    ofstream fout(":c");
   // fout.open();
    cout<<":::::::::::::::file is open:::::::::::"<<endl;
    return 0;
}