//size of binary tree
#include<iostream>
using namespace std;
struct node{
  int data;
  struct node* left;
  struct node* right;
  node(int x){
    data=x;
    left=NULL;
    right=NULL;
  }
};
int getsize(struct node* root){
  if(root==NULL){
    return 0;
  }
  else{
    return  ( getsize(root->left)+getsize(root->right))+1;
  }
  
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  cout<<getsize(root);
}
