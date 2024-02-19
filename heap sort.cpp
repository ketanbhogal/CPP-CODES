#include<iostream>
#include<stdlib.h>
using namespace std;
void heapify(int arr[],int n,int root){
    int largest=root;
    int l=2*root+1;
    int r=2*root+2;
    if(l<n&&arr[l]>arr[largest])
    largest=l;
    if(r<n&&arr[r]>arr[largest])
    largest=r;
    if(largest!=root){
        swap(arr[root],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
void displayArray(int arr[],int n){
    for(int i=0;i<n;++i)
    cout<<arr[i]<<"\n";
    cout<<"\n";

}
int main(){
    int i,n;
    int heap_arr[20];
    cout<<"enter the how many number sorted:"<<endl;
    cin>>n;
    cout<<"enter array element::"<<endl;
    for(i=0;i<n;i++)
    cin>>heap_arr[i];
    cout<<"given array is::"<<endl;
    displayArray(heap_arr,n);
    heapsort(heap_arr,n);
    cout<<"sorted array is::"<<endl;
    displayArray(heap_arr,n);
    return 0;
    

}