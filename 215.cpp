//Delete in a BST


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

node *inorderSucc(node *root){
    node* curr=root;
    while(curr && curr->left!=NULL)curr=curr->left;
    return curr;
}

node* deleteInBST(node* root,int key){
    if(key<root->data)
        root->left=deleteInBST(root->left,key);
    else if(key>root->data)
        root->right=deleteInBST(root->right,key);
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node *temp=root->left;
            free(root);
            return temp;
        }
        node *temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteInBST(root->right,temp->data);
    }
    return root;

}

int main(){
    node* root=NULL;
    int arr[]={3,5,7,4,2,1,8};
    for(int i=0;i<7;i++){
        root=insertBST(root,arr[i]);
    }
    inOrder(root);
    cout<< endl;

    deleteInBST(root,4);
    inOrder(root);
    
    

   
  
    return 0;
}






