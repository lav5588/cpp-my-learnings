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


bool balancedHeight(node* root,int* height){
    if(root==NULL)return true;
    int lh=0,rh=0;
    if(!balancedHeight(root->left,&lh) || !balancedHeight(root->right,&rh))return false;
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1)return true;
    return false;
}


int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
   int height=0;
   cout<<balancedHeight(root,&height)<<endl;

   node* root1=new node(1);
   root1->left=new node(2);
   root1->left->left=new node(3);
   int height1=0;
   cout<<balancedHeight(root1,&height1);
   
    return 0;
}