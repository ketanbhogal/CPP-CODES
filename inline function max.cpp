#include<iostream>
using namespace std;
inline int max(int x,int y,int z){
    return (x>y>z)?x:y;

}
int main(){
    cout<<"max(20,10):"<<max(20,10)<<endl;
    cout<<"max(0,200):"<<max(0,200)<<endl;
    cout<<"max(100,1010):"<<max(100,1010,10000)<<endl;
    cout<<"max(700,900):"<<max(700,500);
    return 0;
}