//Construct BST from Preorder


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

node* constructBST(int preorder[],int *preorderIdx,int key,int min,int max,int n){
    if(*preorderIdx>=n)return NULL;
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preorderIdx=*preorderIdx+1;
        if(*preorderIdx<n)
            root->left=constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        if(*preorderIdx<n)
            root->right=constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
    }
    return root;
}
void inOrder(node *root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}



int main(){
    
    int arr[]={10,2,1,13,15};
    int n=5;
    int preorderIdx=0;
    node* root=constructBST(arr,&preorderIdx,arr[0],INT_MIN,INT_MAX,n);
    inOrder(root);
    cout<< endl;   
  
    return 0;
}






