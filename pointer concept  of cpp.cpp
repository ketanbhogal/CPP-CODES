#include<iostream>
using namespace std;



//pointer == it is a data type 
//they holds the address of other data types
//& is address of oprator is store address  
//* is thederefrensing oprator is the store the value of variable



int main(){
    int a=3;
    int *b=&a;
    int **c=&b;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<**c<<endl;

}