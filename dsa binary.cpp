
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*newnode(int data){
    struct node*node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
void traversepreorder(struct node*temp){
    if(temp!=NULL){
        cout<<"\n"<<(temp->data);
        traversepreorder(temp->left);
        traversepreorder(temp->right);


    }
}
void traverseinorder(struct node*temp){
    if(temp!=NULL){
        traverseinorder(temp->left);
        cout<<"\n"<<(temp->data);
        traverseinorder(temp->right);


    }
}
void traversepostorder(struct node*temp){
    if(temp!=NULL){
        traversepostorder(temp->left);
        traversepostorder(temp->right);
        cout<<"\n"<<(temp->data);
    }
}
int main(){
    struct node*root=newnode(50);
    root->left=newnode(50);
    root->right=newnode(20);
     root->left->left=newnode(2);
    root->left->right=newnode(20);
    root->right->left=newnode(25);
    root->right->right=newnode(50);
    cout<<"PREORDER TRAVERSE:="<<endl;
    traversepreorder(root);
    cout<<"\nINORDER TREVERSE:="<<endl;
    traverseinorder(root);
    cout<<"\n\nPOSTORDER TRAVERSE:="<<endl;
    traversepostorder(root);
    return 0;
}