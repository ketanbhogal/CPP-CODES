#include<iostream>
using namespace std;
void print(int a[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
	{
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
}
int main(){
    int a[6]={45,1,32,13,26,25};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"\nbefore sorting array element are -\n";
    print(a,n);
    bubble(a,n);
    cout<<"\n after sorting element are - \n";

    print(a,n);
    return 0;
}
