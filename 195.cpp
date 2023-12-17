// build binary tree from preOrder and inOrder

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
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr)return i;
    }
    return -1;
}
node* buildTree(int preorder[],int inorder[],int start, int end){
    static int idx=0;
    if(start>end)return NULL;
    int curr=preorder[idx];
    idx++;
    node* newNode=new node(curr);
    if(start==end)return newNode;
    int pos=search(inorder,start,end,curr);
    newNode->left=buildTree(preorder,inorder,start,pos-1);
    newNode->right=buildTree(preorder,inorder,pos+1,end);
    return newNode; 


}

void inOrder(struct node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}
void preOrder(struct node* root){
    if(root==NULL)return;
    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    //build Tree
    node* root= buildTree(preorder,inorder,0,4);
    inOrder(root); 
    cout<<endl; 
    preOrder(root);


    return 0;
}