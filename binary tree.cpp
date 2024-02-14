/*
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int data){
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
 void traversepreorder (struct node *temp){
 	if (temp!=NULL){
 		cout<<" "<<(temp->data);
 		traversepreorder(temp->left);
 		traversepreorder(temp->right);
		 
	 }
 	
 }
 void traverseinorder(struct node *temp)
 {
 	if(temp!=NULL){
	 traverseinorder(temp->left);
 	cout<<" "<<(temp->data);
 	traverseinorder(temp->right);
      }
 }
 void traversepostorder(struct node*temp){
 	if(temp!=NULL){
 		traversepostorder(temp->left);
 		traversepostorder(temp->right);
 		cout<<" "<<(temp->data);
	 }
 }
 int main(){
 	struct node*root=newnode(5);
 	root->left=newnode(10);
 	root->right=newnode(8);
 	cout<<"pre order is:";
 	traversepreorder (root);
 	cout<<"in order is:";
 	traverseinorder (root);
 	cout<<"post order is:";
 	traversepostorder (root);
 }*/
 /*#include<iostream>
using namespace std;
class employee{
	private:
		char name[20];
		char add[20];
		int id;
		
		float salary;
		public:
			void getdetails(void);
			void putdetails(void);
			
};
void employee::getdetails(void){
	cout<<"enter the name:";
	cin>>name;
	cout<<"enter the addresss:";
	cin>>add;
	cout<<"enter the id:";
	cin>>id;
	
	cout<<"enter the salary:";
	cin>>salary;
	
}
void employee::putdetails(void){
	cout<<"name"<<name<<endl<<"address:"<<add<<endl<<"id:"<<id<<endl<<"salary:"<<salary<<endl;
	int hra;
	hra=97*salary/100;
	cout<<"hra is:"<<hra<<endl;
	int pf;
	pf=0.1*salary/100;
	cout<<"pf is:"<<pf<<endl;
	
	
}
int main(){
	int i,j;
	cout<<"how many employee details you want to print:";
	cin>>j;
	for(i=0;i<j;i++){
		employee std;
		std.getdetails();
		std.putdetails();
	}*/
/*	#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node*newnode(int data){
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
void traversepreorder (struct node*temp){
	if(temp!=NULL){
		cout<<" "<<temp->data;
		traversepreorder(temp->left);
		traversepreorder(temp->right);
		
	}
	
}
void traverseinorder(struct node*temp){
	if(temp!=NULL){
		traverseinorder(temp->left);
		cout<<" "<<temp->data;
		traverseinorder(temp->right);
		
	}
}
void traversepostorder(struct node*temp){
	if(temp!=NULL){
		traversepostorder(temp->left);
		traversepostorder(temp->right);
		cout<<" "<<temp->data;
	}
}
int main(){
	struct node*root=newnode(123);
	root->left=newnode(321);
	root->right=newnode(231);
	cout<<"preorder is:";
	traversepreorder (root);
	cout<<"inorder is:";
	traverseinorder (root);
	cout<<"postorder is:";
	traversepostorder (root);
	return 0;
}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
class employee{
	private:
		char name[50];
		int id;
		float salary;
		public:
			void getdetails(void);
			void putdetails(void);
};
void employee::getdetails(void){
	cout<<"enter the name of employee:";
	cin>>name;
	cout<<"enter the id:";
	cin>>id;
	cout<<"enter the salary:";
	cin>>salary;
	
}
void employee::putdetails(void){
	cout<<"********* EMPLOYEE DETAILS *********";
	cout<<"NAME OF EMPLOYEE IS:"<<name<<endl<<"ID OF EMPLOYEE IS:"<<id<<endl<<"EMPLOYEE OF SALARY IS:"<<salary<<endl;
	float hra;
	hra=97*salary/100;
	cout<<"HRA IS:"<<hra<<endl;
	float pf;
	pf=0.1*salary/100;
	cout<<"PF IS:"<<pf<<endl;
	
}
int main(){
	int i,j;
	cout<<"HOW MANY EMPLOYEE DEATAILS YOU WANT TO PRINT:";
	cin>>j;
	for(i=0;i<j;i++){
		employee std;
		std.getdetails();
		std.putdetails();
	}
	return 0;
}*/
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
	
};
struct node *newnode(int data){
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
void traversepreorder(struct node*temp){
	if(temp!=NULL){
		cout<<" "<<temp->data;
		traversepreorder(temp->left);
		traversepreorder(temp->right);
	}
}
void traverseinorder(struct node*temp){
	if(temp!=NULL){
		traverseinorder(temp->left);
		cout<<" "<<temp->data;
		traverseinorder(temp->right);
		
	}
}
void traversepostorder(struct node*temp){
	if(temp!=NULL){
		traversepostorder(temp->left);
		traversepostorder(temp->right);
		cout<<" "<<temp->data;
	}
}
int main(){
	struct node*root=newnode(50);
	root->left=newnode(30);
	root->right=newnode(80);
	cout<<"\npreorder is:";
	traversepreorder(root);
	cout<<"\ninorder is:";
	traverseinorder(root);
	cout<<"\npostorder is:";
	traversepostorder(root);
	return 0;
}


