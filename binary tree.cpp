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
 	cout<<"pre order is:"<<endl;
 	traversepreorder (root);
 	cout<<"\nin order is:"<<endl;
 	traverseinorder (root);
 	cout<<"\npost order is:"<<endl;
 	traversepostorder (root);
	return 0;
 }