//Binary Tree
// preOrder , inOrder and postOrder traversal

#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    public:
    node(int  val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
void preOrder(struct node* root){
    if(root==NULL)return;
    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}
void postOrder(struct node* root){
    if(root==NULL)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"\t";
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);

    //      1
    //     / \
    //    2    3
    //   / \
    //  4   5   
    preOrder(root);cout<<endl;
    inOrder(root);cout<<endl;
    postOrder(root);cout<<endl;
          return 0;
}