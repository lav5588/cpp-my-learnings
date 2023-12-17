//Lowest Common Ancestor for two nodes


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
bool getPath(node*root,int key,vector<int>&path){
    if(root==NULL)return false;
    path.push_back(root->data);
    if(root->data==key)return true;
    if(getPath(root->left,key,path) || getPath(root->right,key,path))
        return true;
    path.pop_back();
    return false;
}

int LCA(node* root,int n1,int n2){
    vector<int>path1,path2;
    if(!getPath(root,n1,path1) || !getPath(root,n2,path2))
        return -1;
    int pc;
    for(pc=0;pc<path1.size(),pc<path2.size();pc++){
        if(path1[pc]!=path2[pc])break;
    }
    return path1[pc-1];
}
//another method
node* LCA2(node* root,int n1, int n2){
    if(root==NULL)return NULL;
    if(root->data==n1 || root->data==n2)return root;
    node* left=LCA2(root->left,n1,n2);
    node* right=LCA2(root->right,n1,n2);
    if(left!=NULL && right!=NULL)return root;
    if(left== NULL && right==NULL)return NULL;
    if(left!=NULL)return LCA2(root->left,n1,n2);
    return LCA2(root->right,n1,n2);
 }



int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);

   cout<<LCA(root,6,4)<<endl;

   node* LCA=LCA2(root,6,4);
   cout<<LCA->data;
  
    return 0;
}