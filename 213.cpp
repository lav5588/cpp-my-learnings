//Maximum Pathsum In a Binary Tree


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
int maxPathSumUtill(node* root ,int &ans){
    if(root==NULL)return 0;
    int left=maxPathSumUtill(root->left,ans);
    int right=maxPathSumUtill(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),
                    max(root->data+left,root->data+right));
    ans=max(ans,nodeMax);
    int singlePathSum=max(root->data,max(root->data+left,root->data+right));
    return singlePathSum;
}
int maxpathSum(node* root){
    int ans=INT_MIN;
    maxPathSumUtill(root,ans);
    return ans;
}

int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);

   cout<<maxpathSum(root);
  
    return 0;
}






