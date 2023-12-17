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

node *sortedArrayToBST(int arr[],int start,int end){
    if (start>end)return NULL;
    int mid=(start + end)/2;
    node *root= new node(arr[mid]);
    root->left=sortedArrayToBST(arr,start,mid-1);
    root->right=sortedArrayToBST(arr,mid+1,end);
    return root;
    
}

void preOrder(node *root){
    if(root==NULL)return;

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}



int main(){
    int arr[]={10,20,30,40,50};
    node* root=sortedArrayToBST(arr,0,4);
    preOrder(root);
    
  
    
  
    return 0;
}






