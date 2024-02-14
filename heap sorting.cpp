/*#include<iostream>
using namespace std;
void heapify(int arr[],int n,int root)
{
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
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
		
	}
}
void displayArray(int arr[],int n){
	for(int i=0;i<n;++i)
	cout<<arr[i]<<" ";
	cout<<"\n";
	
}
int main(){
	int i,n;
	int heap_arr[20];
	cout<<"\n enter number of element :";
	cin>>n;
	cout<<"enter array element:";
	for(i=0;i<n;i++)
	cin>>heap_arr[i];
	cout<<"input array"<<endl;
	displayArray(heap_arr,n);
	heapsort(heap_arr,n);
	cout<<"sorted array is:"<<endl;
	displayArray(heap_arr,n);
	
}*/
#include<iostream>
using namespace std;
void heapify(int arr[],int n,int root)
{
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
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
		
	}
}
void displayArray(int arr[],int n){
	for(int i=0;i<n;++i)
	cout<<arr[i]<<" "<<endl;
	cout<<"\n";
	
}
int main(){
	int i,n;
	int heap_arr[20];
	cout<<"enter how many element are sorted:::"<<endl;
	cin>>n;
	cout<<"enter element of array::\n"<<endl;
	for( i=0;i<n;i++)
	cin>>heap_arr[i];
	cout<<"given array is:"<<endl;
	displayArray(heap_arr,n);
	heapsort(heap_arr,n);
	cout<<"sorted array is:"<<endl;
	displayArray(heap_arr,n);
	return 0;
}
