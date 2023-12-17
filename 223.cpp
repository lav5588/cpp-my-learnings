//largest BST in BInary Tree


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

struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info largestBSTinBt(node* root){
    if(root==NULL) return {0,INT_MIN,INT_MAX,0,true};
    if(root->left==NULL && root->right==NULL) return {1, root->data,root->data,1,true};
    Info leftInfo=largestBSTinBt(root->left);
    Info rightInfo=largestBSTinBt(root->right);
    Info curr;
    curr.size=1+leftInfo.size+rightInfo.size;
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max<root->data && rightInfo.min>root->data){
        curr.min=min(leftInfo.min,min(root->data,rightInfo.min));
        curr.max=max(rightInfo.max,max(leftInfo.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(leftInfo.ans,rightInfo.ans);
    curr.isBST=false;
    return curr;
}

void preOrder(node *root){
    if(root==NULL)return;

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}



int main(){
    node* root=new node(15);
    root->left=new node(20);
    root->left->left=new node(5);
    root->right=new node(30);
  cout<<"Largest BST in BT :"<<largestBSTinBt(root).ans<<endl;
  
    return 0;
}






