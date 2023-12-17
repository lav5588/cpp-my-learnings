//Restore BST


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

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void calcPointers(node* root, node** first, node** mid, node** last, node** prev){
    if(root==NULL)return;
    calcPointers(root->left,first,mid,last, prev);
    if(*prev && root->data<(*prev)->data){
        if(!*first){
            *first=*prev;
            *mid=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    calcPointers(root->right,first,mid,last,prev);
}

void restoreBST(node* root){
    node *first,*mid, *last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calcPointers(root,&first,&mid,&last,&prev);
    if(first && last) swap(&(first->data),&(last->data));
    else if(first && mid) swap(&(first->data),&(mid->data));
}

void preOrder(node *root){
    if(root==NULL)return;

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}


void inOrder(node *root){
    if(root==NULL)return;

    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}


int main(){
    node* root=new node(6);
    root->left=new node(9);
    root->right=new node(3);
    root->left->left=new node(1);
    root->left->right=new node(4);
    root->right->right=new node(13);
    inOrder(root);
    cout<<endl;
    restoreBST(root);
    inOrder(root);
 
  
    return 0;
}






