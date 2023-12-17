//sum of all the nodes in a binary tree

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int sumOfNodes(node* root){
    if (root==NULL)return 0;


    return sumOfNodes(root->left)+sumOfNodes(root->right)+root->data;
}
int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
   cout<<sumOfNodes(root);
    return 0;
}