// build binary tree from postOrder and inOrder



#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    public:
    node(int val){
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
node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx=end;
    if(start>end)return NULL;
    int curr=postorder[idx];
    idx--;
    int pos=search(inorder,start,end,curr);
    node* newNode=new node(curr);
    if(start==end)return newNode;
    newNode->right=buildTree(postorder,inorder,pos+1,end);
    newNode->left=buildTree(postorder,inorder,start,pos-1);
    return newNode;

}
void inOrder(node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    int inorder[]={4,2,5,1,6,3,7};
    int postorder[]={4,5,2,6,7,3,1};
    node* root=buildTree(postorder,inorder,0,6);
    inOrder(root);
    return 0;
}