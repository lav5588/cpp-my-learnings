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
int calcHeight(node* root){
    if(root==NULL) return 0;
    return max(calcHeight(root->left),calcHeight(root->right))+1;
}

bool balancedHeight(node* root){
    if(root==NULL)return true;
    if(!balancedHeight(root->left) || !balancedHeight(root->right))return false;
    int lh=calcHeight(root->left);
    int rh=calcHeight(root->right);
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
   cout<<balancedHeight(root)<<endl;

   node* root1=new node(1);
   root1->left=new node(2);
   root1->left->left=new node(3);
   cout<<balancedHeight(root1);
   
    return 0;
}