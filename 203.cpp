// calculation of diameter of a binary tree:Optimised Approach



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

int diameterOfBinaryTree(node* root,int* height){
    if(root== NULL){
        return 0;
        *height=0;
    } 
    int lh=0,rh=0;
    int lDiameter=diameterOfBinaryTree(root->left,&lh);
    int rDiameter=diameterOfBinaryTree(root->right,&rh);
     int currDiameter=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currDiameter,max(lDiameter,rDiameter));
}
int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
   int height=0;
   cout<<diameterOfBinaryTree(root,&height)<<endl;
    return 0;
}