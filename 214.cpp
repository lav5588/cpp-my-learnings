//Build  a BST
//Search in a BST


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
void inOrder(node *root){
    if(root==NULL)return;

    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);


}
node* searchInBST(node* root,int key){
    if(root==NULL)return NULL;
    if(root->data==key)return root;
    if(root->data>key) return searchInBST(root->left,key);
    return searchInBST(root->right,key);
}

int main(){
    node* root=NULL;
    int arr[]={3,5,7,4,2,1,8};
    for(int i=0;i<7;i++){
        root=insertBST(root,arr[i]);
    }
    inOrder(root);
    cout<< endl;
    
    
    if(searchInBST(root,7)==NULL)cout<<"Key doesn't exist in BST";
    else cout<<"Key exist in BST";
   
  
    return 0;
}






