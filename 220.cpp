//possible BST 


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
vector<node*> constructTrees(int start,int end){
    vector<node*>trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for (int i=start;i<=end;i++){
        vector<node*>leftSubtree=constructTrees(start,i-1);
        vector<node*>rightSubtree=constructTrees(i+1,end);
        for(int j=0;j<leftSubtree.size();j++){
            node* left=leftSubtree[j];
            for(int k=0;k<rightSubtree.size();k++){
                node* right=rightSubtree[k];
                node* Node=new node(i);
                Node->left=left;
                Node->right=right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}


void preOrder(node *root){
    if(root==NULL)return;

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}



int main(){
   vector<node*>totalTrees=constructTrees(1,3);
   for(int i=0; i<totalTrees.size();i++){
    cout<<i+1<<":\t";
    preOrder(totalTrees[i]);
    cout<<endl;
   }
    return 0;
}






