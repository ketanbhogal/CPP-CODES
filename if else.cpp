//***************** simple if else loop *************
#include<iostream>
using namespace std;
int main(){


int a=25;
int b=200;
if(a==20){
    cout<<"these is 20";

}
else{
    cout<<"these is not 20:"<<endl;
}


//*************** Nested if else loop *************;

if(b==10){
    cout<<"this is 10"<<endl;

}
else{
    if(b==100)
        cout<<"this is 100"<<endl;
        else{
            if(b==200)
            cout<<"these is 200"<<endl;
            else{
                if(b==300)
                cout<<"this is 300"<<endl;
                else{
                    if(b==325)
                    cout<<"these is  325"<<endl;
                    else{
                        cout<<"these is not equal to 100,200,300,325"<<endl;
                    }
                }
            }
        }
        
    }



}
