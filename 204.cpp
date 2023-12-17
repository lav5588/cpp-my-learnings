// Sum replacement in a binary Tree



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

void sumReplacement(node* root){
    if(root==NULL)return;
    sumReplacement(root->left);
    sumReplacement(root->right);
    if(root->left!=NULL)root->data+=root->left->data;
    if(root->right!=NULL)root->data+=root->right->data;
}
void inOrder(node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}
int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
   inOrder(root);
   cout<<endl;
   sumReplacement(root);
   inOrder(root);
    return 0;
}