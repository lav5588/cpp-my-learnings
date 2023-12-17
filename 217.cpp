//check the given binary tree is BST or not


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

node* insertBST(node* root,int val){
    if(root==NULL)return new node(val);
    if(val<root->data)root->left=insertBST(root->left,val);
    else root->right=insertBST(root->right,val);
    return root;
}
void preOrder(node *root){
    if(root==NULL)return;

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}

bool isBST(node* root,node* min,node* max){
    if(root==NULL)return true;
    if(min!=NULL && root->data<=min->data)return false;
    if(max!=NULL && root->data>=max->data)return false;
    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max);
    return leftValid && rightValid;
}


int main(){
    node* root=NULL;
    
    int arr[]={3,5,7,4,2,1,8};
    for(int i=0;i<7;i++){
        root=insertBST(root,arr[i]);
    }

   

    node *min=NULL;
    node *max=NULL;
    cout<<isBST(root,min,max);
    
    
    
    
    
    

   
  
    return 0;
}






